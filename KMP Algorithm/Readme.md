# Knuth-Morris-Pratt (KMP) algorithm 

The Knuth-Morris-Pratt (KMP) algorithm is an algorithm that is used to search for a substring (W), in a given string (S), in O(m+n)O(m+n) time (where mm and nn are the lengths of W and S).

The KMP matching algorithm uses degenerating property (pattern having same sub-patterns appearing more than once in the pattern) of the pattern and improves the worst case complexity to O(n). The basic idea behind KMP’s algorithm is: whenever we detect a mismatch (after some matches), we already know some of the characters in the text of the next window. We take advantage of this information to avoid matching the characters that we know will anyway match.

Contributed by [Dhrubajyoti Chakraborty](https://www.github.com/dhrubajyoti89)
