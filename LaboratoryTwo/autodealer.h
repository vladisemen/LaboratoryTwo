#include "LaboratoryTwo.h"

class AutoDealer {
public:
    AutoDealer(Car** carArray, int counter);
    
    bool hasNext();

    // ��������� ��� �������� � ���������� ��������
    AutoDealer& operator++();

    // �������� ������������� ��� ��������� �������� ��������
    Car* operator*();

    // �������� ����������� ��� �������� ��������� ��������
    bool operator!=(const AutoDealer& other);

private:
    Car** carArray_;
    int counter_;
    int currentIndex;
};
