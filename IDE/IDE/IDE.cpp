// IDE.cpp : Integrated Development Environment 
// Individual Assignment Week 1: Basic Inputs and Outputs
// Marcia Allen
// September 26, 2016
// This assignment was to write a simple program using basic inputs and outputs and
// to familiarize myself with, and to demonstrate basic functionality.
// Basics considered are standard includes, basic input/output streams, variables to perform calculations,
// and appropriate comments to document what is being done in the program for understanding and future changes.
// This program calculates the area of a wall, the amount of paint needed to paint the wall, the cost of the paint,
// and the time required to paint a wall.

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {
	double width = 0.0;
	double height = 0.0;
	double area = 0.0;

	// Input the width of the wall in feet

	cout << "Enter the width of the wall in feet: ";
	cin >> width;

	// Input the height of the wall in feet

	cout << "Enter the height of the wall in feet: ";
	cin >> height;

	// Calculate and output area of wall

	area = height * width;
	cout << "Total area to paint in square feet: "
		<< area
		<< endl;

	// Calculate amount of paint needed

	double gallons = 0.0;
	const double sqFeetPerGallon = 350.0;

	gallons = ceil(area / sqFeetPerGallon);
	cout << "Total number of gallons of paint needed: "
		<< gallons
		<< endl;

	// Calculate cost of paint

	double cost = 0.0;
	double costPerGallon = 27.0;

	cost = gallons * costPerGallon;
	cout << "Total cost of paint in dollars: " << cost << endl;

	// Calculate time needed to paint

	double hours = 0.0;
	double sqFeetPerHour = 100.0;

	hours = area / sqFeetPerHour;
	cout << "Total time to paint in hours: "
		<< hours
		<< endl;

	return 0;
}
