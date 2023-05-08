#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int sum = 0;
        int n = mat.size();
        for (int i = 0; i < mat.size(); i++)
        {
            sum += mat[i][i];
        }
        for (int i = 0; i < mat.size(); i++)
        {
            if (i != n - 1 - i)
                sum += mat[i][n - 1 - i];
        }
        return sum;
    }
};