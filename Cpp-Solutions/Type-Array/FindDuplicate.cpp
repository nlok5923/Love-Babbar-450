// find duplicate in an array of N+1 Integers

#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return fast;
}
int main(){
    vector<int>nums = {3,1,3,4,2};
    cout<<findDuplicate(nums);
    return 0;
}
