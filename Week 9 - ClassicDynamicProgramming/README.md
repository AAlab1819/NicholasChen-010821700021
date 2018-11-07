10130 - SuperSale (UVa)
========================

This is a fairly straightforward dynamic programming question. Here, we would logically approach using the KnapSack method, which in the context of the SuperSale problem, would be to determine the maximum values from the objects in which a person can acquire, corresponding to the maximum possible amount of weight the person can carry from the given objects. 

The Knapsack function will create a multidimensional array 'K' that would be built from bottoms-up.

The Knapsack function can be understood with three conditions. The first one would be to fill the arrays with '0' if either the item value or weight iterated is zero. The next condition would be to compare and check if the weight of the referenced item is lesser than the iterated weight from the loop in the Knapsack function. If so, then array 'K' will hold the maximum value between the comparison of either the current value + best value of the item, and the element of K with the previous index iteration of item. The third condition would occur if all else fails, rendering the current 'K' element to have the same value as 'K' element with the previous item iteration.

The value to be returned would be the best possible value at the best possible weight corresponding the the person's maximum weight he/she can carry.

Complexity would be **O(item x weight)** iterated.

[Problem](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1071)


Solution would be the file attached above.
