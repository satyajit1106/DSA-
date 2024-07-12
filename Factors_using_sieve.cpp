#include<iostream>
using namespace std;
int n=1e7;
int sieve[10000001];
void createsieve(){
    for(int i=2;i<=n;i++){
        sieve[i]=i;
    }
    for(int i=2;i*i<=n;i++){
        if(sieve[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(sieve[j]!=i){
                    sieve[j]=i;
                }
            }
        }
    }
}
int main()
{
    createsieve();
    int t;          // for number of test cases
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        while(n!=1){
            cout << sieve[n] << " ";
            n=n/sieve[n];
        }
        cout << endl;
        
    }
    
return 0;
}