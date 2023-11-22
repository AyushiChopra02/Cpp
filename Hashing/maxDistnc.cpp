//tc = O(N)
// sc = o(N)
//https://www.geeksforgeeks.org/maximum-distance-two-occurrences-element-array/
#include<iostream>
#include <vector>
#include <unordered_map>
using namespace std  ;
class Solution{ 
    public :
    int maxDistance(int arr[] , int n){
unordered_map<int , int> firstOccurance;
int maxi = 0 ;
for(int i =0 ; i<n ; i++){
    if(firstOccurance.find(arr[i]) != firstOccurance.end()){
        maxi = max(maxi , i-firstOccurance[arr[i]]);

    }
    else firstOccurance[arr[i]] = i;

}   
return maxi ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
    }
};
