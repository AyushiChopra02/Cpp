#include<iostream>
#include <vector>
#include <unordered_map>
using namespace stds;
class Solution{
    public:
    vector<int> twoSum(vector<int>& nums , int target){
        unordered_map<int , int > indexMap;
        int n = nums.size();
        for (int i=0 ; i<n ; i++){
            //a+b =t
            //a=t-b
            int remaining = target - nums[i];
            if(indexMap.find(remaining) != indexMap.end()){
                return {indexMap[remaining], i} ;
            }
            indexMap[nums[i]] = i ;

        }
        return{-1 , -1};
    }

};