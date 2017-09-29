/*
Colin Durocher - 9/25/2017 - 3
Program Problem 1
*/
// Libraries
#include <iostream>
#include <conio.h>
//Namespaces
using namespace std; //* 
//Function()
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
//Main
void main() {
	// Define and Assign your variable(s)
	int class_period ;
	// Display Text
	cout << "Hello World \n";
	cout << "Your name is Colin Durocher \n";
	cout << "Your class is 3rd period \n";
	pause(); // pauses to see the displayed text
	}