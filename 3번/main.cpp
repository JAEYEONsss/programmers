#include <iostream>

using namespace std;

int solution(int n)
{
    int answer = 0;

    while (n > 0) {
        answer += (n % 10);
        n /= 10;
    }//n이 한 자리 수 일 때 10으로 나누면 몫이 0으로 된다.

    return answer;
}

int main() {
    int num;

    cin >> num;
    cout << solution(num);

    return 0;
}
