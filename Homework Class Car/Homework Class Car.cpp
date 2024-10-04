#include <iostream>
#include <cstring>

class Car {
private:
    char* model;
    char* country;
    int year;
    double price;

public:
    Car() {
        model = new char[1];
        country = new char[1];
        model[0] = '\0';
        country[0] = '\0';
        year = 0;
        price = 0.0;
    }

    Car(const char* model, const char* country, int year, double price) {
        this->model = new char[strlen(model) + 1];
        this->country = new char[strlen(country) + 1];
        strcpy(this->model, model);
        strcpy(this->country, country);
        this->year = year;
        this->price = price;
    }
    ~Car() {
        delete[] model;
        delete[] country;
    }
    const char* getModel() const {
        return model;
    }

    const char* getCountry() const {
        return country;
    }

    int getYear() const {
        return year;
    }

    double getPrice() const {
        return price;
    }
    void setModel(const char* model) {
        delete[] this->model;
        this->model = new char[strlen(model) + 1];
        strcpy(this->model, model);
    }
    void setCountry(const char* country) {
        delete[] this->country;
        this->country = new char[strlen(country) + 1];
        strcpy(this->country, country);
    }
    void setYear(int year) {
        this->year = year;
    }
    void setPrice(double price) {
        this->price = price;
    }