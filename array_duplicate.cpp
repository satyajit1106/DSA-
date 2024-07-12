#include<iostream>
using namespace std;
int duplicate(int arr[] , int n){

    for(int i=0;i<n;i++){
        for (int j = i+1 ; j<n;j++){
            if (arr[i] && arr[j] == arr[i]){
                cout << arr[j] << " ";
            } 
        }
    }
}

int main()
{
    int n , arr[1000];
    cout << "enter the value of n" << endl;
    cin >> n;
    for (int i = 0 ; i< n;i++){
        cout << "index : " << i << endl;
        cin>> arr[i];
    }
    cout << duplicate(arr,n);
    
return 0;
}