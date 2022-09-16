#include <iostream>
#include <math.h>

using namespace std;

long long solution(long long n) {
    long long answer = 1;

    while (true) {
        if (pow(answer,2) == n) {
            answer = pow(++answer, 2);
            break;
        } else if (pow(answer, 2) > n) {
            answer = -1;
            break;
        }
        answer++;
    }

    return answer;
}

int main() {
    long long n;

    cin >> n;
    cout << solution(n);
    return 0;
}
