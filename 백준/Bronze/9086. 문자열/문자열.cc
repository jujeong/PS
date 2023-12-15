#include <bits/stdc++.h>
using namespace std;

int T;
string S;

void input() {
    cin >> S;
}

void output() {
    cout << S[0] << S[int(S.size()) - 1] << "\n";
}

void progress() {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    for (int i = 0; i < T; i++) {
        input();
        progress();
        output();
    }
}