#include<iostream>
using namespace std;
int main()
{
    int i = 5 ;
    int *ptr = & i;
    int **ptr2 = &ptr;
    cout << **ptr2 << endl;
    cout << *ptr2<< endl;
    cout << ptr << endl;
return 0;
}