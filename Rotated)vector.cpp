#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int k;
    vector<int>v;
    v.emplace_back(5);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(2);
    v.emplace_back(1);

cout << "enter the k:" ;
cin >> k;
    vector<int>temp(v.size());

    cout << "****** element in vector *******" << endl;
    for(auto i : v){
        cout << i << " " << endl;
    }

    cout << "rotated vector is : " << endl;
    for(int i = 0 ; i< v.size() ; i++){
        temp[(i+k)% (v.size())]  = v[i];
        
    }

    v = temp;

    cout << "****** element in vector *******" << endl;
    for(auto i : v){
        cout << i  << " ";
    }


return 0;
}