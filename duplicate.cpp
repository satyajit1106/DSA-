#include<iostream>
using namespace std;
int main()
{
    int ans=0;
    int arr[5]={1,2,3,4,4};
    for(int i=0;i<5;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<5;i++){   
        ans=ans^i;
    }
    cout << ans;
return 0;
}