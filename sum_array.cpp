#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.emplace_back(1);
    v.emplace_back(2);
    v.emplace_back(3);

    vector<int>vec;
    vec.emplace_back(9);
    vec.emplace_back(9);

    vector<int>ans(vector<int>vec,vector<int>v);
    

    int m,n ;
    int carry = 0 ;
    int i = v.size()-1;
    int j = vec.size()-1;
    
    while(i>=0 && j>= 0){
        int sum = v[i] + vec[j] + carry ;
        int carry = sum / 10;
        int sum = sum % 10;
        i++;
        j++;
    }
    while(i<v.size()){
        int sum = v[i] + carry ;
        int carry = sum / 10;
        int sum = sum % 10;
        i++;
    }
    while(j<vec.size()){
        int sum = vec[j] + carry ;
        int carry = sum / 10;
        int sum = sum % 10;
        j++;
    }
    while(carry != 0){
        int sum = carry ;
        int carry = sum / 10;
        int sum = sum % 10;
    }
    
    

return 0;
}