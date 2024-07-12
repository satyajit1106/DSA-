#include<iostream>
#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main()
{
    string input="satYajiT";
    int temp[25]={'0'};
    int occurance=0;
    for(int i=0;input[i]!='\0';i++){
    if(input[i]>='a' && input[i]<= 'z'){
        occurance= input[i]- 'a';
    }
    else{
        occurance=input[i] - 'A';
    }
    temp[occurance]++;
    }
    int ans=0;
    for(int j=0;j<26;j++){
        int maxi=-1;
        if(maxi<temp[j]){
            ans=j;
            maxi=temp[j];
        }
    }
    char sol= 'a' + ans;
    cout << sol;
    return sol;

return 0;
}