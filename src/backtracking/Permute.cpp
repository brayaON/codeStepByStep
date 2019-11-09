#include <iostream>
#include <vector>
using namespace std;

void permuteHelper(vector<string> &v, vector<string> &s);
void permute(vector<string> &v);

int main_permute() {
    vector<string> v = {"B", "R", "A", "Y", "A", "N"};
    permute(v);
    return 0;
}

void permute(vector<string> &v) {
    vector<string> s;
    permuteHelper(v, s);
}

void permuteHelper(vector<string> &v, vector<string> &s) {
    // For each choice
    if (v.size() == 0) {
        for (string s1 : s) {
            cout << s1 << " ";
        }
        cout << endl;
    } else {
        for (int i = 0; i < (int)v.size(); ++i) {
            // -choose
            string t = v[i];
            s.push_back(t);
            auto it = v.begin() + i;
            v.erase(it);
            // -explore
            permuteHelper(v, s);
            // -unchoose
            s.pop_back();
            v.insert(it, t);
        }
    }
}
