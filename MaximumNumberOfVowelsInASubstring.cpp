#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    bool isVowel(char t)
    {
        char c = tolower(c);
        return t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u';
    }

public:
    int maxVowels(string s, int k)
    {
        int i = 0, j = 0, count = 0;
        int size = s.size();
        int ans = 0;
        int temp = 0;
        while (j < size)
        {
            if (isVowel(s[j]))
            {
                temp++;
            }
            if (j - i == k)
            {
                if (isVowel(s[i]))
                {
                    temp--;
                }
                i++;
            }
            ans = max(ans, temp);
            j++;
        }
        return ans;
    }
};
