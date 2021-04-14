#include <fstream>
#include <iostream>
using namespace std;
int main() {
     ofstream file("output.txt");
    file << "Hello World¡"<< endl;
    file.close();
}