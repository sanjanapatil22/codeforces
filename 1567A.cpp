// 1567A - Domino Disaster
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        for (char c : s)
        {
            if (c == 'L')
            {
                cout << 'L';
            }
            else if (c == 'R')
            {
                cout << 'R';
            }
            else if (c == 'U')
            {
                cout << 'D';
            }
            else
            {
                cout << 'U';
            }
        }
        cout << '\n';
    }
}
int main()
{
    solve();
}
