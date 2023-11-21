//Time compl = O(N+Q)
//space com =  O(N)
#include<iostream>
#include <vector>
#include <unordered_map>
using namespace std ;
void solve(){
    int n,q ;
    cin >> n;
    vector<int> arr(n+1);
    for(int i =1 ; i<=n  ; i++){
        cin >> arr[i];

    }
    vector<int> prefixSum(n+1 , 0);
    for(int i=1 ; i<=n ; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];

    }
    cin >> q;
    for(int i=1 ; i<=q ; i++){
        int l , r;
        cin >> l >> r ;
        l++ ;
        r++ ;
        cout << prefixSum[r] - prefixSum[l-1] << "\n";
    }
}
