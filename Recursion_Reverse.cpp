#include<iostream>
using namespace std;

void reverse(string& name, int i , int j){
    i=0;
    j=name.length() -1;

    // base case 
    if(i>j) 
    {
        return ;

    }

    // processing 
    swap( name[i] , name[j] );
    i++;
    j--;

    // recursive call 
    reverse(name , i , j) ;


}
int main()
{
    string n = "abcde" ;
    reverse(n , 0 , n.length()-1 ) ;
    cout << n << endl;

return 0;
}
