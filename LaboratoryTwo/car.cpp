#include "LaboratoryTwo.h"

Car::Car(const String& model_, const int& horsepower_, const int& year_) : model(model_), horsepower(horsepower_), year(year_) {};

ostream& operator<<(ostream& os, const Car& car) {
	os << "������: " << car.model << "\n" << "��������� ���: " << car.horsepower << "\n" << "��� �������: " << car.year << endl;
	return os;
}

String Car::getModel() {
	return model;
}
int Car::getHorsepower() { 
	return horsepower;
}
int Car::GetYear() {
	return year;
}