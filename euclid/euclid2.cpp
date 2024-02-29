#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    int64_t a, b;
    cin >> a >> b;

    while (b)
    {
        a %= b;
        swap(a, b);
    }
    cout << (a + b) << "\n";

    return 0;
}