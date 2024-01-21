#include<iostream>
using namespace std;

bool isPowerOfTwo(int n) {
        int number = n;

        while(number > 1) {
            if(number%2 != 0){
                return false;
            }

            number /= 2;
        }
        return true;
    }

int digitSum(int N) {

}

bool isPrime(int N) {
    if(N <= 1){
        return false;
    }
    for( int i = 2; i < N; i++) {
        if(N%i == 0){
            return false;
        }
    }
    return true;
}

int main() {

    // find first N numbers whose digit sum is K.
    // int N;
    // cin >> N;
    // int K;
    // cin >> K;
    // int digitCount = 0;
    // int number = 1;
    // while(digitCount < N) {
    //     int sum = 0;
    //     for( int rem = number; rem > 0; rem /= 10) {
    //         sum += rem%10;
    //     }
    //     if(sum == K) {
    //         digitCount++;
    //         cout << number << endl;
    //     }
    //     number++;
    // }


    // Printing all prime numbers from 1 to N
    // int N;

    // cin >> N;

    // for( int i = 0; i < N; i++) {
    //     if(isPrime(i)) cout << i << endl;
    // }


    // Pattern printing

    /*
    
    ****        *****
    ****        *****
    ****        *****
    ****        *****
                *****
    
    */

    int N;
    cin >> N;

    for( int i = 0; i < N; i++) {
        for(int k = 0 ; k<(i); k++) {
            cout << " ";
        }
        for( int i = 0; i < N; i++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}