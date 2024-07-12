#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool ispossible(int arr[],int n,int m,int mid){
    int amount=0;
    for(int i=0;i<n;i++){
        if(arr[i]-mid>0){
            amount+=(arr[i]-mid);
        }
    }
    return amount >= m; // if amount of wood is greater or equal-to required then it weill return true else false
     
    /*  above line means the same as the following line 

    if(amount < m){
        return false;
    }
    return true;        */
}
int main()
{
    int arr[5]={4,42,40,26,46};
    int n=5;
    int m=20;
    int s,e;
    int start=INT_MAX,end=INT_MIN;
    for(int i=0;i<n;i++){
        start=min(arr[i],start);
        end=max(arr[i],end);
    }
    s=start,e=end;
    sort(arr,arr+n);
    int mid=s+(e-s)/2;
    int wood;
    while(s<=e){
        if(ispossible(arr,n,m,mid)){
            wood = mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout << wood;
return 0;
}