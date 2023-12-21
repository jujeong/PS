#include <bits/stdc++.h>
using namespace std;

int N, B;
vector<char> res;

char getVal(int r) {
    if (r < 10) {
        return char(r + '0');
    }
    else {
        return char(r - 10 + 'A');
    }
}

void input() {
    cin >> N >> B;
}

void output() {
    for (int i = 0; i < int(res.size()); i++) {
        cout << res[i];
    }
}

void progress() {
    while (N > 0) {
        res.push_back(getVal(N % B));
        N /= B;
    }
    reverse(res.begin(), res.end());
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    progress();
    output();
}