#include<iostream>
using namespace std;

void reverse(string& n, int i , int j){

    // base case 
    if(i>j){
        return;
    }
    swap(n[i] , n[j]);
    i++;
    j--;

    return reverse(n,i,j);
}

int main()
{
    string name = "SATYAJIT" ;
    
    reverse(name ,  0 ,  name.length()-1 ) ;
    
    cout << name ;

return 0;
}