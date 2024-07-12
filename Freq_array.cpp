#include<iostream>
#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main()
{
      int arr[100];int freq[100000]={0};

      int n;
      cout << "enter the size of array " ;
      cin>>n;
      for(int i=0;i<n;i++)
      {
         cin>>arr[i];
      }
      for(int i=0;i<n;i++)
      {
            freq[arr[i]]++;
        
      }
     for(int i=0;i<n;i++)
     {
        if(freq[i]==2)
        {
            cout<<i<<endl;
        }
     }
return 0;
}