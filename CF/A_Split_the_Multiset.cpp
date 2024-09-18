#include <iostream>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    int k = m-1;
    int count = 0;
    while(n>1){
        n=n-k;
        count++;

    }
    cout<<count<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}