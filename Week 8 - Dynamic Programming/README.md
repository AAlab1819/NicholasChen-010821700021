433B - Kuriyama Mirai's Stones
==============================

This problem may look pretty simple to approach, but as they always say, looks can be deceiving. That particular phrase is very strong in this problem.

At first, we might start thinking of using a brute force approach of looping everything that comes to mind, the input, the sorted arrays, and of course, the output.

But here's the thing, with the contraints given in this problem, looping that many times would result in a **time limit exceeded** error. So in order to prevent that from happening, we must calculate the incrementing sums of each input, and store them in individual containers. I chose to name my containers stoneCost and stoneCostSorted, since there are two question types in this problem.

The output will be manipulated from those containers, hence there will be no need to loop in the output again (just a matter of subtracting).

For a more detailed breakdown, please see my solution below.


[Problem 433B](https://codeforces.com/problemset/problem/433/B)


[Solution](https://codeforces.com/contest/433/submission/44960527)



Problem 913C - Party Lemonade
=============================

One of the more trickier problems I've come across. I approached the problem with a declaration of a vector with 32 elements (as for sure the constraint wouldn't surpass 32, including the conditionals inside the loop), all with '-1'. The rubles would be input and they would replace the '-1's with their individual values, and the corresponding '-1's with twice the amount of the previous elements (only if the previous numbers are not any larger than the follwing element, or if the subsequent element is -1)

Then the answer to be output will follow a bitshifting pattern, in which will correspond to why we chose to multiply by two each time in the beginning. The answer will be a summation of all the costs[i] whose bits are below or the same with the litre value, unless the loop comes across a value that **cost[i]** can be under the current answer sum, then answer will be replaced by current cost.

Complexity: *O(n)*

[Problem 913C](https://codeforces.com/contest/913/problem/C)


[Solution](https://codeforces.com/contest/913/submission/45156694)
