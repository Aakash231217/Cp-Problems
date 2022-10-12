// Problem Description
/* You are given a sequence a=[a1,a2,…,an] consisting of n positive integers.

Let's call a group of consecutive elements a segment. Each segment is characterized by two indices: the index of its left end and the index of its right end. Denote by a[l,r] a segment of the sequence a with the left end in l and the right end in r, i.e. a[l,r]=[al,al+1,…,ar].

For example, if a=[31,4,15,92,6,5], then a[2,5]=[4,15,92,6], a[5,5]=[6], a[1,6]=[31,4,15,92,6,5] are segments.

We split the given sequence a into segments so that:

each element is in exactly one segment;
the sums of elements for all segments are equal.
Let's define thickness of split as the length of the longest segment. 
Find the minimum thickness among all possible splits of the given sequence of a into segments in the required way.
*/

#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define endl '\n'

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vi arr(n);
        for (auto &it : arr)
            cin >> it;

        int sum = 0;
        vi pref(n);
        partial_sum(begin(arr), end(arr), begin(pref));
        int res = n, p = 0;
        for (int i = 0; i < n; i++)
        {
            p += arr[i];
            int q = 0, ans = i + 1, prev = i;
            bool fg = true;
            for (int j = i + 1; j < n; j++)
            {
                q += arr[j];
                if (q > p)
                {
                    fg = false;
                    break;
                }
                else if (q == p)
                {
                    fg = true;
                    ans = max(ans, j - prev);
                    prev = j;
                    q = 0;
                }
            }
            if (fg)
            {
                if (prev != n - 1)
                    continue;
                res = min(res, ans);
            }
        }
        cout << res << endl;
    }
    return 0;
}
