#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter n value: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i*i;
    }
    cout << "Sum of 1 to "<< n <<" is "<< sum << endl;
    return 0;
}
