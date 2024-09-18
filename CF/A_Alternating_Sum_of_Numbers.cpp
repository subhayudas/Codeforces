#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        for(int i = 0; i < n; i++) {  
            int a;
            cin>>a;
            if(i % 2 == 0){  
                sum += a;     
            } else {
                sum -= a;    
            }
        }
        cout<<sum<<endl;
    }
}