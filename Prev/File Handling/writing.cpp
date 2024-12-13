#include <iostream>
#include <fstream> 
using namespace std;

int main() {
    ofstream file;
    file.open("file.txt");
    file << "Hello World!" << endl;
    file << "I am learning C++";
    cerr << "File written successfully" << endl;
    file.close();
    return 0;
}