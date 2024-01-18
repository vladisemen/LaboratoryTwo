#include "LaboratoryTwo.h"

AutoDealer::AutoDealer(AutoSalon& salon_) : salon(salon_), index(0) {}

Car* AutoDealer::next() {
	if (index > salon.getCount()) {
		index = 0;
		return salon.end();
	}
	return salon[index++];
}