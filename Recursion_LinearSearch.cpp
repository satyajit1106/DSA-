//  LINEAR SEARCH IN THE ARRAY

#include<iostream>
using namespace std;

int print(int arr[] , int size){
    // base case 
    if(size == 0){
        return 0;
    }

    // processing 
    else{
        cout << arr[0] << '\t';
    }

    // Recursive relation
    return print(arr + 1 , size - 1 );
}

bool search(int *arr , int size , int key ){

    // Base case of the recursive function 
    if(size == 0){
        return false;
    }
    
    // processing 
    if( arr[0] == key  ){    // we can write the the arr[0] as *arr also all will do the same work as to point to the index of that element 
        return true;
    }

    // recursive call 
    bool remaining = search(  arr + 1 , size - 1 , key );
    return remaining;

}
int main()
{
    int arr[5] = {1,2,4,6,7};
    int key ;
    cout << "key" << '\t';
    cin >> key ;
    int size = 5;
    bool result = search(arr , size , key);
    if (result){
        cout << "key element found " << endl;
    }
    else{
        cout << "NO key element " << endl;
    }

    cout << "element of the array is " << endl;
    cout << print(arr , size) << '\t';
    return 0;
}