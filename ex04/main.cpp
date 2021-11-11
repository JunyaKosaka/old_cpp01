#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    if (argc != 4) {
		std::cout << "INVALID INPUT!" << std::endl;
        std::cout << "INPUT LIKE THIS ./a.out <filename> <s1> <s2>" << std::endl;
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
	while (1) {
		std::getline(ifs, line);
		file_str += line;
		if (ifs.eof()) {
			break;
		}
		file_str += '\n';
	}

    std::string::size_type pos = file_str.find(s1);
    while (pos != std::string::npos) {
        file_str.replace(pos, s1.length(), s2); // .replaceは使えない
        pos = file_str.find(s1, pos + s2.length());
    }
	ofs << file_str << std::endl;

	ifs.close();
	ofs.close();

    return 0;
}