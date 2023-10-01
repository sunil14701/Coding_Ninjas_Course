#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    unordered_map<char,int>mp;
    int size1=0, size2=0;
    for(int i=0;input1[i]!='\0';i++) size1++;
    for(int i=0;input2[i]!='\0';i++) size2++;
    for(int i=0;i<size2;i++) {
        mp[input1[i]]++;
        mp[input2[i]]--;
    }
    for(auto it:mp){
        cout << it.second << " ";
        if(it.second != 0 ) return false;
    }
    return true;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}