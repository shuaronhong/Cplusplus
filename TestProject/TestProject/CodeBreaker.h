#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class CodeBreaker{
public:
	CodeBreaker(){
		attempts = 0;
		cout << "Please input your name: " << endl;
		cin >> name;
		cout << "My Name is: " << name << endl;
	}
private:
	string name;
	int attempts;
};