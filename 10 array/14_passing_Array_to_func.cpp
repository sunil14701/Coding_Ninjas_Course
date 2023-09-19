#include<iostream>
using namespace std;

void print_arr(int arr[], int n){
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
}

void func(int a, int arr[] , int size){
    a++;
    arr[0]++;
}

void reverse(int arr[], int size){
    for(int i=0;i<size/2;i++) swap(arr[i],arr[size-i-1]);
}

int main(){
    int arr[] = {1,2,3,4,7};
    int size = sizeof(arr)/sizeof(int);
    print_arr(arr, size);

    int arr2[10] = {1,2,4,5};
    int size2 = sizeof(arr2)/sizeof(int);
    print_arr(arr2, size2);

    // passing arr and variable to func
    int a = 4;
    func(a, arr, size);
    cout << a << endl; // this will not change; passed by value
    cout << arr[0] << endl; // this will change as pass by refernce; address pass hua tha arr ka so uss address par ja ke change kiya hai value ko

    // reverse an array
    print_arr(arr, size);
    reverse(arr,size);
    print_arr(arr, size);

    return 0;
}   