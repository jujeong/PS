#include <bits/stdc++.h>
using namespace std;

string S;
set<string> arr;

void input() {
    cin >> S;
}

void output() {
    cout << arr.size();
}

void progress() {
    for (int i = 1; i <= int(S.size()); i++) {
        for (int j = 0; j < int(S.size()) - i + 1; j++) {
            arr.insert(S.substr(j, i));
            //cout << S.substr(j, i) << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    progress();
    output();
}