#include<iostream>
using namespace std;

int main(){
    int t; 
    string s;
    int x = 0;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> s;
        if(s[1] == '+'){ 
            x++;
        } else {
            x--;
        }
    }
    
    cout << x;
    return 0;
}
