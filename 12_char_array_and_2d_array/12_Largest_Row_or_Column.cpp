#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int arr[n][m];
        for(int i=0;i<n;i++)
           for(int j=0;j<m;j++) cin >> arr[i][j];
        
        pair<int,int> ans = {0,0};
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=0;j<m;j++){
                sum+=arr[i][j];
            }
            if(sum > ans.second){
                ans.second = sum;
                ans.first = i;
            }
        }
        bool col = false;
        for(int i=0;i<m;i++){
            int sum = 0;
            for(int j=0;j<n;j++){
                sum+=arr[j][i];
            }
            if(sum > ans.second){
                ans.second = sum;
                ans.first = i;
                col = true; 
            }
        }

        if(col) cout << "column "<< ans.first <<" "<< ans.second << endl;
        else cout << "row "<< ans.first <<" "<< ans.second << endl;
    }


    return 0;
}