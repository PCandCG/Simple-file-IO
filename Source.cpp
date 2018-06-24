#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string text;
	cin >> text;
	ofstream myfile;
	myfile.open("\test.txt");
	myfile << text;
	myfile.close();
	return 0;
}