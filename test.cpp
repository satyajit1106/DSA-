#include<iostream>
using namespace std;
void size(int *arr,int n){
    cout << sizeof(arr);
}
int main()
{
    int arr[5]={1,2,3,4,5};
    size(arr,5);
return 0;
}