#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  if (argc != 2) {
    std::cerr << "Usage: generate_test <num_files>\n";
    return 1;
  }

  int num_files = std::stoi(argv[1]);

  for (int i = 0; i < num_files; ++i) {
    std::string filename = "file_" + std::to_string(i) + ".txt";
    std::ofstream outfile(filename);

    if (!outfile) {
      std::cerr << "Error opening file: " << filename << "\n";
      return 1;
    }

    outfile << "This is file number " << i << "\n";
    outfile.close();
  }

  return 0;
}
