int kmp(string s)
{
    vector<int> lps(s.size(), 0);

    // Traverse the string
    for (int i = 1; i < s.size(); i++)
    {

        int previous_index = lps[i - 1];

        while (previous_index > 0 && s[i] != s[previous_index])
        {

            previous_index = lps[previous_index - 1];
        }

        // Update the lps size
        lps[i] = previous_index + (s[i] == s[previous_index] ? 1 : 0);
    }

    // Returns size of lps
    return lps[lps.size() - 1];
}
int longest_prefix_palindrome(string s)
{
    string temp = s + "?";
    reverse(s.begin(), s.end());
    temp += s;
    return kmp(temp);
}