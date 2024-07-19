#include <iostream>
#include <utility>
#include <set>
#include <map>
#include <vector>
#include <iterator>

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //pair
    std::pair<int, char> letter;
    letter.first = 1;
    letter.second = 'a';
    std::cout << letter.first << " " << letter.second << "\n";

    //set
    std::set<int> s;
    s.insert(5);
    s.insert(7);
    std::cout << s.size() <<"\n\n";

    s.insert(3);
    s.insert(6);
    std::cout << s.count(3) << "\n\n";

    std::set<int>::iterator it1 = s.find(5);
    it1++;
    std::cout << "iterator is " << *it1 << "\n"; // выведет 7

    for (auto it = s.begin(); it != s.end(); it++)
        std::cout << *it << " ";
    std::cout << "\n";

    auto it2 = s.lower_bound(1);
    std::cout << *it2 << "\n";
    auto it3 = s.upper_bound(2);
    std::cout << *it3 << "\n";

    auto it4 = s.upper_bound(10);
    if (it4 == s.end())
        std::cout << "No element > 10\n"; // аккуратно, если разыменуете it4, получите undefined behaviour!
    //multiset
    std::multiset<int> nums;
    nums.insert(3);
    nums.insert(3);
    nums.insert(4);

    for (auto it = nums.begin(); it != nums.end(); it++)
        std::cout << *it << " ";
    std::cout << "\n\n";

    //map
    std::map<int, char> mp;
    mp.insert(std::make_pair(1, 'A'));
    mp.insert(std::make_pair(2, 'B'));
    std::cout << mp[1] << "\n";
    std::cout << mp[2] << "\n";

    std::map<std::string, int> b;
    b["Bob"]--;
    b["Alice"] += 2;
    b["Dan"] = 123;

    for (auto el : b)
        std::cout << el.first << " " << el.second << "\n";

    //iterator

    std::vector<int> a = {1, -2, 3, 100};

    std::vector<int>::iterator first_element = a.begin();
    std::cout << *first_element << "\n"; // выведет 1
    first_element++;
    std::cout << *first_element << "\n"; // выведет -2
    first_element--;
    std::cout << *first_element << "\n"; // выведет 1
    auto third_element = first_element + 2; // используем тип auto, чтобы не писать длинное имя типа
    std::cout << *third_element << "\n"; // выведет 3
    std::cout << (third_element - first_element) << "\n"; // выведет 2

    // вывод всех элементов вектора с использованием итераторов
    for (auto it = a.begin(); it != a.end(); it++)
        std::cout << *it << " ";
    std::cout << "\n"; // но для таких целей лучше использовать range-based for loop:

    for (auto& it : a)
        std::cout << it << " ";


    return 0;
}
