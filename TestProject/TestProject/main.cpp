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
	CodeMaker myth = CodeMaker(4, 6);
	CodeBreaker cb1 = CodeBreaker();
	myth.Triumph();
	int end;
	cin >> end;
	return end;
}