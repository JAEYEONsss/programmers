#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int comp = 100000;
    int index;

    for (int i = 0; i < arr.size(); i++) {
        if(arr[i] < comp){
            index = i;
            comp = arr[i];
        }
    }

//    arr.erase(min_element(arr.begin(), arr.end()));

    arr.erase(arr.begin() + index);

    if(arr.size() == 0)
        arr.push_back(-1);

    return arr;
}

int main() {
    vector<int> arr = {4, 3, 2, 1};
    vector<int> answer = solution(arr);

    for(int i=0; i<answer.size(); i++)
        cout << answer[i] << endl;

    return 0;
}
