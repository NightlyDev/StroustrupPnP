#include "../../std_lib_facilities.h"
int main() {    // simple program to exercise operators
    double n;
    cin >> n;
    cout << "n == " << n
        << "\nn+1 == " << n+1
        << "\ntwice n == " << n + n
        << "\nthree times n == " << 3 * n
        << "\nn squared == " << n * n
        << "\nhalf of n == " << n / 2
        << "\nsquare root of n == " << sqrt(n)
        << "\n"
        << "\nnow reading an int instead of a double (k):\n";
    int k;
    cin >> k;
    cout << "k == " << k
        << "\nk+1 == " << k+1
        << "\ntwice k == " << k + k
        << "\nthree times k == " << 3 * k
        << "\nk squared == " << k * k
        << "\nhalf of k == " << k / 2   // this returns an int!
        << "\nsquare root of k == " << sqrt(k) // this returns a double!
        << "\n";
}