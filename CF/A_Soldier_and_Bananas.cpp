#include <iostream>
using namespace std;

int main(){
    int k,n,w,tm=0,ans;
    cin>>k>>n>>w;
    while(w!=0){
        tm=tm+(k*w);
        w--;
    }
    if (n>=tm){
        cout<<0;
    }
    else{ans=tm-n;
    cout<<ans;}
}