#include <iostream>
using namespace std;
void lcm(int a,int b)
{
    for(int i=1;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
        int lcm=i;
        
        break;
    }
    cout<<lcm;
}
int main()
{
    lcm(5,3);
}

    return 0;
}