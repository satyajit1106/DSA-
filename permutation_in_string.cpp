#include<iostream>
using namespace std;
bool ispossible(int arr1[25] , int arr2[25]){
    for(int j=0;j<26;j++){
        if(arr1[j] != arr2[j]){
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1, string s2) {
        int count1[25]={0};
        for(int i=0;i<s1.length();i++){
            int index_Number = s1[i] - 'a';
            count1[index_Number]++;
        }

        int i=0;
        int count2[25]={0};
        int window=s1.length();
        while(i<window && i<s2.length()){
            int index_Number = s2[i] - 'a';
            count2[index_Number]++;
        }

        if(ispossible(count1,count2)){
            return 1;
        }else{
            while(i<s2.length()){
                char newCharacter= s2[i];
                int index=newCharacter - 'a';
                count2[index]++;

                char oldCharacter= s2[i-window];
                int index1=oldCharacter - 'a';
                count2[index1]--;

                i++;
                if(ispossible(count1,count2)){
                    return 1;
                }
            }
        }
        return 0;
    }
int main(){
    string s2="eidbaooo";
    string s1="ab";
    
    return (checkInclusion(s2,s1));
}

