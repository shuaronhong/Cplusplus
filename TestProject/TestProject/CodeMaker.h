#include <iostream>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <string>
using std::vector;
using std::string;
using std::cout;
using std::endl;

class CodeMaker {
public: 
	CodeMaker(int totalSlots, int totalColors){
		srand(time(NULL));
		std::ostringstream ostrstr;
		for (int i = 0; i < totalSlots; i++){
			int rd = rand() % totalColors + 1;
			result.push_back(rd);
			ostrstr << rd;
		}
		resultStr = ostrstr.str();
	}
	void FeedBack(string guessed){
		if (resultStr == guessed) {
			cout << "You guessed it" << endl;
		}
		else { cout << "Not Correct" << endl; }
	}
	
	void Triumph(){
		string output = "";
		
		for (vector<int>::iterator it = result.begin(); it != result.end(); it++){
			
			output += *it;
		}
		cout<<output<<endl;
		
	}
private:
	vector<int> result;
	const string name = "Computer";
	string resultStr;
};