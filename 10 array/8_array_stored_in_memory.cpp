#include <iostream>
using namespace std;

void print_arr(int arr[], int n)
{
    cout << "func : " << sizeof(arr) << endl; // arr is just a ptr address. pass by value
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size = 5;
    int arr[size];
    cout << arr << endl; // so arr is pointer which store base address of arr
    arr[3] = 67;
    *(arr + 2) = 4;

    // sizeof
    int a;
    double d;
    cout << sizeof(a) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(bool) << endl;

    // arrays and functions
    cout << "main : " << sizeof(arr) << endl;
    int n = sizeof(arr) / sizeof(int);
    print_arr(arr, n);
    return 0;
}
