#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n, r, rev =0, x;
    cin>>n;
    x=n;

    while (x!=0)
    {
        r = x % 10 ;
        rev =10 * rev + r ;
        x = x / 10 ;
    }
    cout<<rev<<endl;

    return 0;
}