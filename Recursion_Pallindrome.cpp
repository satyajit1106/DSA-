#include<iostream>
using namespace std;

bool Check_Pallindrome(string& s , int i , int j){

    if(i >j){
    return 1 ;
    }
    
   if(s[i] != s[j]){
    return false;
   }

    i++;
    j--;
    return Check_Pallindrome(s,i,j);
}

int main()
{
    
    string name = "abcdfcca" ;
    bool ispallindrome = Check_Pallindrome(name , 0 , name.length()-1);

    if(ispallindrome){
        cout << "valid Pallindrome" << endl;
    }
    else{
    cout << "not a Pallindrome" << endl;
    }
return 0;
}