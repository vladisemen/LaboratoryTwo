#include "LaboratoryTwo.h"

AutoSalon* AutoSalon::instance = nullptr;
AutoSalon& AutoSalon::getInstance() {
    if (instance == nullptr) {
        instance = new AutoSalon();
    }
    return *instance;
}

int AutoSalon::getCount() {
    return counter;
}

void AutoSalon::addCar(Car* car) {
    Car** newCarArray = new Car * [counter + 1];
    for (int i = 0; i < counter; ++i) {
        newCarArray[i] = CarArray[i];
    }
    newCarArray[counter] = car;
    delete[] CarArray;
    CarArray = newCarArray;
    ++counter;
}

void AutoSalon::sell(int index) {

    if (index >= 0 && index < counter) {
        cout << "¬ами успешно приобретена машина: " << CarArray[index] << endl;
        delete CarArray[index];
        for (int i = index; i < counter - 1; ++i) {
            CarArray[i] = CarArray[i + 1];
        }
        --counter;
        
    }
    
    else {
        cout << "ƒанной машины не сущетсвует." << endl;
    }
}

Car* AutoSalon::begin() {
    return CarArray[0];
}
Car* AutoSalon::end() {
    return CarArray[counter];
}

Car* AutoSalon::operator[](int index) {
    if (index >= 0 && index < counter) {
        return CarArray[index];
    }
    else {
        std::cout << "ќставь надежду вс€к за пределы индексации идущий." << std::endl;
        return nullptr;
    }
}

AutoSalon::~AutoSalon() {
    for (int i = 0; i < counter; ++i) {
        delete CarArray[i];
    }
    delete[] CarArray;
}
AutoSalon::AutoSalon() {
    counter = 0;
    CarArray = new Car * [] {};
}
