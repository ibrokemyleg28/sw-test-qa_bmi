#include "bmi.h"
#include <iostream>
#include <istream>

using namespace std;

int main(){
	bool test = true;
	char choice;

	cout << "Welcome to the Body Mass Index (BMI) Calculator Command Line Application." << endl;

	while(test == true){
		float h, w;

		cout << "Please enter your height in total inches, without using apostrophes or quotes: ";

		cin >> h;

		cout << endl << "Please enter your weight in pounds (lbs.) to the nearest tenth (0.1) of a decimal: ";

		cin >> w;

		bmi user(w, h);

		user.bmiCategory();

		cout << "Would you like to do another BMI calculation? (Press any key + Enter for yes, 'n' for no): ";

		cin >> choice;

		if (choice == 'n'){
			test = false;}}
	return 0;}
	
	