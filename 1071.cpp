#include<iostream>
using namespace std;

int main(){
    int a;
    
    reload:
    cin>>a;
    if(a==0) goto stop_;
    cout<<a<<endl;
    if(a!=0) goto reload;
    
    stop_:
    return 0;
}
