#include <bits/stdc++.h>

int binary_search(std::vector<int> arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int guess = arr[mid];

        if (guess == target)
            return mid;

        if (guess > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    std::vector<int> my_list{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << binary_search(my_list, 3);

    return 0;
}
