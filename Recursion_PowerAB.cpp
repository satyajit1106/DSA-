#include<iostream>
using namespace std;

int power(int a , int b){

    // base case 
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }

    // processing 
    int ans = power( a , b/2);

    // Recursive call 
    if(b % 2 == 0){
        return ans * ans ;
    }
    else{
        return a * ans * ans ;
    }
}

int main()
{
    int a , b;
    cout <<"enter the number a and then its power b" << endl;
    cin >> a >> b;

    cout << power(a , b);


return 0;
}