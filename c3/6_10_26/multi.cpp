#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string brand = "BMW";

    void hunk() {
        cout << "Hello, vehicle." << endl;
    }
};

class Car : public Vehicle {
public:
    string model = "M5";
};

class Cycale : public Car {
public:
    void display() {
        cout << "This is a Cycale class." << endl;
    }
};

class PrivateJete : public Cycale {
public:
    void p() {
        cout << "This is PrivateJete." << endl;
    }
};

int main() {
    PrivateJete obj;

    cout << "Brand: " << obj.brand << endl;
    cout << "Model: " << obj.model << endl;

    obj.hunk();
    obj.display();
    obj.p();

    return 0;
}
