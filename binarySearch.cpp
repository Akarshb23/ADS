#include<bits/stdc++.h>
using namespace std ; 

int binarySearch(int arr[] ,  int beg  , int end , int item){
    if(beg>end){
        return -1 ;
    }
    int mid = beg + (end-beg)/2 ;
    if(arr[mid] == item){
        return mid ;
    }
    if(item < arr[mid]){
        return binarySearch(arr,beg,mid-1,item);
    }
    return binarySearch(arr,mid+1 , end , item) ; 
}

int main(){
    int n ; 
    cin >> n ; 
    if(n<= 0 ){
        return 0 ;
    }
    int * arr = new int[n] ; 
    for(int i = 0 ; i <n ; i++){
        cin >> arr[i] ;
    }`
    int item ;
    cin >> item ; 
    int loc = binarySearch(arr,0,n-1,item);
    if(loc == -1) cout << "Element not found" << endl ;
    else cout << "Element Found at index : " << loc << endl ;
}