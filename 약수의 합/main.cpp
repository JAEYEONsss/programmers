#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int victim = n;

    while (n > 0) {
        if (victim % n == 0) {
            answer += n;
        }
        n--;
    }
    return answer;
}

int main() {
    int num;

    cin >> num;
    cout << solution(num);

    return 0;
}
