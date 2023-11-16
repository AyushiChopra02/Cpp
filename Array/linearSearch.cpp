#include<iostream>
 using namespace std;
 bool search(int arr[] , int size , int key){
    for(int i=0 ; i<size ; i++){
        if(arr[i] == key){
            return 1 ;
        }
    }
    return 0 ;
 }
 int main(){
    int arr[10]={5,10,-2,22,7,-2,0,5,22,1};
    cout << "enter elmnt" << endl ;
    int key ;
    cin >>key;
    bool found = search(arr , 10, key);
    if(found){
        cout << "key prsnt" << endl ;

    }
    else{
        cout << "key absne" << endl ;
    }
    return 0 ;

 }