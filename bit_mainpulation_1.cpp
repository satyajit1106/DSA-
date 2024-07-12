#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n \n";
    cin >> n;
    int sum=0;
    int mul=1;
    while (n!=0)                    // until the bits obtain is 0
    {
        int digit=n%10;
        sum=sum+digit;

        mul=mul*digit;
        n=n/10;                      //to proceed to the next digit 
    
    }
    int result = mul-sum;
    cout << result;
return 0;
}