#include<iostream>
using namespace std;
// complexity is O(log(log n)) ~ O(n)
int n=1e8;
bool sieve[100000001]; // inside any fn we can declare max size of the int array is 1e6 & bool of 1e7 but globally int of 1e7 and bool of 1e8
void createsieve(){
    for(int i=2;i<=n;i++){ 
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
    
int main()
{
    createsieve();
    int n;
    cin >> n;
    if(sieve[n]==true){
        cout << "prime";
    }
    else{
        cout << "not the prime";
    }
    
return 0;
}