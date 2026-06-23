#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string ans[n];
    string ans1[n];
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ans[i] = s;
    }
    for (int i = 0; i < n; i++)
    {
        string s = ans[i];
        if (s.length() <= 10)
            cout << s << endl;
        else
        {
            ans1[i] = ans1[i] + s[0] + to_string(s.length() - 2) + s[s.length() - 1];
            cout << ans1[i] << endl;
        }
    }

    return 0;
}