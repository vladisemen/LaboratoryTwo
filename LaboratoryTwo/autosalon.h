#pragma once
#include "LaboratoryTwo.h"

// SingleTon
class AutoSalon {
public:
	static AutoSalon& getInstance();
	
	void addCar(Car* car);
	void sell(int index);

	int getCount();

	Car* begin();
	Car* end();

	Car* operator[](int index);

	~AutoSalon();
private:
	AutoSalon();
	AutoSalon(const AutoSalon&) = delete;
	AutoSalon& operator=(const AutoSalon&) = delete;

	Car** CarArray;
	int counter;


	static AutoSalon* instance;
};