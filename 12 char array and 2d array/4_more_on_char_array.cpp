#include<iostream>
using namespace std;

void  reverse_string(char s[]){
    int size = 0;
    for(int i=0;s[i]!='\0';i++) size++;
    for(int i=0;i<size/2;i++) swap(s[i],s[size-i-1]);

}

int main(){
    // char input[40];
    // cin >> input; // space, tab, newline are delimiter
    // cin.getline(input,40); // args -> name of string, len of string, optinal args. getline breaks at newline
    // cin.getline(input,4); // will read only 3 char and last will be null_char  
    // cin.getline(input,40,'s'); // third args is delimiter
    // cout << input;

    // problem
    // reverse a string passed by user
    char s[100];
    cin.getline(s,100);
    cout << "Your string is : " << s;
    cout << endl;
    reverse_string(s);
    cout << "reversed string is : " << s;
    cout << endl;

    return 0;
}