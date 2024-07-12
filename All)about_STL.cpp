#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{

    // initilisation of the vector 
    vector<int>v;

    // entering the elements in the vector
    v.push_back(1);
    v.emplace_back(2); // it is faster than the push_back function
    v.emplace_back(4);
    v.emplace_back(6);

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << endl;

cout << "***************"<< endl;
    vector<int>::iterator itc = v.end();
    itc--;
    cout << *(itc) << endl;

cout << "***************"<< endl;
    for(vector<int>::iterator it = v.begin();it!=v.end();it++){
        cout << *(it) << endl;
    }


    for(auto i : v){
        cout << i << endl;
    }

cout << "***************"<< endl;
    v.erase(v.begin()+1,v.begin()+3); // it don't consider the last given value
    for(auto i : v){      // so 2 and 4 is deleted and 6 is not
        cout << i ;
    }


cout << "inserting values in the vector : " << endl;
    vector<int>vec(3,100);
    for(auto i : vec ){
        cout << i << endl;
    }
    cout << "***************"<< endl;
    vec.insert(vec.begin()+2,200);
    for(auto i : vec){
        cout << i << endl;
    }
    cout << "***************"<< endl;
    vec.insert(vec.begin()+1,2,400);
    for(auto i : vec){
        cout << i << endl;
    }

    vec.pop_back();
    for(auto i : vec){
        cout << i << endl;
    }




return 0;
}