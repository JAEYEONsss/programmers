#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<long> container;

    while (n > 0) {
        container.push_back(n % 10);
        n /= 10;
    }
    sort(container.begin(), container.end());

    for (int i = 0; i < container.size(); i++)
        answer += container[i] * pow(10, i);

    return answer;
}
int main() {
    int num;
    cin >> num;

    cout << solution(num);

    return 0;
}
