#include <iostream>  
#include <algorithm> 
#include <cmath>

using namespace std;

void solve() {
int t;
cin >> t;

while (t--) {

int n, m, q;
cin >> n >> m >> q;
int t1, t2;
cin >> t1 >> t2;
int david_position;
cin >> david_position;

if (t1<david_position && t2<david_position) {

cout << n-max(t1, t2) << endl;
 }
 else if (t1> david_position && t2 > david_position) {

cout << min(t1, t2)-1 << endl;

} 
else {

cout << abs(t1-t2)/ 2 << endl;

}
}
}
int main(){
    solve();
    return 0;
}
