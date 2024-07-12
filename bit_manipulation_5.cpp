#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number\n";
    cin >>n;
    int second = n-1;
    if(n&1){
    if(n & second == 0){
        cout << "power of 2";
    }
    else{
    cout << "not the power of 2";
    }
    }
return 0;
}