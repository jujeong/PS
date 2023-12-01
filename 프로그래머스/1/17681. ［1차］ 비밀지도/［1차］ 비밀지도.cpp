#include <bits/stdc++.h>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i = 0; i < n; i++) {
        int v = arr1[i] | arr2[i];
        string temp = "";
        for(int j = pow(2, n - 1); j >= 1; j /= 2) {
            if(v >= j) {
                v -= j;
                temp += "#";
            }
            else {
                temp += " ";
            }
        }
        answer.push_back(temp);
    }
    return answer;
}