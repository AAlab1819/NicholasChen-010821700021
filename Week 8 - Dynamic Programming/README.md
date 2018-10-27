433B - Kuriyama Mirai's Stones
==============================

This problem may look pretty simple to approach, but as they always say, looks can be deceiving. That particular phrase is very strong in this problem.

At first, we might start thinking of using a brute force approach of looping everything that comes to mind, the input, the sorted arrays, and of course, the output.

But here's the thing, with the contraints given in this problem, looping that many times would result in a **time limit exceeded** error. So in order to prevent that from happening, we must calculate the incrementing sums of each input, and store them in individual containers. I chose to name my containers stoneCost and stoneCostSorted, since there are two question types in this problem.

The output will be manipulated from those containers, hence there will be no need to loop in the output again (just a matter of subtracting).

For a more detailed breakdown, please see my solution below.


[Problem 433B](https://codeforces.com/problemset/problem/433/B)


[Solution](https://codeforces.com/contest/433/submission/44960527)
