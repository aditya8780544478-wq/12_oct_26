#include <iostream>
using namespace std;
class student {
public:
    int n;
    string name;
    void display(){
        cout<<"this is a display function";
    }
};
int main() {
    cout << "hello world" << endl;
    student obj;
    obj.name = "amit";
    obj.n = 25;
    obj.display();
    cout << obj.name << endl;
    cout << obj.n << endl;
    return 0;
}
