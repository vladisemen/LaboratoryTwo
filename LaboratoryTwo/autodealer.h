#include "LaboratoryTwo.h"

class AutoDealer {
public:
    AutoDealer(Car** carArray, int counter);
    
    bool hasNext();

    // Инкремент для перехода к следующему элементу
    AutoDealer& operator++();

    // Оператор разыменования для получения текущего элемента
    Car* operator*();

    // Оператор неравенства для проверки окончания итерации
    bool operator!=(const AutoDealer& other);

private:
    Car** carArray_;
    int counter_;
    int currentIndex;
};
