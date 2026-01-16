#include<bits/stdc++.h>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int no_of_ones,bit;
        int ans=0;
        for(int i=0;i<32;i++){
            no_of_ones=0;
            for(int j=0;j<nums.size();j++){
                bit=(nums[j]>>i)&1;
                if(bit)
                    no_of_ones++;
            }
            ans|=(no_of_ones%3)<<i;
        }
        return ans;
    }
    //why this approach is guaranteed to work- let's explain this for a bit position k, a number repeat 3 times so in that bit position k it must be 3 zeros or 3 ones. so no. of ones % 3 = 0(always for a number which is repeated 3 times) but no.of ones %3 = 0 or 1 for the unique number

    //i can generalize it to work even if all number repeats k times and one number is unique just do ans|=(no_of_ones%k)<<i;
    //think why negative numbers are not affected?(you already got the right answer)

};