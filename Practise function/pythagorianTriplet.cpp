#include<iostream>

using namespace std;

bool isPythagorian(int x, int y, int z){
    int a = max(x, max(y, z));
        if (a == x) {
            b = max(y, z);
            if (b == y) {
                c = z;
            } else {
                c = y;
            }
        } else if (a == y) {
            b = max(x, z);
            if (b == x) {
                c = z;
            } else {
                c = x;
            }
        } else {
            b = max(x, y);
            if (b == x) {
                c = y;
            } else {
                c = x;
            }
        }
    if ((a*a)==(b*b)+(c*c)) {
        /* code */
    }
    
    
}

int main(){
    int x, y, z, a;
    cout<<"Enter three numbers (seperated by space): ";
    cin>> x>>y>>z;

    if (isPythagorian(x, y, z)) {
        cout << x << y << z << " is a pyhagorian triplet.";
    } else
    {
        cout << x << y << z << " is not a pyhagorian triplet.";
    }
    
    return 0;
}
