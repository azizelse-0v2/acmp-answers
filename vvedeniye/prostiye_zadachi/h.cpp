#include <iostream>
using namespace std;
int main(){
    long long k,n;
    cin>>k>>n;
    cout<<(n+k-1LL)/k<<' '<<(n%k==0 ? k : n%k);
    //alternative for ceil() - checks if the line is the last line then prints max num of lines
    return 0;
}