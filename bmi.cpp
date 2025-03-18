// bmi.cpp
#include "bmi.h"
#include <iostream>
#include <istream>

using namespace std;

bmi::bmi(float w, float h) : w(w), h(h) {}

float bmi::bmiCalculate() const{
	return (w * 0.45) / ((h * 0.025) * (h * 0.025));} // this is the long logical way of bmi metric conversion, simply bc i didnt wanna include the math library

void bmi::bmiCategory() const{
	float bmi_ = bmiCalculate();
    	cout << "Your BMI is " << bmi_ << "." << endl;

    	if (bmi_ < 18.5) {
        	cout << "You are underweight." << endl;} 
	else if (bmi_ >= 18.5 && bmi_ < 24.9) {
     	   cout << "You are normal weight." << endl;} 
	else if (bmi_ >= 25 && bmi_ < 29.9) {
    	    cout << "You are overweight." << endl;} 
	else{
    	    cout << "You are obese." << endl;}}
