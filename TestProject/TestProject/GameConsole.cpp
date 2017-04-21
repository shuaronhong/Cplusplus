#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "CodeMaker.h"
#include "CodeBreaker.h"
#include "Agreements.h"
using std::cout;
using std::endl;
using std::cin;

int main(){
	Agreements agr = Agreements();
	CodeMaker myth = CodeMaker(agr.totalSlots, agr.totalColors);
	CodeBreaker cb1 = CodeBreaker("ahong");
	for (int i = 0; i < agr.totalAttempts; i++) {
		cout << "Please input what you guessed: " << endl;
		cb1.Guess();
		myth.FeedBack(cb1.guessed);
	}
	myth.Triumph();
	int end;
	cin >> end;
	return end;
}