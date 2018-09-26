Problem 268B - Buttons
============

It was when I realized that this problem only had one input, that I knew it was only a matter of finding a pattern. And because there is a pattern, it means that the answers generated will only recurse from the pattern as many times as the **numberOfButtons**.

So take for an example, **numberOfButtons = 4**.

And for the worse case scenario, we will have to assume to combination for the lock is the last possible combination available, in this case: **4 3 2 1**.

So: 
1.  1
2.  2
3.  3
4.  4
5.  4 1
6.  4 
7.  4 2
8.  4
9.  4 3
10. 4 3 1
11. 4
12. 4 3
13. 4 3 2
14. 4 3 2 1

So if I try to create a pattern, it would be like so:
4 + 3 + (2 x 1) + 2 + (1 x 2) + 1

So the numbers in the brackets are simply the amount of presses needed to come back to the last position, in which he made a mistake.
If you look closely at **no. 5** above, you will notice that in order to get to *4 3*, the person would need to keep pressing 4 again, each time a mistake is made, because the question states that the buttons will reset everytime a mistake is made.

For a more detailed breakdown of what the numbers in the brackets mean:
**(*Number Of Mistakes made* x *Amount of Steps needed to return to the last correct position*)**

I hope you can understand what I'm trying to say.

[Problem 268B](https://codeforces.com/problemset/problem/268/B)

[Solution](https://codeforces.com/contest/268/submission/43410120)


Problem 598D - Igor in the Museum
=================================

This would qualify to be one of the hardest problems I've ever attempted to solve using C++. After a few attempts that resolved in TLE, I figured out a pretty interesting back-door method.

Rather than working from small to big, I tried working from big to small and that did it for me. 

I tried using **FloodFill** everytime the user would input Igor's position. That wasn't very effective, as it approached **Time Limit Exceeded** after a galactic amount of Igor positions. It was Flood Filling every possible Igor position, even when the positions were adjacent, which means that they're all within the same region. Adjacent positions will always have the **same amount of pictures found, no matter where Igor decides to start his traversal.**

Thus, the back-door solution is proposed. Why not, flood fill every possible region first, and flag the coordinates in which Igor can traverse within the same region with a common **regionCount**?

Visualised, it goes like this:

char museumMap[][]
* * * * *
* . . * *
* * * . *

region[][]
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0

*After traversal*

region[][]
0 0 0 0 0
0 1 1 0 0
0 0 0 2 0

So if there were two test cases identifying Igor's starting position of traversal at coordinates (2,2) and (2,3), rather than doing two seperate tests that would eventually produce the same amount of **paintingsFound**, by marking it first, it would be faster to access the answers to adjacent coordinates within the same region.

Please refer to the solution below for a more detailed breakdown of my code.

[Problem 598D](https://codeforces.com/contest/598/problem/D)

[Solution](https://codeforces.com/contest/598/submission/43451817)

