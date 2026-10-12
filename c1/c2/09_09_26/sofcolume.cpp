#include <iostream>
using namespace std;

int main()
{
    int arr[2][2] = {
        {10, 20},
        {40, 50}
    };
    for (int j = 0; j < 2; j++)
    {
        int sum = 0;
        for (int i = 0; i < 2; i++)
        {
            sum = sum + arr[i][j];
        }
        cout << "Sum of colume " << j + 1 << " = " << sum << endl;
    }
    return 0;
}
