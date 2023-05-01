#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double average(vector<int> &salary)
    {
        double sum = 0;
        int mn = 1e9, mx = 0;
        for (int i = 0; i < salary.size(); i++)
        {
            mn = min(mn, salary[i]);
            mx = max(mx, salary[i]);
            sum += salary[i];
        }
        sum = sum - mn - mx;
        sum = sum / (salary.size() - 2);
        return sum;
    }
};
