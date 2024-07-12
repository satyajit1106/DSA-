#include<iostream>

using namespace std;

int bit (int n);
int main()
{   
    int ans,n;
    int m=n;
    
    cout<< "enter the value of n";
    cin >> n;

    //  edge case if in binary 0 complement is 1
    if (n=0)
    return 1;

    int mask = 0;       
    while (m!=0)
    {

        mask = (mask << 1) | 1;    // mask = 000000.......0 shift left and | 1
        m = m >> 1;                // to search for how many place the 1 should be OR so number is right sifted until 0

    }
    ans = (~n) & mask;             // 00000.....010 & 00000.....111 = 00000.....010
    return ans;
 
}                                                        