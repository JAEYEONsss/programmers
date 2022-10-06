#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.rbegin(), d.rend());

    while(budget >= d.back() && d.back() != 0){
        answer ++;
        budget -= d.back();
        d.pop_back();
    }

    return answer;
}

int main() {
    vector<int> d = {2,2,3,3};
    int budget;
    cin >> budget;
    cout << solution(d, budget);
    return 0;
}
