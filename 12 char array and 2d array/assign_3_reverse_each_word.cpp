#include <bits/stdc++.h> 
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string reverseEachWord(string input)
{
   int start = 0;
   for(int i=0;i<input.size();i++){
       if(input[i]==' ' or i == input.size()-1){
           int end = i-1;
           if(input.size()-1 == i) end = i;
           while(start<=end){
                swap(input[start++],input[end--]);
           }
           start = i+1;
       }
   }
   return input;
}

int main()
{

    string str;
    getline(cin, str);
    string ans = reverseEachWord(str);
    cout << ans << endl;
    ;
}