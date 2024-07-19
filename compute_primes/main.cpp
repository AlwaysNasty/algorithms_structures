#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char **argv)
{
    int n;
    cin >> n;

    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i <= n; ++i)
        if (prime[i])
            if (i * 1ll * i <= n)
                for (int j = i * i; j <= n; j += i)
                    prime[j] = false;

    for (int i = 0; i <= n; i++)
        std::cout << i << " " << prime[i] << "\n";

    return 0;
}