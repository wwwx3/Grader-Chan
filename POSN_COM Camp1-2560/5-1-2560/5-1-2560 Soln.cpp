#include <iostream>
using namespace std;

int MONTHS[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
    int m, d;
    if (!(cin >> m >> d)) return 0;

    // Normalize d to 0..6 where 0 = Sunday
    d = (d+11)%7;

    // Move month-by-month to reach August (8)
    while (m < 8) {
        d = (d + (MONTHS[m-1] % 7)) % 7;
        m++;
    }
    while (m > 8) {
        d = (d - (MONTHS[m-2] % 7)) % 7;
        if (d < 0) d += 7;
        m--;
    }

    cout << d << '\n';
    return 0;
}
