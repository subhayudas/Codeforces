#include <iostream>
using namespace std;

void solve(){
    int a, b, n;
        cin>>a>>b>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int  total = b;
    for (auto x: arr){
        total += min(1LL +x, a*1LL )-1;
    }
    cout<<total<<endl; 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        
        solve();
    }
    
return 0;


}