#include<iostream>
using namespace std;

void sortArray(int *arr , int size){

    // base case 
    // already sorted 
    if(size == 0 || size == 1){
        return ;
    }

    // processing 
    for(int i=0 ; i<size-1 ; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }

    // recursive call 
    sortArray(arr , size-1);

    }

int main()
{
    int arr[5] = {1,5,2,83,7} ;
    int size = 5;
    sortArray(arr , 5);
    for (int i=0 ; i< size ; i++){
        cout << arr[i] << " ";
    }
return 0;
}