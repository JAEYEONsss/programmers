#include <iostream>
using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;

    for (int i = 1; i <= count; i++)
        answer += (price * i);

    answer -= money;

    if(answer <= 0)
        answer = 0;

    return answer;
}

int main() {
    int price, money, count;
    cin >> price >> money >> count;
    cout << solution(price, money, count);
    return 0;
}
