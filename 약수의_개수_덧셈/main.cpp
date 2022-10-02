#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    vector<int> square;

    for(int i=1; i<=31; i++)
        square.push_back(i*i);

    for(left; left <= right; left++){
        if(find(square.begin(), square.end(), left) == square.end())
            answer += left;
        else
            answer -= left;
    }

    return answer;
}

int main() {
    int left, right;
    cin >> left >> right;
    cout << solution(left, right);
    return 0;
}
