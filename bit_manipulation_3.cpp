#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    // conversion into the decimal form 
    int n;
    cout << "enter the value of n \n";
    cin >> n;
    int ans=0 ,i=0;
    while(n!=0){
        int digit = n%10;               //find the digit 
        if(digit==1){                   //each digit is associated with the power of 2, if it is the signigicant bit 
        int ans= ans + pow(2,i);        //if bit is 1 , then save the ans with the power associated with the place of the digit 
    }
        n=n/10;                         //move forward to next digit 
        i++;                            //increase the value of i since 2 is of i th power so increase the value of i
    }
    cout << ans;
return 0;
}