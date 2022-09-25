#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int add = x;

    for (int i = 0; i < n; i++) {
        answer.push_back(x);
        x += add;
    }

    return answer;
}

int main() {
    int x,n;
    vector<long long> temp;

    cin >> x >> n ;
    temp = solution(x, n);

    for (int i = 0; i < n; i++)
       cout << temp[i] << endl;

    return 0;
}
