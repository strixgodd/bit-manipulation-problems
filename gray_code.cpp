class Solution {
public:
    vector<int> grayCode(int n){
        vector<int> ans;
        int size=1<<n;
        ans.push_back(0);
        ans.push_back(1);
        if(ans.size()==size)
            return ans;
        int m;
        while(ans.size()<size){
            m=ans.size();
            for(int i=m-1;i>=0;i--)
                ans.push_back(ans[i]|m);
        }
        return ans;
    }
    //utilized mirror property and a pattern of the mirror property here
};