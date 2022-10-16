#include <iostream>
using namespace std;

int main () {
    int sum = 0, prod = 1;
    int num;
   // cout << "Enter a Number ?" << endl;
    cin >> num;
    int choice;
   // cout << "Do you want to compute the sum or product?" << endl;
    cin >> choice;

    if ( choice == 1 ) {
        for ( int i = 1; i <= num; i++) {
            sum += i;
        }
        cout << sum << endl;
    }
    else if( choice == 2 ) {
        for ( int i = 1; i <= num; i++) {
            prod = prod * i;
        }
        cout << prod << endl;
    }
    else {
        cout << -1 << endl;
    }
}
