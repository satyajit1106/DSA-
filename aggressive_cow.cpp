#include<iostream>
#include<climits>
using namespace std;
bool ispossible(int arr[],int n,int cow,int mid){
    int ccount=1;
    int lastpos=arr[0];     //place the first cow at the 0th position 

    for(int i=0;i<n;i++){   //then place the next cow and check the distance between them
        if(arr[i]-lastpos>=mid){    // can i place the cow at stall[i] the place it at that position 
            ccount++;               
            if(ccount==cow){
                return true;        // if cow count reaches number of cow given then return true as it is now able to place the cows
            }
            lastpos=arr[i];
        }
    }
    return false;
}
int main()
{
    int arr[5]={1,2,4,8,9}; // sort the vector or the array in the ascending order before use as we have taken the constant array here we need not to sort the array here 
    int n=5;
    int s=0;
    int cow=3; 
    int sol;
    int end=INT_MIN; // we need to find the minimum distance if and only if the array is not sorted 
    int start=INT_MAX;
    for(int i=0;i<n;i++){
        start = min(start,arr[i]);
        end = max(end,arr[i]);
    }
    int e=end-start;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(ispossible(arr,n,cow,mid)){
            sol=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout << sol;
return 0;
}