601A - The Two Routes
=====================

Since at any given time, if there is either a path (road or railway) leading to town *n* from town **1**, we only need to find the minimum amount of transits(length) of the latter path.

Using the Breadth First Search Algorithm, this problem can be directly solved, since the edges of the vertexes aren't **weighted**. 

The complexity of this problem is:
*O(n^2)*

[Problem Link 601A](http://codeforces.com/problemset/problem/601/A)
[Solution](http://codeforces.com/contest/601/submission/45709150)


20C - Djikstra
==============

The problem states a very simple question - which is to find the shortest path possible from vertex 1 to vertex N, but with a catch- the shortest path will not be determined by the shortest **link** of the vertexes, rather, determined by the least amount of weight required from vertex 1 to N.

A visual representation will be like such:

````
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1

Source	Destination Weight
  1  ->     2       (2)
  2  ->     5       (5)
  2  ->     3       (4)
  1  ->     4       (1)
  4  ->     3       (3)
  3  ->     5       (1)

````
We would assume the shortest path to be 1->2->5 at first sight, but it is false as the weight added would be **2+5=7**. Since the question asks for the least amount of weight possible with the shortest path available, the answer should be 1->4->3->5. that would add up to 5 (1+3+1).

The complexity for this question would be:
*O(n log(n))*

[Problem Link 20C](http://codeforces.com/contest/20/problem/C)

[Solution](http://codeforces.com/contest/20/submission/45709400)



