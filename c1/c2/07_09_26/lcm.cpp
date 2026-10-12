#include <iostream>
using namespace std;
int main()
{
    int lcm;
    int a=6;
    int b=3;
    for(int i=1;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
        lcm=i;
        cout<<lcm;
        break;
    }
}
    return 0;
}