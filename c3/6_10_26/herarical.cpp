#include <iostream>
using namespace std;
class a{
    public:
    void d1(){
        cout<<"this is class a"
    }
};
class b: public a{
    public:
    void d2(){
        cout<<"this is class b";
    }
};
class c: public a{
    public:
    void d3(){
        cout<<"this is class c";
    }
};
int main(){
    a.obj;
    c.obj;
}