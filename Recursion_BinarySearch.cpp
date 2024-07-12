#include<iostream>
using namespace std;

bool binarySearch(int *arr , int s , int e , int key ){

    // base case 
    // no element found 
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;

    // element found 
    if (arr[mid] == key ){
        return true ;
    }

    // processing 
    if(arr[mid] < key ){
        return binarySearch(arr , mid + 1 , e , key ); // recursive call 
    }
    if (arr[mid] > key ){
        return binarySearch(arr , s , mid - 1 , key );
    }
    
}
int main()
{
    
    int arr[5] = {1,3,5,6,7};
    int key ;
    cout << "enter the key element " << '\t' ;
    cin >> key ;
    int s = 0, e = 5  ;
    
    cout << " present or not " <<  binarySearch(arr , s , e , key);
return 0;
}