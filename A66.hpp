//

#include <iomanip>
#include <iostream>
using namespace std;

// complete the function maxmin()
int maxmin(int a, int b, int c, int &d, int &e) {
    int N[3] = {a, b, c}, max1, min1;
    d = N[0];
    e = N[0];
    max1 = N[0];
    min1 = N[0];
    for (int i = 0; i < 3; i++) {
        if (N[i] < min1) {
        e = N[i];
        }
        if (N[i] > max1) {
        d = N[i];
        }
    }
    return 0;
}