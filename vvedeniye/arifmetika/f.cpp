#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<min(a+b-1,10)-a<<' '<<min(a+b-1,10)-b<<'\n';
    return 0;
}