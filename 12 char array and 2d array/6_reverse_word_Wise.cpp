#include <iostream>
using namespace std;

string reverseStringWordWise(string input)
{
    string ans = "";
    string temp = "";
    int size = input.size();
    for(int i=size-1;i>=0;i--){
        if(input[i]==' ' or i==0){
            if(i==0) temp+=input[i];
            for(int j=0;j<temp.size()/2;j++){
                swap(temp[j],temp[temp.size()-j-1]);
            }
            ans += temp;
            if(i!=0) ans+=' ';
            temp = "";
        }else temp+=input[i];
    }
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}