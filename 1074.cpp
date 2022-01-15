#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    
    for(int i=a; i>0;i--)
    {
        if(i==0) break;
        cout<<i<<endl;
    }
}
