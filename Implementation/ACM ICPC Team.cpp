#include <iostream>
#include <vector>
#include <string>
#include <bitset>

using namespace std;


// Complete the acmTeam function below.
vector<int> acmTeam(vector<string> topic) {

    vector<int> result(2, 0);

    for (int i = 0; i < topic.size() - 1; i++) {

        for (int j = i + 1; j < topic.size(); j++) {

            bitset<500> bitset1(topic[i]);
            bitset<500> bitset2(topic[j]);

            int numberOfOnes = static_cast<int> ((bitset1 | bitset2).count());

            if (numberOfOnes > result[0]) {
                result[0] = numberOfOnes;
                result[1] = 1;
            }
            else if (numberOfOnes == result[0])
                result[1]++;
        }
    }
    return result;
}

int main() {

    vector<string> arr;
    arr.push_back("10101");
    arr.push_back("11100");
    arr.push_back("11010");
    arr.push_back("00101");

    vector<int> res = acmTeam(arr);

    system("pause");

}