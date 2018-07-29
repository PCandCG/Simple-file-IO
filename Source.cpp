#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	const char *path = "D:\C++\Dofe\SimpleFileIO\SimpleFileIO\Output.txt";
	string inputText;
	cin >> inputText;
	cout << inputText;
	/*ofstream myfile;
	myfile.open("Output.txt");
	myfile << inputText;
	myfile.close();*/
	ofstream file(path); //open in constructor
	file << inputText;
	return 0;
}\