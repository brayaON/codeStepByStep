#include <iostream>
#include <vector>
using namespace std;

int binarySearch(string key, vector<string>& b, int p1, int p2);

int findInSortedVector(string key, vector<string> & vec) {
    return binarySearch(key, vec, 0, vec.size() - 1);
}

int binarySearch(string key, vector<string> & vec, int p1, int p2) {
    if (p1 > p2) return -1;
    int mid = (p1 + p2) / 2;
    if (key == vec[mid]) return mid;
    if (key < vec[mid]) {
        return binarySearch(key, vec, p1, mid - 1);
    } else {
        return binarySearch(key, vec, mid + 1, p2);
    }
}
