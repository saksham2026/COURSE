#include<iostream>
using namespace std;

// HCF of 2 numbers
int HCF(int a, int b) {
    int c = min(a, b);
    int product = 1;
    for(int i = 1; i <= a; i++ ) {
        if( a%i == 0 && b%i == 0) {
            product = i;
        }
    }
    return product;
}

// perfect number
bool isPerfect(int N) {
    int sum  = 0;
    for( int i = 1; i < N; i++) {
        if( N%i == 0 ){
            sum += i;
        }
    }
    if(sum == N) {
        return true;
    }
    return false;
}
int main() {
    int N ;
    cin >> N;
    for( int i = 1; i < N; i++) {
        if( isPerfect(i)) {
            cout << i << endl;
        }
    }
    return 0;
}