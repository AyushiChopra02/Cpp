//time O(N+Q)
#include<iostream>
#include <unordered_map>
#include <vector>
using namespace std ;
void solve(){
    int n ,q ;
    cin >> n >>q ;
    vector<int> arr(n+1);
    for(int i=1 ; i<=n ; i++){
        cin >> arr[i];
    }
    //mapping
    unordered_map<int , int> frequencyMap ;
    for(int i=1 ; i<=n ; i++){
        frequencyMap[arr[i]]++ ;
    }
    for(int i=1 ; i<=q ; i++){
        int x   ;
        cin >> x ;
        cout << frequencyMap[x] << "\n";
    }
    }
    