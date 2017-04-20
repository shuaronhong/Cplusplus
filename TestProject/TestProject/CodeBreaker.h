#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class CodeBreaker{
public:
	string guessed;
	CodeBreaker(){
		attempts = 0;
		cout << "Please input your name: " << endl;
		cin >> name;
		cout << "My Name is: " << name << endl;
	}
	CodeBreaker(string n) {
		attempts = 0;
		name = n;
	}
	void Guess() {
		cin >> guessed;
		attempts += 1;
	}
private:
	string name;
	int attempts;
};