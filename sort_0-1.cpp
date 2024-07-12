#include<iostream>
using namespace std;
int main()
{
    int arr[7]={1,0,0,1,0,1,0};
      int i=0,j=6;
      while (i<=j)
      {
        if(arr[i]==0){
            i++;
        }
        if(arr[j]==1){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
      }
      for(int k=0;k<6;k++)
      {
        cout << arr[k];
      }
      
return 0;
}