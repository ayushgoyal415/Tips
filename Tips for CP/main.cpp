#include <bits/stdc++.h>  // Using bits header file
using namespace std;

typedef long long LL;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))

void add_n_natural_numbers(int n) {
    LL sum = 0;       // Using LL
    FOR(i, 1, n + 1)  // Using FOR
    sum += i;
    cout << sum << "\n";  // Using \n instead of 'endl'
}

void tell_cplusplus_ver()  // Getting C++ version
{
    if (__cplusplus == 201703L)
        cout << "C++17\n";
    else if (__cplusplus == 201402L)
        cout << "C++14\n";
    else if (__cplusplus == 201103L)
        cout << "C++11\n";
    else if (__cplusplus == 199711L)
        cout << "C++98\n";
    else
        cout << "pre-standard C++\n";
}

int main() {
#ifndef ONLINE_JUDJE  // Using text files to input and output
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    add_n_natural_numbers(n);
    tell_cplusplus_ver();

    return 0;
}