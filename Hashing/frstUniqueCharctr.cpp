//tc =O(N)
//sc = 0(26)
//https://leetcode.com/problems/first-unique-character-in-a-string/
#include<iostream>
#include <vector>
#include <unordered_map>
using namespace std  ;
class Solution {
    public :
    int firstUniqChar(string s) {
        unordered_map<char , int > frequency;
        //loop chlega aur chck krega ki konsa unique chrctr h
        for(auto ch : s){

            frequency[ch]++;
        }
        //agr unique chrctr h is loop m ayega aur return krega index uska vrna -1 ans
        for(int i= 0 ; i < s.size(); i++){
            if(frequency[s[i]] == 1) return i ; 
        }
        return -1 ;
    }
};