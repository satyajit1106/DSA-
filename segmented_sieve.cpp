#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// creating sieve
int n=1e8;
bool sieve[100000001];
void createsieve(){
    for(int i=0;i<n;i++){
        sieve[i]=true;
    }
    for(int i=2;i*i<=n;i++){
        if(sieve[i]==true){
            for(int j=i*i;j<=n;j+=i){
                sieve[j]=false;
            }
        }
    }
}
// data structure that finds and stores the prime
vector<int> generatePrime(int n){
    vector<int>ds;
    for(int i=2;i<=n;i++){
        if(sieve[i]==true){
            ds.push_back(i);
        }
    }
    return ds;
}

int main()
{   
    createsieve();  
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin >>l>>r;
        // generte all the primes till the sqrt r
        vector<int>primes = generatePrime(sqrt(r)); 

        // create the dummy array of size r-l+1 and make all everone as 1;
        int dummy[r-l+1];
        for(int i=0;i<=r-l+1;i++){
            dummy[i]=1;
        }

        // for all prime number mark its mul as false
        for(auto pr:primes){
            int firstmul = (l/pr)*pr;
            if(firstmul<l){
                firstmul+=pr;
            }

            for(int j=max(firstmul,pr*pr);j<=r;j+=pr){
                dummy[j-l]=0;
            }
        }

        // get all the primes   
        for(int i=l;i<=r;i++){
            if(dummy[i-l]==1){
                cout << i << " ";       // so it is the prime number and we print the number 
            }
        }
        cout << endl;
        
    }
return 0;
}