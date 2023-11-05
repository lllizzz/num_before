#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> numbers;
    int num;
    while (cin >> num)
    {
        if (numbers.contains(num))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        numbers.insert(num);
    }
}