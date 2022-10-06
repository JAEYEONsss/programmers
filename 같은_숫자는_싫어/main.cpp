#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr)
{
    arr.erase(unique(arr.begin(), arr.end()),arr.end());//unique 함수는 쓰레기 위치 알려준다

    return arr;
}
int main() {
    vector<int> arr = {1,1,3,3,0,1,1};

    arr = solution(arr);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
