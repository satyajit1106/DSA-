#include<iostream>
using namespace std;

void sort(int* arr , int n){

int j;
    // base case 
    if(n==0 || n==1){
        return ; 
    }

    // Processing 
    for( int i=1 ; i<n-1 ; i++){
        int temp = arr[i];
        for(  j=i-1 ; j<=0 ; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
    // Recursiver call 
    sort(arr+1, n-1);

}
int main()
{
    int arr[5] = {1,6,3,7,9};
    sort(arr, 5);
    cout << endl;
    for (int i=0 ; i<5; i++){
        cout <<  arr[i] << " ";
    }

return 0;
}