// Print Half Pyramid using numbers
#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++ ){
        for (int j = 1; j <=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}