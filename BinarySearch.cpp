#include<iostream>
using namespace std;
int binarySearch(int arr[] , int n , int key ){
    int start = 0;
    int end = n-1;
    int mid = start + ((end - start)/2);

    while (start <= end)
    {
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid]<key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + ((end - start)/2);
    }
    return -1;
    
}
int main()
{
    int arr1[6] = {1,2,3,55,64,123};
    int arr2[7] = {1,2,4,6,76,87,88};   
    cout << binarySearch(arr1,6,123);
return 0;
}