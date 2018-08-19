#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	const char *path = "test.txt";
	string inputText;
	cin >> inputText;
	cout << inputText;
	/*ofstream myfile;
	myfile.open("Output.txt");
	myfile << inputText;
	myfile.close();*/
	ofstream file(path); //open in constructor
	file << inputText;
	system("PAUSE");
	return 0;
}
