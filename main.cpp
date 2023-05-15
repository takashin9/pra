#include <bits/stdc++.h>
using namespace std;

int add(int a, int b) {
    if (a < 0) exit(1);
    if (b < 0) exit(1);
    return a + b;
}

int main() {
    cout << add(3, -2) << endl;
    return 0;
}