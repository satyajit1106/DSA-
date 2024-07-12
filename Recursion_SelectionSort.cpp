#include<iostream>
using namespace std;

void sort(int *arr , int n){

    // base case 
    if(n==0 || n==1){
        return ;
    }

    // processing 
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ;j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    // Recursive call 
    sort(arr+1 , n-1);
}

int main()
{
    int arr[5] = {4,3,7,1,6};

    sort(arr , 5) ;

    for (int i=0 ; i<5 ; i++){
        cout << endl << arr[i] <<" " ;
    }
    
return 0;
}