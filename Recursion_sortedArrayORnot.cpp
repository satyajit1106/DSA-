#include<iostream>
using namespace std;

bool issorted(int *arr , int size ){

    // base condition if the array is empty or the array has only one element then it is sorted
    if(size == 0 || size == 1){
        return true;
    }
    // processing 
    if ( arr[0] > arr[1])
    return false ;

    // recursive part 
    return issorted(arr+1 , size-1);

}
int main()
{
    int arr[5] = {1,2,3,5,4};
    int size = 5;
    bool ans = issorted(arr,size);

    if (ans){
        cout << "it is the sorted array " << endl;
    }
    else{
        cout << "it is not the sorted array " << endl;
    }
return 0;
}