#include<iostream>
#include <climits>
#include<bits/stdc++.h>
using namespace std;
int getmax(int num[],int n)
{
    int maxi = INT_MIN;
    for (int i =0;i<n ;i++)
    {
        maxi = max(maxi,num[i]); 
    }
    return maxi;
}
int getmin(int num[],int n)
{
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        mini = min(mini,num[i]);
    }
    return mini;
}
int main()
{
    int n;
    cout << "enter the value of n " << endl;
    cin >> n;
    int arr[100];
    for (int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    cout << "maximum number is " << getmax(arr,n) << endl;
    cout << "minimum number is " << getmin(arr,n);
}
