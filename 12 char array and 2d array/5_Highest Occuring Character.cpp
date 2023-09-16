char highestOccurringChar(char input[]) {
    unordered_map<char,int> mp;
    for(int i=0;input[i]!='\0';i++) mp[input[i]]++;
    int ans = '\0';
    int max = INT_MIN;
    for(int i=0;input[i]!='\0';i++){
        if(max < mp[input[i]]){
            max = mp[input[i]];
            ans = input[i];
        }
    }
    return ans;
}