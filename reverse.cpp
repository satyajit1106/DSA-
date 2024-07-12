#include<iostream>
#include<climits>
using namespace std;
int main()
{

    int ans=0,n;
    cout << "enter the number";
    cin >> n;
    while(n!=0)
    {

        int digit = n%10;
        if((ans>INT_MAX)||(ans<INT_MIN))   // the use of the INT_MIN & INT_MAX is used to represent min and max value of integer  
        {  
            return 0;
        }
        ans = ans * 10 + digit;            //main formula for the answer
        n = n / 10;

    }
    cout << ans;

}




