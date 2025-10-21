#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int h = n*45 + (n/2)*5 + ((n-1)/2)*15;
    cout<<9+h/60<<' '<<h%60;
    return 0;
}
/*#lessons #5 #15
1-0-0
2-1-0
3-1-1
4-2-1
5-2-2
*/