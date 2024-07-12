#include<iostream>
using namespace std;
int main()
{
    int arr[9]={2,1,3,7,7,3,2,6,6};
    int ans=0;
    for(int i=0;i<9;i++){
        ans=ans^arr[i];
    }
    cout << ans;

   
return 0;
}