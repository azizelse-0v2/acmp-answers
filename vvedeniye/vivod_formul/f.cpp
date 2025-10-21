#include <iostream>
using namespace std;
int main(){
    long long h,a,b;
    cin>>h>>a>>b;
    cout<<max((h-b-1)/(a-b)+1,1LL);
    return 0;
}
/*
k - # of days to reach the end of the pole
(k-1)*(a-b)+a>=h
solve for k
(h-a)/(a-b)<=k-1
a<=b
a<b+1
(h-a+(a-b-1))/(a-b)<k-1
(h-b-1)/(a-b)<k-1
(h-b-1)/(a-b)+1<k
answer = (h-b-1)/(a-b)+1<k
if h<a meaning it can climb the pole in less than one day we should print 1 day
*/