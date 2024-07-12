#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number \n";
    cin >> n;
    int weight(uint32_t);
    int count=0;
    while(n!=0){                            // countin the number of the bits in the number 
        if(n&1){
            count++;
        }
        n=n>>1;                             // counting the bits by shifting right side as it divides the number with 2
    }
return count;
    }