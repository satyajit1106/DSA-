#include<iostream>
using namespace std;
int get_length(char name[]){
    int count=0;
    for(int i= 0; name[i] != 0; i++){
        count ++;
    }
    return count ;
}
void reverse_String(char arr[] , int n){
    int s=0; 
    int e = n-1;
    while(s<e){
        swap(arr[s++],arr[e--]);
    }

}
char tolower_case(char ch){
    char temp;
    if(( ch >='a' && ch <='z' ) || (ch>=0 && ch <=9)){
        return ch;
    }
    else{
        temp=   ch - 'A' + 'a' ;
        return temp;
    }
    
}
void pallindrome (char arr[],int n){
    int s=0;
    int e = n-1;
    
    while(s<=e){
        if(tolower_case(arr[s] )== tolower_case( arr[e])){
            s++;
            e--;
        }else {
            cout << "not a pallindrome " << endl;
        }
        
    }
    cout << "it is pallindrome" ;
   
}
int main()
{
    char name[20] ;
    cout << "enter the name :";
    cin >> name;
    int len =  get_length(name);
    cout << "number of words in the name is : " << len << endl;
    reverse_String(name,len);
    cout << "your name is :" << name << endl;

    cout << "palindrome or not ? " << endl;
    pallindrome( name , len);
    cout << endl; 

    
    cout << tolower_case('C');
    
return 0;
}