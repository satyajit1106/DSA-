#include<iostream>
using namespace std;
int peak(int arr[] , int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        if(arr[mid] < arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;   //in this case if the answer is reached the the start will be pointing at the element
    
}
int main()
{
    int arr[5]={1,2,3,2,1};
    cout << peak(arr,5);
return 0;
}