// MassAndDensity.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float fltDensity, fltMass, fltVolume;
	cout << "Type Mass in grams and density in grams per cubic centimeter to get volume." << endl;

	cin >> fltMass >> fltDensity;

	fltVolume = (fltMass * fltDensity);

	cout << "Mass = " << fltMass << " Grams" << endl;
	cout << "Density = " << fltDensity << " Grams per cubic centimeters" << endl;
	cout << "Volume = " << fltVolume << endl;
    return 0;
}

