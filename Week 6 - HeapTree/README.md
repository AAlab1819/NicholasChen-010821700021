Roy and Trending Topics
=======================

This problem may look simple at first sight, but it is actually quite the tricky problem.

For my solution, I resolved to using a **map** in which the key would be the z Score difference calculated from the running inputs, tied with an element of **vector<topics>**, in which **topics** in itself would be of a struct data type, comprising the topic ID, and the new z Score (both needed for the output later on).

After all the necesarry inputs are placed, the map would look something like this (based on the sample input):

map[100] = <1003, 1002, 1001, 999>
map[50]  = <1004, 1007>
map[-50] = <1005, 1006>

After the proper population of the map, next thing we need to do is to heapSort the elements of the corresponding keys in descending order, so that the first element will always be the largest topic ID.

After sorting, the map would look something like this:

map[100] = <1003, 1002, 1001, 999>
map[50]  = <1007, 1004>
map[-50] = <1006, 1005>

The output will go accordingly to the largest z Score difference through the mapped keys, and then it would print out the topic ID followed by its new Z Score value. 

For a more detailed explanation, please view my code attached above.



Find the Running Median
=======================

This implementation of HeapSort is a little easier than the one above. Since the median would be found when the input values are running, the output value will slowly change accordingly to the subsequent inputs. 

Pretty simple, after HeapSorting, just find the middle values of the heap by dividing the current (list size + 1) by 2 if it is odd, and if the size is an even number, then the two middle values would be divided again by 2. 

For the code, please view the attached file above.
