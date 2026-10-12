#include <iostream>
using namespace std;

class vihacal {
public:
    void travel() {
        cout << "This is the travel class" << endl;
    }
};

class car : public vihacal {
public:
    void cartravel() {
        cout << "This is car travel class" << endl;
    }
};

class fare {
public:
    void fare_a() {
        cout << "It is a fare class" << endl;
    }
};

class bus : public vihacal, public fare {
public:
    void bustravel() {
        cout << "This is bus travel class" << endl;
    }
};

int main() {
    bus obj1;

    obj1.bustravel();
    obj1.fare_a();
    obj1.travel();

   
    return 0;
}
