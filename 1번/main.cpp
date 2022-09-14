#include <iostream>

int solution(int n) {
    int answer = 0;

    int remain = 0;
    while (remain != 1) {
        answer++;
        remain = n % answer;
    }

    return answer;
}

int main() {
    std::cout << solution(10);
    return 0;
}
