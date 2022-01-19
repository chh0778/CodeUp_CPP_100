#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int cnt=0;
    int r, g, b;
    
    cin>>r>>g>>b;
    cnt=r*g*b;
    
    for(int i=0; i<r;i++)
        for(int j=0;j<g;j++)
            for(int k=0; k<b; k++)
                //cout<<i<<' '<<j<<' '<<k<<' '<<endl;
                printf("%d %d %d", i, j, k);
    cout<<cnt;  
}
