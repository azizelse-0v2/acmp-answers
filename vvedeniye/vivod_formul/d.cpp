#include <iostream>
using namespace std;
int main(){
    int h,m,s,H,M,S;
    cin>>h>>m>>s>>H>>M>>S;
    int a=h*3600+m*60+s;
    int b=H*3600+M*60+S;
    cout<<b-a;
    return 0;
}