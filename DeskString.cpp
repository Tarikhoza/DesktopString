#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void LOG(string input) {
	fstream LogFile;
	LogFile.open("log.txt", fstream::app);
	if (LogFile.is_open()) {
		LogFile << input;
		LogFile.close();
	}
}
int main()
{
	string output;
    cin>>output;
	fstream LogFile;
	LogFile.open("log.txt", fstream::app);
	if (LogFile.is_open()) {
	LogFile << string(output);
	LogFile.close();
	}
}
