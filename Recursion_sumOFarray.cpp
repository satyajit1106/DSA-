#include<iostream>
using namespace std;

int sumof(int *arr , int size ){

    if(size == 0){ 
    return 0;
    }
    if(size == 1){
    return arr[0];
    }

    // Recursice call 
    int remaingpart = sumof(arr + 1 , size - 1);    
    // processing 
    int sum = arr[0] + remaingpart;
    
    return sum ;

}
int main()
{
    int arr[5] = {4,2,5,1,6};
    int size = 5;
    int sumc = sumof(arr,size);
    cout << sumc;
return 0;
}