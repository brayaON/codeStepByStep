#include <iostream>
#include <vector>
using namespace std;

int countOccurrencesHelper(vector<int> &v1, vector<int> &v2, int j, int i, int ans);

int countOccurrences(vector<int> &v1, vector<int> &v2) {
    return countOccurrencesHelper(v1, v2, 0, 0, 0);
}

int countOccurrencesHelper(vector<int> &v1, vector<int> &v2, int j, int i, int ans) {
    if ((int)(v1.size()) == j) {
        if ((int)(v2.size()) == i) {
            ++ans;
        }
        return ans;
    } else if ((int)(v2.size()) == i) {
        i = 0;
        if (v2.size() > 1) {
            --j;
        }
        return countOccurrencesHelper(v1, v2, j, i, ++ans);
    } else if (v1[j] == v2[i]) {
        return countOccurrencesHelper(v1, v2, ++j, ++i, ans);
    } else {
        i = 0;
        return countOccurrencesHelper(v1, v2, ++j, i, ans);
    }
}

int main_count_occurrences() {
    vector<int> v1;
    vector<int> v2;

    /*
    v1.push_back(8);
    v1.push_back(8);
    v1.push_back(8);
    v1.push_back(4);
    v1.push_back(8);
    v1.push_back(8);
    v1.push_back(8);
    v1.push_back(8);
    v1.push_back(2);
    v1.push_back(8);
    v1.push_back(1);
    v1.push_back(8);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(8);

    v2.push_back(8);
    v2.push_back(8);
    */

    /*
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(2);
    v1.push_back(9);
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(2);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(2);

    v2.push_back(1);
    v2.push_back(4);
    v2.push_back(2);
    */

    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(5);

    v2.push_back(5);
    cout << countOccurrences(v1, v2) << endl;
    return 0;
}
