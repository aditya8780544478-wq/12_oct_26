#include <iostream>
using namespace std;
int main(){
    int p,q;
    cout<<"row";
    cin>>p;
    cout<<"colume";
    cin>>q;
    int arr[p][q];
    for(int i=0;i<=p;i++)
    {
    for(int j=0;j<=q;j++)
{
     cout<<arr[i][j];
}
    
        cout<<endl;
    }
    return 0;
}