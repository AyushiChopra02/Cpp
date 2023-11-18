//time O(N*2Q)
//space: O(N)
#include<iostream>
#include <vector>
using namespace std ;
void solve(){
    int n ,q ;
    cin >> n >>q ;

//vector array ki trh e hota h main diff ki store sequntial data  static in nature jayda stre krta h
//Declaration : 	
//vector< object_type > vector_variable_name;

    vector<int> arr(n+1);
    for(int i=1 ; i<=n ; i++){
        cin >> arr[i];
    }
    //frq k lie alg loop chlaya h
    vector<int> frequency(n+1 , 0);
    for(int i=1 ; i<=n ; i++){
        frequency[arr[i]]++ ;
    }
    for(int i=1 ; i<=q ;i++){
        int x ;
        cin >> x;
        cout << frequency[x] << "\n" ;
    }
    
}