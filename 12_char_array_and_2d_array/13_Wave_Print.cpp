#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> arr[i][j];
            }
        }
        cout <<"----------------"<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout << arr[j][i] <<  " ";
            }
            i++;
            if(i>=m) break;
            for(int j=n-1;j>=0;j--){
                cout << arr[j][i] <<  " ";
            }
        }
    cout << endl;
    }


    return 0;
}
// 1 5 9 10 6 2 3 7 11 12 8 4
// Sample Output 2:
// 1 4 7 10 13 14 11 8 5 2 3 6 9 12 15 
// 10 40 70 80 50 20 30 60 90 

// #include <bits/stdc++.h> 
// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {
//     vector<int>vec;
//     for(int i=0;i<mCols;i++){
//         for(int j=0;j<nRows;j++){
//             vec.push_back(arr[j][i]);
//         }
//         i++;
//         if(i>=mCols) break;
//         for(int j=nRows-1;j>=0;j--){
//             vec.push_back(arr[j][i]);
//         }
//     }
//     return vec;
// }