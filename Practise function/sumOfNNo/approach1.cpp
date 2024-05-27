#include<iostream>
#include<math.h>

using namespace std;

int sum(int n){
    int val;
    if (n == 0) {
        val = 0;
    } else if (n == 1)
    {
        val = 1;
    }
    
    else {
        val = n + sum(n-1);
    } 
    return val;
}

int main(){
    int n, totalSum;
    cout<<"Enter a positive integer: ";
    cin>>n;

    if (n<0) {
        cout<<"Negative value entered"<<endl;
        return 0;
    }

    totalSum = sum(n);
    cout << totalSum << endl;
    return 0;
}