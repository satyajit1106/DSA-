#include<iostream>
using namespace std;

void sayDigit(int n , string arr[]){

    // base case 
    if(n == 0){
        return;
    }

    // processing 
    int digit = n % 10;
    n = n / 10;

    // Recursive call 
    sayDigit(n, arr);
    // head recursion because otherwise it will print the digit in the reverse order 

    cout << arr[digit] << " ";

}
int main()
{
    string arr[] = {"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"};
    int n;
    cout << "enter the value " << endl;
    cin >> n;
    sayDigit(n,arr);
return 0;
}