#include <iostream>
#include <fstream>
#include <string>

int main() {
    ifstream inFile("example.txt"); 

    if (inFile.is_open()) {
        std::string line;
        while (getline(inFile, line)) {
            std::cout << line << '\n';  // Print the lines read from the file
        }
        inFile.close();  // Close the file
    } else {
        std::cerr << "File could not be opened!\n";
    }

    return 0;
}
