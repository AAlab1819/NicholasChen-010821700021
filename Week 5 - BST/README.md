Problem 115A - Party
====================

To solve this problem, we would need to divide the employees into groups where there wouldn't be any immediate bosses or superiors of each employee. For this fair play, the simplest approach to this solution is if we were to structure the employee standings in a binary tree fashion, and then look at the minimum amount of groups needed from the depth traversal of the farthest "row" in the binary tree.

To further understand the code, please look it up in the solution below:

[Problem 115A](http://codeforces.com/contest/115/problem/A)

[Solution](http://codeforces.com/contest/115/submission/43741781)


Problem 913B - Christmas Spruce
===============================

The problem is fairly simple actually. The input would be of numbers indicating the number of the parent, of the current vertex position. Then our job is to trace if the entire tree structure (in which I decided to approach using a map of indexes as the key, along with a vector of <int> as the element to follow) and see if it meets the required condition (every parent must have at least 3 leafs) to be called a spruce or not.

[Problem 913B](http://codeforces.com/contest/913/problem/B)

[Solution](http://codeforces.com/contest/913/submission/43741642)

Problem 4C - Registration System
================================

For this problem, I approached it using **map**.

Very simple approach actually. You simply input a password, in which using the **count** function in the **map** library, we would be able to see if the password is a repeat one or not. Then simply output the password itself and the mapped number alongside it if any. The mapped number will increment in case of future events with more repeat passwords.

If the password isn't a repeat, the output would be "OK", but still the default number "**1**" would be mapped into the password.
Complexity: (n log n) *as it is *map**

[Problem 4C](http://codeforces.com/contest/4/problem/C)

[Solution](http://codeforces.com/contest/4/submission/43741744)
