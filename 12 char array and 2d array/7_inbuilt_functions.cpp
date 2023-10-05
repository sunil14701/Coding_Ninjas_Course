#include<iostream>
#include<cstring>
using namespace std;

void print_prefixs(char s[]){
    // m1
    // string ans = "";
    // for(int i=0;i<s[i]!='\0';i++){
    //     ans+=s[i];
    //     cout << ans << endl;
    // }

    // m2
    for(int i=0;s[i]!='\0';i++){
        for(int j=0;j<=i;j++){
            cout << s[j];
        }
        cout << endl;
    }
}

int main(){
    // length 
    // char input[100];
    // cin >> input;
    // cout << strlen(input) << endl;
    // cout << input<< endl;

    // compare 2  strings
    // cout << strcmp("sunil", "linus") << endl;
    // cout << strcmp("sunil", "sunil") << endl;

    // copy string
    // char source[100] = "me";
    // char dest[100]= "hello";
    // cout << source << endl;
    // cout << dest << endl;

    // strcpy(dest, source);
    // strncpy(dest, source,3);
    // cout << source << endl;
    // cout << dest << endl;

    // problem 
    // print all the prefixes of a string
    char s[100];
    cin >> s;
    print_prefixs(s);

    return 0;
}