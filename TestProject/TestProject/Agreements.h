#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

struct Agreements {
	int totalSlots;
	int totalColors;
	int totalAttempts;
	string lastModifiedPerson;
	Agreements(){
		totalSlots = 4;
		totalColors = 6;
		totalAttempts = 10;
		lastModifiedPerson = "System";
		display();
	}
	Agreements(int ttlSlots, int ttlColors, int ttlAttempts) {
		totalSlots = ttlSlots;
		totalColors = ttlColors;
		totalAttempts = ttlAttempts;
		lastModifiedPerson = "System";
		display();
	}
	void display(){
		cout << "Last Modified by " << lastModifiedPerson << endl;
		cout << "Total Number of Slots is: " << totalSlots << endl;
		cout << "Total Number of Colors is: " << totalColors << endl;
		cout << "Total Number of Attempts allowed is: " << totalAttempts << endl;
	}
	void Modify(int ttlSlots, int ttlColors, int ttlAttempts, string name){
		totalSlots = ttlSlots;
		totalColors = ttlColors;
		totalAttempts = ttlAttempts;
		lastModifiedPerson = name;
		display();
	}

};