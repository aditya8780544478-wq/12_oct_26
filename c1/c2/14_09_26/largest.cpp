#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter number of row";
    cin>>m;
    cout<<"enter number of colume";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<m;i++)
    {
        for(int j=0;j<n;j++)
            cin>> arr[i][j];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
          cout<< arr[i][j]<<"";
        cout<<endl;
    }
    int max=0;
    for(int i=0; i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if( arr[i][j]<max)
                max=arr[i][j];
        }
    }
    cout<<"max="<<max;
    return 0;
}
