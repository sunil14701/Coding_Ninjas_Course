#include<iostream>
using namespace std;

int str_len(char s[]){
    int cnt=0;
    for(int i=0;s[i]!='\0';i++) cnt++;
    return cnt;
}

int main(){
    char s[100];
    cin >>s;
    // s[3] = 'e';// if the word len is 3 like "abc". we are trying to replace null_char with e. now we will not get the expected o/p.
    // s[4] = 'l';
    // s[2] = '\0';//  now every word will be of 2 size
    cout << s << endl;

    // you are given a sting. return len of that string?
    cout << str_len(s); 

    

    return 0;
}
