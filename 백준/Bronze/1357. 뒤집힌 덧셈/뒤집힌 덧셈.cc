#include <bits/stdc++.h>
using namespace std;

int X, Y;

int reverse(int n) {
    int res = 0;
    while (n > 0) {
        res *= 10;
        res += n % 10;
        n /= 10;
    }
    return res;
}

void input() {
    cin >> X >> Y;
}

void output() {
    cout << reverse(reverse(X) + reverse(Y));
}

void progress() {
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    progress();
    output();

}