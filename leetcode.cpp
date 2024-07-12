#include<iostream>
#include<string >
using namespace std;
int main()
{
    char s[50];
    int a1[50];
    int k;
    int n;
    int count = 0;
    cout<< "n " ;
     n= k;
    cin >> n;
    cout << "enter the elements in the string " << endl;
    for(int i = 0; i<n; i++){
        for(int j = i+1; i<n;i++){
            if(s[i] == s[j]){
                count ++;
                
            }
        }
    }
    
return 0;
}