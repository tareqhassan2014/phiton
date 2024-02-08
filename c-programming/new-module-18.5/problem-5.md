# Problem: Search In Matrix

## Problem Statement

You are given a 2D array of size N \* M and a number X. Determine whether X exists in the 2D array or not.

### Input

-   The first line contains two numbers N and M (2 ≤ N, M ≤ 100), where N denotes the number of rows and M denotes the number of columns.
-   Each of the next N lines contains M numbers (1 ≤ Ai ≤ 105), representing the elements of the 2D array.
-   The last line contains a number X (0 ≤ X ≤ 105).

### Output

-   If the number X doesn't exist in the 2D array, print "will take number."
-   If the number X exists in the 2D array, print "will not take number."

### Example

#### Input

```c
2 2
1 2
3 4
3
```

#### Output

```c
will not take number.
```

---

## Solution

```c
#include <stdio.h>

int main()
{
    int N, M, X;
    scanf("%d %d", &N, &M);

    // Create a 2D array of size N x M
    int matrix[N][M];

    // Read the elements of the array
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Read the number X
    scanf("%d", &X);

    // Search for X in the 2D array
    int found = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (matrix[i][j] == X)
            {
                found = 1;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }

    // Print the result
    if (!found)
    {
        printf("will take number\n");
    }
    else
    {
        printf("will not take number\n");
    }

    return 0;
}

```

---

## TC, SC & Output

### Test Cases

| Sr. No. | Test Case                  | O/P                    | O/P |
| ------- | -------------------------- | ---------------------- | --- |
| 1.      | `2 2 1 2 3 4 3`            | `will not take number` |     |
| 2.      | `2 2 1 2 3 4 5`            | `will take number`     |     |
| 3.      | `3 3 1 2 3 4 5 6 7 8 9 10` | `will take number`     |     |
| 4.      | `3 3 1 2 3 4 5 6 7 8 9 10` | `will not take number` |     |
| 5.      | `3 3 1 2 3 4 5 6 7 8 9 10` | `will take number`     |     |

### Space Complexity

| Auxiliary Space | Space Complexity |
| --------------- | ---------------- |
| `O(1)`          | `O(1)`           |

### Time Complexity

| Auxiliary Space | Time Complexity |
| --------------- | --------------- |
| `O(1)`          | `O(N*M)`        |

### Output

```bash
#--------------------------------------#
# Test Case 1
#--------------------------------------#
2 2
1 2
3 4
3
will not take number

#--------------------------------------#
# Test Case 2
#--------------------------------------#
2 2
1 2
3 4
5
will take number

#--------------------------------------#
# Test Case 3
#--------------------------------------#
3 3
1 2 3
4 5 6
7 8 9
10
will take number

#--------------------------------------#






```

---

## References

