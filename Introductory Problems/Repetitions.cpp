#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int rCount = 0, tCount = 0;
    cin >> s;
    for (int i = 1; s[i] != '\0'; i++)
    {
        if (s[i] == s[i - 1])
        {
            ++tCount;
        }
        else
        {
            tCount = 0;
        }
        if (tCount > rCount)
        {
            rCount = tCount;
        }
    }
    cout << rCount + 1; // Adding 1 because i am starting from 2 element so while repeated elements are read 1 less element occur
}