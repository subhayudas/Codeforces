#include<iostream>

int main(){
    std::string x;
    std::cin>>x;
    for(auto& digit: x){
        if(digit>'4'){
            digit= '9'- digit +'0';
        }
    }

    if(x.front()=='0'){
        x.front()='9';
    }
    std::cout<<x<<std::endl;
    return 0;
}