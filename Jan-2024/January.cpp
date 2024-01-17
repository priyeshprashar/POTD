#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int roman(char n)
    {
        int result;
        switch (n)
        {
        case 'I':
            result = 1;
            break;
        case 'V':
            result = 5;
            break;
        case 'X':
            result = 10;
            break;
        case 'L':
            result = 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        default:
            break;
        }
        return result;
    }
    int romanToInt(string s)
    {
        int sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (i + 1 < s.length())
            {
                int back = roman(s[i + 1]);
                if (roman(s[i]) >= back)
                {
                    sum += roman(s[i]);
                }
                else
                {
                    sum = sum + back - roman(s[i]);
                    i++;
                }
            }
            else
            {
                sum += roman(s[i]);
            }
        }
        return sum;
    }
};



int main(){
    Solution s = Solution();
    cout << s.romanToInt("MCMXCIV");
    return 0;
}
