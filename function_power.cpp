#include<iostream>
using namespace std;
int power()
{
    int a,b;
    cout << "enter the value of a and b " << endl;
    cin>> a >> b;
    int ans=1;
    for (int i=1;i<=b;i++){
        ans = ans * a;
    }
    return ans;
}
bool evenodd(int n)
{
    
    if(n%2==0)
    {
        return 1;
    }
    else {
        return 0;
    }


}
int  main(){
    // int a,b;
    int n;
    // cout << "enter the value of a and b " << endl;
    // cin >> a >> b;
    // int ans = power(a,b);
    cout  << power () << endl;
    cout << "enter the number " << endl;
    cin >> n;
    cout << evenodd(n) << endl;
    return 0;
}