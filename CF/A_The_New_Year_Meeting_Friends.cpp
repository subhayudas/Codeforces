#include<iostream>
using namespace std;

int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;


    int positions[3]={x1,x2,x3};
    sort(positions, positions+3);

    int meeting_point=positions[1];

    int total=abs(meeting_point - positions[0]) + 
              abs(meeting_point - positions[1]) + 
              abs(meeting_point - positions[2]);
              
    cout<<total<<endl;
    return 0;
}