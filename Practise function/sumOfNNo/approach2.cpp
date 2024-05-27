#include<iostream>
#include<math.h>

using namespace std;

#include<iostream>
#include<math.h>

using namespace std;

int sum(int n){
    int val;

    val = (n*(n+1))/2;
    
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