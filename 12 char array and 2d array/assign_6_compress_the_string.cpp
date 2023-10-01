string getCompressedString(string &input) {
    int cnt = 0;
    string ans = "";
    for(int i=0;i<input.size();i++){
        cnt++;
        if(input[i]!=input[i+1] or i==input.size()-1){
            ans+=input[i];
            if(cnt!=1) ans+=(cnt+'0');
            cnt=0;
        }
    }
    return ans;
}
