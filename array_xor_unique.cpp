#include<iostream>
using namespace std;
int main()
{
    int n;int arr[50];int count =0;
    cout << "enter the size of array" << endl;
    cin >> n;
    for (int i=0 ;i < n ;i++){
        cout << "enter the element of array at index : " << i << endl;
        cin >> arr[i];

    }
    int ans = 0;    // if the duplicate element is present  the end of the array
    for (int i=0 ;i<n ;i++){
        ans = ans ^ arr[i];
    }
    for(int i=1;i<n;i++){
        ans = ans^i;
    }
    cout<< ans;
   
return 0;
}