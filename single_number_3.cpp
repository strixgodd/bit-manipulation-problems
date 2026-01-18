class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xor_all=0;
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            xor_all^=nums[i];
        }
        int a=0,b=0,mask;
        //take the first set bit as partitioner
        for(int i=0;i<32;i++){
            int bit=xor_all & 1;
            if(bit){
                mask=bit<<i;
                break;
            }
            cout<<xor_all<<" ";
            xor_all>>=1;
        }
        // int mask=xor_all & (-xor_all); <- this (method of choosing a bit partitioner) will not work instead of the above for loop as range = -2^(n-1) to 2^(n-1)-1, will throw error at -2^(n-1).
        // apply two single I concepts
        for(int i=0;i<n;i++){
            if(mask&nums[i])
                a^=nums[i];
            else
                b^=nums[i];
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
    //tough to think ,using single Number I approaches twice
};