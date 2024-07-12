#include<iostream>
#include<math.h>
using namespace std;

//  Binary conversion

int main()
{   int n,i,ans=0;
    cout << "enter the value of n" << endl;
    cin >> n;
    
    while(n!=0)
    {
        int bit= n&1;              // internally convert number into binary and then & with 1 to find the most significant bit
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout << "answer is : " << ans;
}


//  Conversion of the negative number into binary form
// int main()
// {
// // some issue
//     int i,ans = 0,n;
//     cout << "enter the negative number";
//     cin >> n;
//     n = ~n;
//     while(n!=0)
//     {

//         int bit = n&1;
//         ans = bit *pow(10,i)+ans;
//         n=n>>1;
//         i++;
        
//     }
//   cout << "binary representation of the number is " << ans;

// }