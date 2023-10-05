#include<iostream>
using namespace std;

int main(){
    int arr[100][100]; // const size array
    int n, m;
    cout << "Enter no of rows: ";
    cin >> n;
    cout << "Enter no of cols: ";
    cin >> m;
    cout << "Enter your elements: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    cout << "Your elements are: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
    cout << endl;
    
    cout << "Your elements col wise: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr[j][i]<<" ";
        }
        cout << endl;
    }

    return 0;
}