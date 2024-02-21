
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main()
{
    float x, a, s, eps = 0.0001;
    int k;
    cin >> x;
    s = 0; a = x; k = 1;
    while (fabs(a) >= eps)
    {
        cout << setw(2) << k << setprecision(8) << setw(15) << a << setprecision(8) << setw(12) << s << endl;
        a -= 1;
    }

}
