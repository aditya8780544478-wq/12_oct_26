#include<iostream>
using namespace std;
class shape{
    public:
    virtual void calculatearea()=0;          
};
class ractangle:public shape{
    public:
    void  calculatearea() override{
        int langht = 20, breadth = 10;
        cout<<"area of ractengle is "<<langht*breadth<<endl;
    
    }
}; 
int main(){
    ractangle r;
    r.calculatearea();
}