#include<stdlib.h>
#include<iostream>

using namespace std;

void fun(int A[ ])
{
    cout<<sizeof(A)/sizeof(int)<<endl;
}

int main(){
    int A[]={2,9,4,8,5};
    int n = 5;
    cout<<sizeof(A)/sizeof(int)<<endl;

    for(int x:A)
    cout<<x<<" ";
    cout<<endl;
    
    return 0;
}
