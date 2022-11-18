#include <iostream>
#include <string>
#include <vector>

using namespace std;



vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<int> temp;
    string container;

    for (int i = 0; i < arr1.size(); i++) {
        temp.push_back(arr1[i]|arr2[i]);
        while(container.length() != n){
            if(temp[i] % 2 == 0)
                container.insert(0, " ");
            else
                container.insert(0, "#");
            temp[i] /= 2;
        }
        answer.push_back(container);
        container = "";
    }

    return answer;
}
