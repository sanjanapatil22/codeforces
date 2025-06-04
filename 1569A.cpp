// 1569A - Balanced Substring

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        int found = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if ((s[i] == 'a' && s[i + 1] == 'b') || (s[i] == 'b' && s[i + 1] == 'a'))
            {
                cout << i + 1 << " " << i + 2 << "\n";
                found = 1;
                break;
            }
        }
        if (!found)
        {
            cout << -1 << " " << -1 << "\n";
        }
    }
}

int main()
{
    solve();
}
