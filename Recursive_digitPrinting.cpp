#include<iostream>
using namespace std;

inline void print(int n){       // inline data type makes the fuction call overhead faster and reduce it.
    if(n == 0){
        return ;
    }
    print(n-1);
    cout << n << '\t';

}
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    print (n);
    
return 0;
}