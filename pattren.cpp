#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"enter the value of n";
    cin>>n;

    // Here i is called number of rows 
    // and j is called number of column 
    // in the whole program


    // pattern 1
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // pattern 2
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // pattern 3
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<j;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // pattern 4
    // while(i<=n){
    //     int j=n;
    //     while(j>=1){
    //         cout<<j;
    //         j--;
    //     }
    //     cout<<endl;
    //     i++;

    // }

    // pattern 5
    // int count=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<count<<' ';
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // pattern 6
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // pattern 7
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // pattern 8
    // int count=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<< count<<" ";
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // pattern 9
    // while(i<=n){
    //     int j=i;
    //     while(j>=1){
    //         cout<<j;
    //         j--;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // pattern 10
    // char alpha='A';
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<alpha;
    //         j++;
    //     }
    //     cout<<endl;
    //     alpha++;
    //     i++;
    // }


    // pattern 11
    // char alpha ='A';
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<alpha;
    //         alpha++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // pattern 12
    // char alpha='A';
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<alpha;
    //         j++;
    //     }
    //     cout<<endl;
    //     alpha++;
    //     i++;
    // }


    // pattern 13
    // char alpha='A';
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<alpha;
    //         alpha++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // pattern 14
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         char ch=i+j-2+'A';
    //         cout<<ch;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // pattern 15
    // while(i<=n){
    //     int j=1;
    //     char ch='A'+n-i;
    //     while(j<=i){
    //         cout << ch;
    //         ch++;
    //         j++;
    //          }
    //     cout<<endl;
    //     i++;
    // }

    // pattern 16 
    
    // while(i<=n){
    //     char alpha = 'A'+n-i;
    //     int j=1;
    //     while(j<=i){
    //         cout<< alpha;
    //         alpha++;
    //         j++;
    //         }
    //         cout<<endl;
    //         i++;
    // }

    // pattern 17
    // char alpha ='A';
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<alpha;
    //         alpha ++;
    //         j++;
    //         }
    //     cout << endl;
    //     alpha--;
    //     alpha--;
    //     i++;
    // }

    // pattern 18;
    // while(i<=n){
    //     // enter space 
    //     int space  = n-i;
    //     while(space){
    //         cout<<" ";
    //         space = space -1;
    //     }
    //     // enter stars 
    //     while(i<=n){
    //         int j=1;
    //         while(j<=i){
    //             cout<< "*";
    //             j++;
    //         }
    //         cout<<endl;
    //         i++;
    //     }

        // pattern 19
        // while(i<=n){
        //     int j= n;
        //     while(j>=i){
        //         cout<< "X";
        //         j--;
        //     }
        //     cout<< endl;
        //     i++;
        // }

        // pattern 20

        // print space
        while(i<=n){
        int space = n-i;
        while(space){
            cout << " ";
            space--;
        }

        // print triangle 1
        int j = 1;
        while(j<=i){
             cout << j;
             j++;
        }

        // print triangle 2
        int start = i-1;
        while(start){
            cout << start;
            start--;
        }
        cout << endl;
        i++;

        }
        }

        
    
