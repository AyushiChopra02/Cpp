//tc and sc =O(N)
#include<iostream>
#include <vector>
#include <unordered_map>
using namespace std  ;
class Solution{
    public:
    int getPairsCount(int arr[] , int n  , int k){
        unordered_map<int , int> frequency;
        int ans = 0;
        for(int i = 0 ; i<n ; i++ ){
            int b  = arr[i];
            int a = k-b ;
            ans += frequency[a];
            frequency[b]++;
        }
        return ans  ;
    }
};