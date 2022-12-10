#include<bits/stdc++.h>
// https://leetcode.com/problems/contains-duplicate/description/

// others
return !(nums.size()==set(nums.begin(),nums.end()).size());

/// my solution
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> uniques;
        for(auto it = nums.begin(); it!=nums.end(); ++it){
            uniques.insert(*it);
        }
        if(nums.size()!=uniques.size()){
            return true;
        }else{
            return false;
        }
    }
};

// python
class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        unique = set()
        for n in nums:
            unique.add(n)
            
        return len(unique)!=len(nums)