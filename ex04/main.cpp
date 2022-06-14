#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char *argv[]) {
  if (argc != 4 || std::string(argv[2]) == "") {
    std::cout << "[USAGE] ./a.out <filename> <s1> <s2>" << std::endl;
    return 1;
  }

  const std::string input_file(argv[1]);
  std::ifstream ifs(input_file);
  if (ifs.fail()) {
    std::cout << "Failed to open " << input_file << std::endl;
    return 1;
  }

  const std::string output_file(input_file + ".replace");
  std::ofstream ofs(output_file);
  if (ofs.fail()) {
    std::cout << "Failed to open " << output_file << std::endl;
    return 1;
  }

  const std::string s1(argv[2]), s2(argv[3]);
  std::string file_str, line;
  while (true) {
    std::getline(ifs, line);
    file_str += line;
    if (ifs.eof()) {
      break;
    }
    file_str += "\n";
  }

  for (size_t i = 0; i < file_str.length();) {
    bool occurrence = true;
    for (size_t j = 0; j < s1.length(); j++) {
      if (file_str[i+j] != s1[j]) {
        occurrence = false;
        break;
      }
    }
    if (occurrence) {
      ofs << s2;
      i += s1.length();
    } else {
      ofs << file_str[i];
      i++;
    }
  }

  ifs.close();
  ofs.close();

  return 0;
}
