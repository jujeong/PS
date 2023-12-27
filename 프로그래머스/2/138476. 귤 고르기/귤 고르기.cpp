#include <bits/stdc++.h>

using namespace std;

int solution(int k, vector<int> tangerine) {
    vector<int> arr;
    sort(tangerine.begin(), tangerine.end());
    int r = -1;
    int c = 0;
    for(int i = 0; i < int(tangerine.size()); i++) {
        if(i == int(tangerine.size()) - 1) {
            if(tangerine[i] == r) {
                c++;
                arr.push_back(c);
            }
            else {
                arr.push_back(c);
                arr.push_back(1);
            }
            break;
        }
        if(tangerine[i] != r) {
            arr.push_back(c);
            c = 1;
            r = tangerine[i];
        }
        else {
            c++;
        }
    }
    int res = 0;
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    for(int i = 0; i < int(arr.size()); i++) {
        if(!k) {
            break;
        }
        else if(k >= arr[i]) {
            res++;
            k -= arr[i];
            arr[i] = 0;
        }
        else {
            arr[i] -= k;
            res++;
            k = 0;
        }
    }
    return res;
}