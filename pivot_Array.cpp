#include<iostream>
using namespace std;
int first(int arr[], int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        int s1=0,s2=0;
        for(int i=s;i<=mid-1;i++){
            s1=s1+arr[i];
        }
        for(int i=e;i>=mid+1;i--){
            s2=s2+arr[i];
        }
        if(s1==s2){
            return mid;
        }
        else if(s1<s2){
            mid=mid+1;
        }
        else if(s1>s2){
            mid=mid-1;
        }
        return -1; // question yaha par else case lagane par answer nahi aa raha hai
    }
    return mid;   
}
int main()
{
    int arr[5]={1,3,5,2,3};
    cout << first(arr,5);
return 0;
}