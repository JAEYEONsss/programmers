#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % divisor == 0)
            answer.push_back(arr[i]);
    }
    if(answer.size() == 0)
        answer.push_back(-1);

    sort(answer.begin(), answer.end());

    return answer;
}

int main() {
    vector<int> num = {5, 9, 7, 10};
    int divisor = 5;

    num = solution(num, divisor);

    for(int i = 0; i<num.size(); i++)
        cout << num[i] << endl;

    return 0;
}
