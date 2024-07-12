#include<iostream>
using namespace std;


class hero{
        // by default the data members are private in the class
        public:
        int health;
        char level;
        void print(){
            cout << level;
        }
    };
int main()
{
    //object
    hero h1;
    h1.health=89;
    h1.level='A';
    
    cout << "health is : "<< h1.health << '\n';
    cout << "level is : " << h1.level << '\n';  
return 0;
}