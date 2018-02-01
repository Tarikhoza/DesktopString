#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void LOG(string input) {
	fstream LogFile;
	LogFile.open("dat.txt", fstream::app);
	if (LogFile.is_open()) {
		LogFile << input;
		LogFile.close();
	}
}
int main()
{
int a;	
int b;
	string output;
 do{
    cin>>output;
    output += " ";
	fstream LogFile;
	LogFile.open("dat.txt", fstream::app);
	if (LogFile.is_open()) {
	LogFile << string(output);
	LogFile.close();
	b=output.length();
output.erase(0,b);
	}	
}while(a=1);

}
