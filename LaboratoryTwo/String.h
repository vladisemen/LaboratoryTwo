#pragma once
#pragma warning(disable : 4996)

#include <iostream>

using namespace std;

class String {
private:
    char* data;

public:

    String() : data(nullptr) {}


    String(const char* str) {
        if (str) {
            size_t length = strlen(str) + 1;
            data = new char[length];
            strcpy(data, str);
        }
        else {
            data = nullptr;
        }
    }


    ~String() {
        delete[] data;
    }

    String(const String& other) {
        if (other.data) {
            size_t length = strlen(other.data) + 1;
            data = new char[length];
            strcpy(data, other.data);
        }
        else {
            data = nullptr;
        }
    }

    String& operator=(const String& other) {
        if (this != &other) {
            delete[] data;

            if (other.data) {
                size_t length = strlen(other.data) + 1;
                data = new char[length];
                strcpy(data, other.data);
            }
            else {
                data = nullptr;
            }
        }

        return *this;
    }

    friend std::ostream& operator<<(std::ostream& os, const String& str) {
        if (str.data) {
            os << str.data;
        }
        return os;
    }
};
