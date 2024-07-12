#include<iostream>
using namespace std;
int first(int arr[], int n, int key){
    int s=0,e=4;
    int mid=s+(e-s)/2;
    int ans;
    // searching the first occurence of the element
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



int last(int arr[], int n, int key){
    int s=0,e=4;
    int mid=s+(e-s)/2;
    int ans;
    // searching the last occurence of the element
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
    int arr[5]={1,2,3,3,4};
    int key=3;
    cout << first(arr,5,3);
    cout << last(arr,5,3);
    
    return 0;
}