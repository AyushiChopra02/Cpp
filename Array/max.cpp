#include<iostream>
#include <climits>
 using namespace std;

 int getMax(int num[] , int n){
    int max= INT_MAX;
    for(int i =0; i<n ; i++){
        if(num[i]> max){
            max = num[i];
        }
    }
    return max;
 }