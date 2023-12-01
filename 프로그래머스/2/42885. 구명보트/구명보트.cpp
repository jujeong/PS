#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int total = int(people.size());
    int min = 0;
    sort(people.begin(), people.end());
    for(int i = int(people.size()) - 1; i >= min ; i--) {
        if(people[i] + people[min] <= limit) {
            min++;
        }
        answer++;
    }
    return answer;
}