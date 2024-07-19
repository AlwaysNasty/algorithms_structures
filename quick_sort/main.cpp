#include <bits/stdc++.h>

using namespace std;

vector<int> concat(vector<int> &a, vector<int> &b, int &pivot)
{
    vector<int> result{};
    for (auto &elem : a)
        result.push_back(elem);

    result.push_back(pivot);

    for (auto &elem : b)
        result.push_back(elem);

    return result;
}

vector<int> quicksort(vector<int> &arr)
{
    if (arr.size() < 2)
    {
        return arr;
    }
    else
    {
        int pivot = arr[0];
        arr.erase(arr.begin());

        vector<int> less_part{};
        vector<int> greater_part{};

        for (auto &elem : arr)
        {
            if (elem <= pivot)
                less_part.push_back(elem);
            else if (elem > pivot)
                greater_part.push_back(elem);
        }
        less_part = quicksort(less_part);
        greater_part = quicksort(greater_part);

        vector<int> result{};
        result = concat(less_part, greater_part, pivot);
        return result;
    }
}

int main()
{
    vector<int> my_arr{9, 8, 7, 6, 5, 4, 3, 2, 1};
    quicksort(my_arr);
    for (const auto &elem : my_arr)
        cout << elem;
    return 0;
}
