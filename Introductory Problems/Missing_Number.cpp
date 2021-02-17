#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, rSum = 0, cSum = 0, no;
    vector<int> a;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        rSum += i;
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> no;
        a.push_back(no);
    }
    for (int i = 0; i < n - 1; i++)
    {
        cSum += a[i];
    }
    cout << rSum - cSum;
}