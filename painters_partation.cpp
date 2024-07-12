#include<iostream>
using namespace std;
bool ispossible(int arr[],int n,int m,int mid){
    int bcount=0;//
    int pcount=1;

    for(int i=0;i<n;i++){
        if(bcount+arr[i]<=mid){//
            bcount+=arr[i];//
        }
        else{
            pcount++;
            if(arr[i] >mid || pcount >m){
                return false;
            }
            bcount=arr[i];//
        }
    }
    return true;
}
int main()
{
    int arr[4]={5,5,5,5};
    int m=2;
    int n=4;
    int s=0,sum=0;
    int ans=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(ispossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    cout << ans;
return 0;
}