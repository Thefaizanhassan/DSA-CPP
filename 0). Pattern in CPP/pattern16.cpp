// Pyramid Pattern for Numbers
#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int n;
    cin>>n;
    int l[20][20];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                l[i][j] = 1;
            } else {
                l[i][j] = l[i - 1][j - 1] + l[i - 1][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
                cout<<" ";    
        }
        for (int j = 0; j <=i; j++) {
                    cout<<l[i][j]<<" ";
                }
        cout<<endl;
    }
    return 0;
}