// counting number of set bits in the different num and adding them 
#include<iostream>
using namespace std;
int bit(int n)
{
    
    int count=0;
    while(n!=0)
    {
        if(n&1)
        {
            count ++;
            
        }
        n= n>>1;
    }
    return count ;
}

int main()
{
    int a,b;
    cin >> a >> b;
    
    cout << "number of bits are :" << bit(a)+bit(b) ;
}