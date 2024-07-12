#include<iostream>
using namespace std;
 void sort(int arr[] ,int n){

    for (int i = 0 ;i <n;i++){
        for(int j= i+1 ;j<n ;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i = 0 ; i< n ;i++){
        cout<< arr[i] << endl;
    }
}
int main()
{
    int arr[50],n;

    cout << "enter the size of array :" ;
    cin >> n;
    cout << "enter the elements of array :" ;
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }
    cout<<"sorted elements are" << endl;
    sort(arr,n);

return 0;
}