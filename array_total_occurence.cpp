#include<iostream>
using namespace std;
int Foccurance(int arr[], int n, int key ){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans = 0;
    while (start<= end){

        if(arr[mid] == key ){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid]< key){
            start = mid + 1;
        }
        else{ end = mid - 1;
        }
        mid = start + (end - start)/2;

    }
    return ans;
}


int Loccurance(int arr[], int n, int key ){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans = 0;
    while (start <= end){

        if(arr[mid] == key ){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid]< key){
            start = mid + 1;
        }
        else{ end = mid - 1;
        }
        mid = start + (end - start)/2;

    }
    return ans;
}
int main()
{
    int arr [8]= {1,2,3,3,3,3,4,5};
    cout << "the occurance of the element 5 is " << Loccurance(arr,8,5) - Foccurance(arr,8,5) +1 << endl;
return 0;
}