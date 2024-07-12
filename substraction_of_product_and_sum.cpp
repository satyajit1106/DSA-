#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int prod=1;
    int i,n,digit;
    cout << "enter the value";
    cin >> n;
    while(n!=0){

        digit = n%10;
        sum = sum+digit;
        prod = prod*digit;

        n = n/10;
    }
    int Result = prod - sum;
    cout << "Result is : " << Result << endl;

}