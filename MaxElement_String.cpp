#include<iostream>
#include<string>
using namespace std;
char MaxElement_String(string s){
    
    
    int arr[26] = {0};
    char ch ;
    int number;
    for(int i = 0 ; i < s.length() ; i++){      // for traversing the whole string to check for the mapped element 

        // for mapping each element to the array we need the index (number)

        if(ch>='a' && ch<='z'){                 // for the small letters 
            number = ch - 'a';
        }
        else{
            number = ch - 'A';                  // for capital letters
        }
        arr[number]++; 
    }
    int maxi = -1; 
    int ans =0 ;
    for(int i = 0 ; i < 26 ; i++){              // we need to travel out whole frequency array 
        if(maxi < arr[i]){
            ans = i ;                           // checking the max occuring element in the freq array
            maxi = arr[i] ;
        }
    }
    char final_ans = 'a'+ ans;
    return final_ans;

}
int main()
{
    string s;
    cout << "enter your name " << endl; 
    cin >> s;
    cout << MaxElement_String(s);
return 0;
}