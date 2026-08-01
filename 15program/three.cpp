#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three number:"<<endl;
    cin>>a>>b>>c;
    if (a>=b && a>c)
    cout<<"largest"<<a<<endl;
    else if (b>=c && b>=a )
    cout<<"largest"<<b<<endl;
    else
    cout<<"largest"<<c<<endl;
    return 0;
}