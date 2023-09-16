#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

string removeConsecutiveDuplicates(string input)
{
    string st = "";
    for(int i=0;i<input.size();i++){
        if(st.size()==0) st+=input[i];
        else if(input[i]==st.back()) continue;
        else st+=(input[i]);
    }
    return st;
}

int main()
{
    string str;
    cin >> str;
    string ans = removeConsecutiveDuplicates(str);
    cout << ans << endl;
}