#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int size;
        cin >> size;
        int arr[size];
        for(int i=0;i<size;i++) cin >> arr[i];
        int exp_sum = ((size-2)*(size-1))/2;
        int sum = 0;
        for(int i=0;i<size;i++) sum+=arr[i];
        cout << sum-exp_sum << endl;
    }
    return 0;
}