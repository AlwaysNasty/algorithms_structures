#include <bits/stdc++.h>

#define ll long long
#define vi std::vector<int>

#define coutvec                   \
    for (auto elem : v)           \
        std::cout << elem << " "; \
    std::cout << "\n";


int main(int argc, char const *argv[])
{
    vi v{9, 8, 7, 6, 5, 4, 3, 2, 1};
    int s = std::size(v);
    v[0] >= v[s - 1] ? std::sort(v.begin(), v.end()) : v.push_back(100);

    coutvec;

    int n;
    std::cin >> n;

    n >= 5 ? std::cout << "n bigger then 5" : std::cout << "n less then 5";
    return 0;
}
