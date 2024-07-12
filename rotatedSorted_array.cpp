#include<iostream>
#include<vector>

int main()
{
    int count = 0;
    std::vector<int>v;
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(1);
    v.emplace_back(2);
    
    std:: cout<< " *** vector *** " ;
    for(int i=0 ;i<v.size();i++ ){
        std::cout << v[i];
    }

    for(int i = 0 ; i< v.size() ; i++){
        if(v[i] > v[i+1]){
            count ++;
            
        }
    }
    if(v[v.size()-1] > v[0]){
        count++;
    }
    if(count <=1){
        std::cout << "True ";
    }

return 0;
}