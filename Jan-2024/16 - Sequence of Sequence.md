## Problem Statement:
Given two integers m and n, find the total number of special sequences of length n such that seq[i+1] >= 2*seq[i], seq[i] > 0, and seq[i] <= m: [Problem Link](https://www.geeksforgeeks.org/problems/sequence-of-sequence1155/1)


## Approach:
In this problem due to smaller constraints , we can only use a recursive solution

- Base Cases:

  - If "m < n", there are no valid sequences, so return 0.
  - If n is 0 "n==0", there is one valid sequence (empty sequence), so return 1.

- Recursive Calls:

  - Calculate t by calling solve(n-1, m/2). This represents the count of sequences where the next element is at least half of the current element.
  - Calculate nt by calling solve(n, m-1). This represents the count of sequences where the next element is one less than the current element.
- Return Result:

  - Return the sum of t and nt as the result.

 ## Code (c++)
 '''cpp
 
class Solution {

public:

    int solve(int n, int m) {
    
        if (m < n)
            return 0;
        if (n == 0)
            return 1;

        int t = solve(n - 1, m / 2);
        int nt = solve(n, m - 1);

        return t + nt;
    }

    int numberSequence(int m, int n) {
        return solve(n, m);
    }
};

'''
## Thank You
Thank you for checking out MyProject! 🚀

If you find this project helpful or interesting, consider giving it a ⭐star. Your support means a lot and helps others discover the project.

### Why Give a Star?

- It encourages continuous development and improvements.
- It helps others find this solution more easily.
- Your feedback and suggestions are always welcome!

### How to Give a Star

If you'd like to give a ⭐star, you can do so by clicking the ⭐star icon at the top right of the project page.

I appreciate your time and support! 🙌
