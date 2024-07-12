#include<iostream>
using namespace std;
int first(int arr[] , int n , int key){
    int s=0,e=7,ans;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int last(int arr[] , int n , int key){
    int s=0,e=7,ans;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[8]={1,2,3,3,3,3,4,5};
    int key=3;
    cout << last(arr,8,3) - first(arr,8,3) + 1;
return 0;
}