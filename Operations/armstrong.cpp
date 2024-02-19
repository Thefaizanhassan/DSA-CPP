// armstrong
#include<iostream>
#include<cmath>

using namespace std;

int count(int n) {
    int c = 0;
    while (n != 0) {
        c++;
        n = n / 10;
    }
    return c;
}

int sum(int n, int power) {
    int sum = 0;
    while (n != 0) {
        int r = n % 10;
        sum = sum + pow(r, power);
        n = n / 10;
    }
    return sum;
}

int main() {
    int input;
    cout << "Enter an integer: ";
    cin >> input;

    int digits = count(input);
    int Total  = sum(input, digits);

    if (Total == input) {
        cout << "Is Armstrong" << endl;
    } else {
        cout << "Is Not-Armstrong" << endl;
    }
    
    return 0;
}
