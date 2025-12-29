// problem link : https://leetcode.com/problems/arithmetic-slices/?envType=problem-list-v2&envId=sliding-window
#include<bits/stdc++.h>
using namespace std;
int numberOfArithmeticSlices(vector<int>& nums){
        if(nums.size()<3)//edge cases
            return 0;
        int n=nums.size();
        int curr=0,ans=0;
        for(int i=2;i<n;i++){
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]){
                curr++;
                ans+=curr;
            }
            else
                curr=0;
        }
        
        return ans;
}
int main(){
    vector<int> nums={1,3,5,7,8,9};
    cout<<numberOfArithmeticSlices(nums);
    return 0;
}