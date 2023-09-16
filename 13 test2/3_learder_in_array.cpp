#include<iostream>
using namespace std;

vector<int> leaders(int a[], int n){
        vector<int>vec;
        vec.push_back(a[n-1]);
        int bigger = a[n-1];
        for(int i=n-2;i>=0;i--){
            if(a[i]>=bigger)
            {
                bigger = a[i];
                 vec.push_back(a[i]);
            }
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }


int main(){

    int n;
    cin >> n;



    return 0;
}