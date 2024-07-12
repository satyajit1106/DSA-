#include<iostream>
using namespace std;
int main()
{
    // int n = 5;

    // int * ptr = & n;

    // cout << "value of n : "<< n << endl;
    // cout << "address of pointer :" << ptr << endl;
    // cout << *ptr << endl;
    // cout << sizeof(n) << endl;

    // cout << " ****************** "<< endl;

    // n++;
    // (*ptr)++;

    // cout << "value of n after increment : "<< n << endl;
    // cout << "value of pointer after increament :" << *ptr << endl;

    // cout << " ****************** "<< endl;
    // // copying a pointer 

    // int *q = ptr;
    // cout << *q << endl;


    // cout << " ****************** "<< endl;
    // int i = 3;
    // int *t = &i;
    // cout << (*t)++ << endl;

    // *t = *t ++;
    // cout << (*t)++ << endl;
    // cout << t << endl;

    // t = t+1;
    // cout << t << endl;

    // cout << " ****************** "<< endl;
    // float f = 10.5;
    // float p = 2.5;
    // float * ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << " "<< f<< " "<< p;


    //cout << " ****************** "<< endl;
    // int *ptr = 0;
    // int a = 10;
    // *ptr =a ;
    // cout << *ptr ;

    // int a[] = { 1,2,3,4};
    // int *p = a+1;
    // cout << *a +1<< endl;
  

    // int arr[20] ={1,2,3,4,5};
    // cout << arr << endl;

    cout << " ****************** "<< endl;
    int arr[20] ;
    // arr= arr+1;   a case in which the base address cant be changed 
    int *ptr = &arr[0];
    cout << ptr;
    ptr = ptr +1;
    cout << ptr;
    

    
return 0;
}