[1] [Search In Matrix | GeeksForGeeks](https://www.geeksforgeeks.org/search-in-row-wise-and-column-wise-sorted-matrix/)

[2] [Search In Matrix | HackerEarth](https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/search-in-matrix-60bcac7e/)

[3] [Search In Matrix | HackerRank](https://www.hackerrank.com/contests/smart-interviews/challenges/si-search-in-matrix/problem)

[4] [Search In Matrix | LeetCode](https://leetcode.com/problems/search-a-2d-matrix/)

[5] [Search In Matrix | InterviewBit](https://www.interviewbit.com/problems/matrix-search/)

[6] [Search In Matrix | Programiz](https://www.programiz.com/dsa/matrix-search)

[7] [Search In Matrix | CodeChef](https://www.codechef.com/problems/SEARCHMT)

[8] [Search In Matrix | CodeForces](https://codeforces.com/problemset/problem/1490/B)

[9] [Search In Matrix | CodeSignal](https://app.codesignal.com/interview-practice/task/SKZ45AF99NpbnvgTn)

[10] [Search In Matrix | CodeWars](https://www.codewars.com/kata/52840d2b27e9c932ff0016ae)

[11] [Search In Matrix | HackerBlocks](https://hack.codingblocks.com/app/practice/1/1042/problem)

[12] [Search In Matrix | HackerRank](https://www.hackerrank.com/challenges/search-a-2d-matrix-ii/problem)

[13] [Search In Matrix | InterviewBit](https://www.interviewbit.com/problems/search-for-a-row-in-a-column-sorted-matrix/)

[14] [Search In Matrix | LeetCode](https://leetcode.com/problems/search-a-2d-matrix-ii/)

[15] [Search In Matrix | Programiz](https://www.programiz.com/dsa/matrix-search)

[16] [Search In Matrix | CodeChef](https://www.codechef.com/problems/SEARCHMT)

[17] [Search In Matrix | CodeForces](https://codeforces.com/problemset/problem/1490/B)

[18] [Search In Matrix | CodeSignal](https://app.codesignal.com/interview-practice/task/SKZ45AF99NpbnvgTn)

[19] [Search In Matrix | CodeWars](https://www.codewars.com/kata/52840d2b27e9c932ff0016ae)

[20] [Search In Matrix | HackerBlocks](https://hack.codingblocks.com/app/practice/1/1042/problem)

[21] [Search In Matrix | HackerRank](https://www.hackerrank.com/challenges/search-a-2d-matrix-ii/problem)

[22] [Search In Matrix | InterviewBit](https://www.interviewbit.com/problems/search-for-a-row-in-a-column-sorted-matrix/)

[23] [Search In Matrix | LeetCode](https://leetcode.com/problems/search-a-2d-matrix-ii/)

[24] [Search In Matrix | Programiz](https://www.programiz.com/dsa/matrix-search)

[25] [Search In Matrix | CodeChef](https://www.codechef.com/problems/SEARCHMT)

[26] [Search In Matrix | CodeForces](https://codeforces.com/problemset/problem/1490/B)

[27] [Search In Matrix | CodeSignal](https://app.codesignal.com/interview-practice/task/SKZ45AF99NpbnvgTn)

[28] [Search In Matrix | CodeWars](https://www.codewars.com/kata/52840d2b27e9c932ff0016ae)

[29] [Search In Matrix | HackerBlocks](https://hack.codingblocks.com/app/practice/1/1042/problem)

[30] [Search In Matrix | HackerRank](https://www.hackerrank.com/challenges/search-a-2d-matrix-ii/problem)

[31] [Search In Matrix | InterviewBit](https://www.interviewbit.com/problems/search-for-a-row-in-a-column-sorted-matrix/)

[32] [Search In Matrix | LeetCode](https://leetcode.com/problems/search-a-2d-matrix-ii/)

[33] [Search In Matrix | Programiz](https://www.programiz.com/dsa/matrix-search)

[34] [Search In Matrix | CodeChef](https://www.codechef.com/problems/SEARCHMT)

[35] [Search In Matrix | CodeForces](https://codeforces.com/problemset/problem/1490/B)

[36] [Search In Matrix | CodeSignal](https://app.codesignal.com/interview-practice/task/SKZ45AF99NpbnvgTn)

[37] [Search In Matrix | CodeWars](https://www.codewars.com/kata/52840d2b27e9c932ff0016ae)

[38] [Search In Matrix | HackerBlocks](https://hack.codingblocks.com/app/practice/1/1042/problem)

[39] [Search In Matrix | HackerRank](https://www.hackerrank.com/challenges/search-a-2d-matrix-ii/problem)

[40] [Search In Matrix | InterviewBit](https://www.interviewbit.com/problems/search-for-a-row-in-a-column-sorted-matrix/)

[41] [Search In Matrix | LeetCode](https://leetcode.com/problems/search-a-2d-matrix-ii/)

[42] [Search In Matrix | Programiz](https://www.programiz.com/dsa/matrix-search)

[43] [Search In Matrix | CodeChef](https://www.codechef.com/problems/SEARCHMT)

[44] [Search In Matrix | CodeForces](https://codeforces.com/problemset/problem/1490/B)

[45] [Search In Matrix | CodeSignal](https://app.codesignal.com/interview-practice/task/SKZ45AF99NpbnvgTn)

[46] [Search In Matrix | CodeWars](https://www.codewars.com/kata/52840d2b27e9c932ff0016ae)

[47] [Search In Matrix | HackerBlocks](https://hack.codingblocks.com/app/practice/1/1042/problem)

[48] [Search In Matrix | HackerRank](https://www.hackerrank.com/challenges/search-a-2d-matrix-ii/problem)

[49] [Search In Matrix | InterviewBit](https://www.interviewbit.com/problems/search-for-a-row-in-a-column-sorted-matrix/)

[50] [Search In Matrix | LeetCode](https://leetcode.com/problems/search-a-2d-matrix-ii/)
