#pragma once
#include "LaboratoryTwo.h"
#include "autodealer.h"

// SingleTon
class AutoSalon {
public:
	static AutoSalon& getInstance();
	
	void addCar(Car* car);
	void sell(int index);

	int getCount();

	AutoDealer createAutoDealer() {
		return AutoDealer(CarArray, counter);
	}

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