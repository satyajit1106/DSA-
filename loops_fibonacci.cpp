#include<iostream>
using namespace std;

// PRINTING THE FIBONACCI NUMBERS FOR THE GIVEN VALUE OF N

int main()
// {
//     int a=0;
//     int b=1;
//     int n;
//     cout <<  "enter the value of n "<< endl;
//     cin >> n ;   
//     cout << a << " " << b << " ";

//     for (int i=0; i<=n ; i++){

//         int nextnumber = a+b;
//         cout << nextnumber << " ";

//         a=b;
//         b=nextnumber;

//     }

// }


// PRINTING THE FIBONACCI NUMBERS FOR THE GIVEN VALUE OF N USING FUNCTION
// int fib(int n);
// int main(){
//     int n;

//     cout << "enter the value of n " << endl;
//     cin >> n;
//     cout << fib(n) ;

//     return 0;

// }
// int fib(int n){
//     if (n==1 || n==0){
//         if (n==1){
//             return 1;
//         }
//         if (n==0){
//             return 0;
//         }
//     }
//     int fibnm1 = fib(n-1);
//     int fibnm2 = fib(n-2);
//     int fibn = fibnm1 + fibnm2;
    
//     return fibn;
// }


// finding if the number is prime or not 
{
int i,n;

cout << "enter the value of n " << "\t";
cin >> n;

for(i=2;i<n;i++){
    if(n%i==0){
        cout << "it is not the prime number" <<  endl;
        break;
    }
    else{
        cout << "it is a pime number " << endl;
        break;
    }
}
}