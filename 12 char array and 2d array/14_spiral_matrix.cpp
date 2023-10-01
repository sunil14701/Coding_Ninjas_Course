class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int rows = m.size();
        int cols = m[0].size();
        int i=0, j=0, stop=0;
        int cnt = 0;
        vector<int>vec;
        int t_ele = rows*cols;
       while(true){
           if(cnt==t_ele) break;
           for(j=stop;j<cols-stop;j++){
                cnt++;
                vec.push_back(m[i][j]);
           }
           if(cnt==t_ele) break;
           j--;i++;
           for(;i<rows-stop;i++){
                cnt++;
                vec.push_back(m[i][j]);
           }
           if(cnt==t_ele) break;
           i--;j--;
           for(;j>=stop;j--){
                cnt++;
                vec.push_back(m[i][j]);
           }
           if(cnt==t_ele) break;
           j++;i--;
           for(;i>stop;i--){
                cnt++;
                vec.push_back(m[i][j]);
           }
           i++;j++;
           stop++;
       }
       return vec;
    }
};