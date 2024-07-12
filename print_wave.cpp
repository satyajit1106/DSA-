#include<iostream>
using namespace std;
int main()
{
    int arr[5][5];
    for (int i = 0; i< 5 ; i++){
        if(i %2 == 0){
            for(int j =0 ; j<5 ; j++){
                cout << arr[i][j];
            }
              if(i %2 != 0){
            for(int j =5 ; j>=0 ; j--){
                cout << arr[i][j];
            }
            
        }
    }
return 0;
}