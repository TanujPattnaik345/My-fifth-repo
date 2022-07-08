#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int sz = nums.size()-1;
        int l = sz-1, r = sz;
        
        while(l>=0 && nums[l]>=nums[l+1]){
            l--;
        }
        
        if(l < 0){
            reverse(nums.begin(), nums.end());
        }
        else{
            while(nums[l]>=nums[r]){
                r--;
            }
            
            swap(nums[l], nums[r]);
            reverse(nums.begin()+l+1, nums.end());
        }
    }
};