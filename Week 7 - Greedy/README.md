946A - Partition
=================

The greedy solution for this question is pretty straightforward, only one for loop is needed as we have to input a sequence of integers. After inputting the corresponding integer, a conditional statement will then check to see if it is a positive integer or a negative one, and then individually sum them together.

The output will be the added result from both the sum of the positive integers and the negative integers.

*Complexity = O(n)*

[Problem 946A - Partitions](http://codeforces.com/contest/946/problem/A)

[Solution](http://codeforces.com/contest/946/submission/44487701)



978B - File Name
================

Another straightforward greedy problem. How I chose to solve it was pretty forthright, there is a specific **counter** variable to count the amount of consecutive *x's* found in the string. **counter** will reset everytime it meets a subsequent character that is not of *'x'*. variable **toDelete** will increment with every loop, if **counter** is above or equal to 3.

The output will be variable **toDelete**.

*Complexity = O(n)*

[Problem 978B](http://codeforces.com/contest/978/problem/B)

[Solution](http://codeforces.com/contest/978/submission/44487836)



Problem 731B - Coupons and Discounts
====================================

This one needed a little bit of strategic thinking. I had a while within the for loop for the input, that functions to decrement the current input of team members for the *i-th* day by 2 (this is needed for the discount). 

After which, if the decrement were to result in 0, then it will just proceed to loop another new input. If it resulted in -1 instead, then there is a bool variable I named **flag** that will remember to deduct the next team's input by 1 (this is needed for one free pizza for every 2 consecutive days of one member eating, respectively).

If all else fails, the output will be NO. If not and it proceeds well, then the output will show YES.

*Complexity = O(n^2)*

[Problem 731B](http://codeforces.com/contest/731/problem/B)

[Solution](http://codeforces.com/contest/731/submission/44488151)

