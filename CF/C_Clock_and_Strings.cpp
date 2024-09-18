#include <iostream>
using namespace std;
#define ll long long



void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    int ct=0;
    for(int i=min(a,b); i<=max(a,b); ++i)
    {
        if(i==c || i==d) ct++;
    }
    if(ct == 1)  cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    
    int T = 1;
    cin >> T;
    while(T--){
        
        solve();
    }
    return 0;
}