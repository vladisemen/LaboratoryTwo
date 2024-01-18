#pragma once
#include "LaboratoryTwo.h"

class Car {
public:
	Car(const String& model_, const int& horsepower_, const int& year_);
	friend ostream& operator<<(ostream& os, const Car& city);

	String getModel();
	int getHorsepower();
	int GetYear();

private:
	String model;
	int horsepower;
	int year;
};