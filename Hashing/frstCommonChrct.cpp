//https://leetcode.com/problems/find-common-characters/
#include<iostream>
#include <vector>
#include <unordered_map>
using namespace std  ;
class solution {
    public :
    vector<string> CommonChars(vector<string>& words){
        unordered_map<char , int> minimumFrequencyOverAll;
        for(char ch = 'a' ; ch <= 'z' ; ch++){
            minimumFrequencyOverAll[ch] = 1000;

        }
        for(auto word : words){
            unordered_map<char , int> frequency;
            for(auto ch : word){
                frequency[ch]++ ;
            }
            for (char ch = 'a' ; ch <= 'z' ; ch++){
                minimumFrequencyOverAll[ch] = min(minimumFrequencyOverAll[ch] , frequency[ch]);
            }
        }
        vector<string> ans;
        for (char ch = 'a' ; ch <= 'z' ; ch++){
            while(minimumFrequencyOverAll[ch] > 0){
                ans.push_back(string(1,ch));
                minimumFrequencyOverAll[ch]-- ;
            }
        }
        return ans ;
    }
};
