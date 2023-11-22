//Given two sorted arrays arr and brr and a number x, find the pair whose sum is closest to x and the pair has an element from each array. In the case of multiple closest pairs return any one of them.
 //Can return the two numbers in any manner. The driver code takes care of the printing of the closest difference//
 #include<iostream>
 using namespace std;
 void printClosest(int ar1[] ,int ar2[] , int m , int n , int x , int r){
    int diff = __INT_MAX__;
    int res_I , res_r ;
int I = 0 ; r=n-1; 
while (I<m && r>=0){
if(abs(ar1[I] + ar2[r]-x)< diff)
{
    res_I =I ;
    res_r = r  ;
    diff = abs(ar1[1] + ar2[r] -x);
}
if (ar1[I] + ar2[r] > x)
r--;
I-- ;
}
cout<<"the closest pair is ["<<ar1[res_I]<<" , " <<ar2[res_r]<<"]\n";
 }
 int main()
 {
    int ar1[] = {1,4,5,7};
    int ar2[] = {10,20,30,40} ;
    int m = sizeof(ar1)/sizeof(ar1[0]);
    int m = sizeof(ar2)/sizeof(ar2[0]);
    int x = 38 ;
    
    return 0 ;
 }
