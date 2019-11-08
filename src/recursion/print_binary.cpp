#include <iostream>
using namespace std;

void printBinary(int n) {
   if (n == 0 || n == 1) {
       cout << n;
   } else if( n < 0) {
        cout << "-";
        printBinary(-n);
   }
   else {
       int aux = 0;
       int l = n % 2;
       n = n / 2;
       printBinary(n);
       aux = aux * 10 + l;
       cout << aux;
   }
}

int main_print_binary() {
    int n = 387;
    printBinary(n);
    cout << endl;
    return 0;
}
