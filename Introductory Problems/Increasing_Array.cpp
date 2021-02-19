#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    long long moves = 0, val;
    vector<int> a;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        a.push_back(val);
    }

    for (int i = 1; i < n; i++)
    {
        while (a[i] < a[i - 1])
        {
            a[i]++;
            moves++;
        }
    }
    cout << moves;
}