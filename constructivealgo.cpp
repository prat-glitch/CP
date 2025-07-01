#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
string construct_palindrome(const string &s)
{
    unordered_map<char, int> count;
    for (char c : s)
    {
        count[c]++;
    }

    int odd_count = 0;
    char odd_char = '\0';
    for (const auto &entry : count)
    {
        if (entry.second % 2 != 0)
        {
            odd_count++;
            odd_char = entry.first;
        }
        if (odd_count > 1)
        {
            return "Not possible";
        }
    }

    string first_half = "";
    for (const auto &entry : count)
    {
        first_half += string(entry.second / 2, entry.first);
    }
    string second_half = first_half;
    reverse(second_half.begin(), second_half.end());

    return (odd_count == 1) ? (first_half + odd_char + second_half) : (first_half + second_half);
}
int main()
{
    string s = "aabb";
    string result = construct_palindrome(s);
    cout << result << endl; // Output: "abba" or "baab"
    return 0;
}