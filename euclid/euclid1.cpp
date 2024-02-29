#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    int64_t a, b;
    cin >> a >> b;

    while (a != 0 && b != 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    cout << (a + b) << "\n";

    return 0;
}