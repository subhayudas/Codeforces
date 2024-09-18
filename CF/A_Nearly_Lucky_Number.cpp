#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {

string a;
cin>>a;
int counter=0;
int len=a.length();
 int seven=count(a.begin(),a.end(),'4');
 int four=count(a.begin(),a.end(),'7');
 if((four+seven==4||four+seven==7))
	 cout<<"YES";
 else
 cout<<"NO";

return 0;
}