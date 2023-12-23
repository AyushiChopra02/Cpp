 #include<iostream>
 using namespace std ;
 void printArray(){

 }
 int main(){
    int number[15] ;
    cout << "value at 14 index" << number[14] << endl ;
    cout << endl << "evrythng is fine" << endl ;

//pahli do 2 7 ayegi aur bchi hue hmne btai nai to 0 aayegi
    int third[15] = {2,7} ;
    int n= 15 ;
    cout <<    "print" << endl ;
    for(int i = 0 ; i<n ; i++){
        cout << third[i] << " " ;
    }
    //pahle postn one aayegi baki sb 0
    int fifth[10] = {1}  ;
     n=10 ;
    cout << "print" <<endl ;
    for(int i=0; i<n ; i++ ){
        cout << fifth[i] << " " ;
    }
 }
