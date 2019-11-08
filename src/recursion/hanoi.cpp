#include <iostream>
#include <string>
using namespace std;

void hanoi(int disks, int from, int to) {
    if (disks == 1) {
        cout << "move disk " << disks << " from peg " << from << " to peg " << to << endl;
    } else {
        hanoi(disks - 1, from, to - 1);
        cout << "move disk " << disks << " from peg " << from << " to peg " << to << endl;
        hanoi(disks - 1, to - 1, to);
    }
}

int main_hanoi() {
    hanoi(3, 1, 3);
    return 0;
}
