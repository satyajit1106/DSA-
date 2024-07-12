// we have only two ways of climbing the stair that is by climbing a stair or two 

#include<iostream>
using namespace std;

int climbstair(int n){

    // there is no place to stand below 0th place 
    if(n < 0){
        return 0;
    }
    // there is only one way of standing at 0th positon is by jumping on its place 
    if(n == 0){
        return 1;
    }

    // one way of reaching at the nth positon is by climbing 1 steps to the end of the stair
    int lastm1 = climbstair(n-1);
    // second way of reaching at the top is by climbing two steps to the end of the stair
    int lastm2 = climbstair(n-2);

    return lastm1 + lastm2 ;

}
int main()
{
    int n;
    cout << "enter the number of the stair " << endl;
    cin >> n;
    int ans = climbstair(n);
    cout << ans;
return 0;
}