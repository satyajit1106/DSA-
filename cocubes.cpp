#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // n number ko har se divide karna hai
    // num is the divident 
    // int num,n;
    // num=9115;
    // n=17;
    // string mapping = "123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // char newarr[100000];
    // int i=0;
    // int count=0;
    // while(num>0){
    //     int rem = num%n;
    //     count++;
    //     newarr[i]=mapping[rem];
    //     i++;
    //     num/=n;
    // }

    // reverse(newarr,newarr+count);

    // for (int i=1;i<=count;i++){
    //     cout<< newarr[i];
    // }

    int n ;
    cout << "enter the binary number " << endl;
    cin >> n;
    int i=0,ans=0,bit;
        while(n){
            bit = n&1;
            ans = (bit * pow(10,i)) + ans;
            i++;
            n=n>>1;
        }
    cout << "ans is " << ans << endl;

    cout << (~ans) << endl;
return 0;
}