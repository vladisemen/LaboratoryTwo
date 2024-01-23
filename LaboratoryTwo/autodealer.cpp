#include "LaboratoryTwo.h"

AutoDealer::AutoDealer(Car** carArray, int counter): carArray_(carArray), counter_(counter), currentIndex(0) {}

bool AutoDealer::hasNext() {
	return currentIndex < counter_;
}

AutoDealer& AutoDealer::operator++() {
    ++currentIndex;
    return *this;
}

Car* AutoDealer::operator*() {
    if (hasNext()) {
        return carArray_[currentIndex];
    }
    return nullptr;
}
bool AutoDealer::operator!=(const AutoDealer& other) {
    return currentIndex != other.currentIndex;
}