// there is some problem in the code so we need to debug the runtime error 




#include<iostream>
#include<string>
using namespace std;
char ReverseWord(string a){
    int i ,j;
    for ( i = 0 ; i !='\0' ; i++){
        for( j = 1; a[j]!= ' ' || a[j]!= '\0' ; j++){
            while(i<=j){
                swap(a[i],a[j-1]);
                i++;
                j--;
            }
        }
        i=j+1;
    }           
}
int main()
{
    string s = "My Name Is Patra" ;
    cout << ReverseWord(s)<< endl;
return 0;
}