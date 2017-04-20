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
		
		for (int i = 0; i < totalSlots; i++){
			int rd = rand() % totalColors + 1;
			result.push_back(rd);
		}
	}
	void FeedBack(){
	}
	void Triumph(){
		string output = "";
		std::ostringstream ostrstr;
		for (vector<int>::iterator it = result.begin(); it != result.end(); it++){
			ostrstr << *it;
			output += *it;
		}
		cout<<output<<endl;
		cout << ostrstr.str() << endl;
	}
private:
	vector<int> result;
	const string name = "Computer";
};