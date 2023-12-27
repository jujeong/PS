#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> elements) {
    map<int, int> arr;
    int t;
    for(int j = 1; j <= int(elements.size()); j++) {
        for(int i = 0; i < int(elements.size()); i++) {
            t = 0;
            for(int k = i; k < i + j; k++) {
                t += elements[k % int(elements.size())];
            }
            arr[t]++;
        }
    }
    return int(arr.size());
}