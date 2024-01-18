#include <iostream>
#include "LaboratoryTwo.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Создание объектов класса Car\n";
    Car* car1 = new Car("Tesla Model S", 670, 2022);
    Car* car2 = new Car("BMW i8", 369, 2021);
    Car* car3 = new Car("Audi R8", 562, 2022);

    cout << "Получение экземпляра AutoSalon\n";
    AutoSalon& salon = AutoSalon::getInstance();

    cout << "Добавление автомобилей в автосалон\n";
    salon.addCar(car1);
    salon.addCar(car2);
    salon.addCar(car3);

    cout << "Проверка количества автомобилей в автосалоне\n";
    cout << "Количество автомобилей в автосалоне: " << salon.getCount() << endl;

    cout << "Создание объекта класса AutoDealer\n";
    AutoDealer dealer(salon);

    cout << "Проверка метода next класса AutoDealer\n";
    Car* nextCar = dealer.next();
    cout << "автомобиль в автосалоне: " << *nextCar << endl;
    nextCar = dealer.next();
    cout << "Следующий автомобиль в автосалоне: " << *nextCar << endl;
    nextCar = dealer.next();
    cout << "Последний автомобиль в автосалоне: " << *nextCar << endl;
    
    
    return 0;
}

