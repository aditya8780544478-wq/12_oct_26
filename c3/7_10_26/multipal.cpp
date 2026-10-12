#include <iostream>
using namespace std;

class a {
public:
    void show1() {
        cout << "show a" << endl;
    }
};

class b {
public:
    void show2() {
        cout << "show b" << endl;
    }
};

class c : public a, public b {
public:
    void show3() {
        cout << "show c" << endl;
    }
};
int main() {
    c obj;

 obj.show1();
obj.show2();
 obj.show3();
}
