#include<iostream>
using namespace std;

void print_2d_array(int arr[][100], int n, int m){
    cout << "Your elements are: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
}

int main(){
    // int arr[100][100]; // const size array
    // int n, m;
    // cout << "Enter no of rows: ";
    // cin >> n;
    // cout << "Enter no of cols: ";
    // cin >> m;
    // cout << "Enter your elements: ";
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin >> arr[i][j];
    //     }
    // }
    // print_2d_array(arr, n, m);

    // initilize array at time of declaration
    // int arr[3][2] = {{1,2},{3,4},{5,6}}; // m1
    int arr[5][5] = {{1,2},{3,4},{5,6}}; // m2
    // int arr[][] = {{1,2},{3,4},{5,6}}; // wrong

    // print_2d_array(arr, 3, 2);
    cout << "Your elements are: "<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }

    return 0;
}