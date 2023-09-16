#include<iostream>
using namespace std;

long long pairsWithGivenSum(int arr[], int n, int sum)
{
    long long cnt = 0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++) mp[arr[i]]++;
    for(int i=0;i<n;i++){
        if(mp[sum-arr[i]]){
            cnt += mp[sum-arr[i]];
            // cout << cnt << " ";
            mp[arr[i]]--;
            if(sum-arr[i] == arr[i]) cnt--;
        }
    }
    return cnt;   
}


int 
    return 0;
}