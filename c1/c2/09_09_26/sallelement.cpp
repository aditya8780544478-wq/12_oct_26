#include <iostream>
using namespace std;

int main()
{
    int arr[2][2] = {
        {10, 20},
        {40, 50}
    };
    int sum = 0;
    for (int j = 0; j < 2; j++)
    {
    
        for (int i = 0; i < 2; i++)
        {
            sum = sum + arr[j][i];
        }
        cout << "Sum of all element " << " = " << sum << endl;
    }
    return 0;
}
