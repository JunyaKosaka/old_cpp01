#include <fstream>
#include <iostream>
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
  std::string file_str(""), line("");
  while (true) {
    std::getline(ifs, line);
    file_str += line;
    if (ifs.eof()) {
      break;
    }
    file_str += "\n";
  }

  std::string new_str("");
  std::string::size_type pos = file_str.find(s1);
  while (pos != std::string::npos) {
    new_str = file_str.substr(0, pos) + s2 + file_str.substr(pos + s1.length());
    file_str = new_str;
    pos = file_str.find(s1, pos + s2.length());
  }
  ofs << file_str << std::endl;

  ifs.close();
  ofs.close();

  return 0;
}
