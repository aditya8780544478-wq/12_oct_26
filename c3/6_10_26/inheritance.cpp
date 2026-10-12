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
class cycale:public car{
    public display(){
        cout<<" this is a cycale class";
    }
};
class privetejete: public cycale
void p(){

    cout<<"this is privetejete ";
}
int main() {
    Car car1;
    car1.model = "M5";
    cout << "Brand: " << car1.brand << endl;
    cout << "Model: " << car1.model << endl;
    car1.hunk();
    return 0;
}
