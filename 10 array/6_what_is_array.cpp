#include <iostream>
#include<climits>
using namespace std;

int main()
{
    // // take array input from user
    int n = 5;
    // cin >> n;

    int arr[n];    // avoid this
    int arr2[100]; // for now dont care of extra space wastage
    // int *arr = new int[n];
    // for (int i = 0; i < n; i++)
    //     cin >> arr2[i];

    // // prining the array to see garbage value
    // for (int i = 0; i < 100; i++)
    //     cout << arr2[i] << " :";

    // find largest ele from array
    int a[5];
    a[0] = 10;
    a[1] = 5;
    a[2] = 105;
    a[3] = 17;
    a[4] = 99;
    // int max = a[0]; // it will fail when array size is 0
    int max = INT_MIN;
    for (int i = 1; i < 5; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    cout << "largest element is : " << max << endl;
    return 0;
}