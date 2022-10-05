#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int big, small;
    int remainder = -1;

    if(n>=m){
        big = n;
        small = m;
    }else{
        big = m;
        small = n;
    }

    while (remainder != 0) {
        remainder = big%small;
        big = small;
        small = remainder;
    }
    answer.push_back(big);
    answer.push_back(((n*m)/big));

    return answer;
}

int main() {
    int n,m;
    vector<int> answer;
    cin >> n >> m;
    answer = solution(n, m);
    for (int i = 0; i < 2; i++) {
        cout << answer[i] << endl;
    }
    return 0;
}
