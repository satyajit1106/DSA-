#include<iostream>
using namespace std;

// using recursion 

// int factorial(int n)
// {
//     if (n==0)
//     {
//         return 1;
//     }
//     int factnm1 = factorial(n-1);
    
//     int fact = factnm1 * n ;
//     return fact;

// }


int fact(int n)
{
    int i, ans = 1;

    for (i=1;i<=n;i++)
    {
        ans = ans * i;
    }
    return ans;
  
}



int main ()
{
    int n,r;
    cin >> n>> r;
    


    // using recursion 
    // if (r>n){
    //     cout << -999 ;
    // }
    // cout <<factorial(n)<< endl;
    // cout <<factorial(r)<< endl;
    // cout <<factorial(n-r)<< endl;
    // int ans = (factorial(n) / (factorial(r)*factorial(n-r)));
    
    
    // cout << "nCr is " << ans << endl;



//  using function 

    int numerator = fact(n);
    int denomenator = fact(r)*fact(n-r);
    int ans = numerator / denomenator;
    cout << "nCr is : "<<ans;
}