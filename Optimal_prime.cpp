#include<iostream>
using namespace std;
int main()
{
 
    int count=0;
    int n;
    cout << "enter the value of n"<<endl;
    cin >> n;
    for(int i=1;i*i<n;i++){     
        if(n%i==0){
            count++;
            if((n%i)!=i){
                count++;
            }
        }
    }
    if(count==2)
    cout << ":prime";
    else{
    cout << ":not a prime";}
return 0;
}