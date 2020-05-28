//
// Created by Conor on 5/28/2020.
//

#include <iostream>

using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    while (n % a != 0) {
        n++;
    }
    while (m % a != 0) {
        m++;
    }
    cout << (n * m) / (a * a);
}