// Hacktoberfest2020 Contribution by Dhrubajyoti Chakraborty
// KMP Algorithm Implementation

void preKMP(string pattern, int f[])
{
    int m = pattern.length(), k; // counts the length of the pattern
    f[0] = -1;
    for (int i = 1; i < m; i++)
    {
        k = f[i - 1];
        while (k >= 0)
        {
            if (pattern[k] == pattern[i - 1])
                break;
            else
                k = f[k];
        }
        f[i] = k + 1;
    }
}
 
// function to check whether target string contains pattern 
bool KMP(string pattern, string target)
{
    int m = pattern.length(); 
    int n = target.length(); // counts the length of the target string for comparison
    int f[m];     
    preKMP(pattern, f);     
    int i = 0;
    int k = 0;        
    while (i < n)
    {
        if (k == -1)
        {
            i++;
            k = 0;
        }
        else if (target[i] == pattern[k])
        {
            i++;
            k++;
            if (k == m)
                return 1;
        }
        else
            k = f[k];
    }
    return 0;
}
