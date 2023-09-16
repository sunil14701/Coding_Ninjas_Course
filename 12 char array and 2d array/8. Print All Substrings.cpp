#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(string input) {
    int n = input.size();
    for(int i=0;i<n;i++){
        string ans = "";
        for(int j=i;j<n;j++){
            ans+=input[j];
            cout << ans << endl;
        }
    }
}

int main() {
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}