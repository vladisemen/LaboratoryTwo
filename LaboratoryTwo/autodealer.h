#pragma once
#include "LaboratoryTwo.h"

class AutoDealer {
public:
    AutoDealer(AutoSalon& salon_);

    Car* next();

private:
    AutoSalon& salon;
    int index;
};
