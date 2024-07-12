#include<iostream>
using namespace std;
int main()
{
    int arr[100],arr2[100];

      int n,n1;
      cout << "enter the size of first array " ;
      cin>>n;
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }

      cout << "enter the size of second array " ;
      cin>>n1;
      for(int i=0;i<n1;i++)
      {
        cin>>arr2[i];
      }

    //   for (int i=0;i<n;i++){
    //     for(int j=0;j<n1;j++){
    //         if(arr[i]<arr2[j]){
    //             break;
    //         }
    //         else if(arr[i]==arr2[j]){
    //             cout << arr2[j];
    //             arr2[j]=INT_MIN;
    //             break;
    //         }
    //     }
    //   }


    // two pointer approach for solving the problem in the much faster way
    int i=0,j=0;
    while(i<n||j<n1){
        if(arr[i]>arr2[j]){
            j++;
        }
        else if(arr[i]<arr2[j]){
            i++;
        }
        else{
            cout << arr2[j];
            i++;
            j++;
        }
    }


return 0;
}