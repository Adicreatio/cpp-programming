#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an number:"<<endl;
    cin>>n;
    if (n>0)
    cout<<"positive."<<endl;
    else if (n<0)
    cout<<"Negative."<<endl;
    else
    cout<<"zero"<<endl;
    return 0;
}