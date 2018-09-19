Problem 148A - Insomnia
=======================

The solution to this particular problem is fairly easy. I realized that providing a modulus for each and every dragon element solved the entire question at hand.

Best Case Scenario:
Ω(1)

Since my code only has one for loop and one IF condition inside it, if a single number were to pass through, the complexity would be O(1) as as there is no need to do sequential checks, and no neccessity to tap into nested loops.

Average Case Scenario:
θ(n)

If there were to be more than one element, then there will be a need to do a sequential check on all the elements, to see if they qualify to tap into the IF condition inside the for loop.

[Problem 148A] (https://codeforces.com/problemset/problem/148/A)

[Solution] (https://codeforces.com/contest/148/submission/42936274)


Problem 469A - I Wanna Be The Guy
=================================

At first I had two elements, X and Y, input the corresponding levels in which they traversed, then merged them into a single array, and then used HeapSort to sort the numbers in ascending fashion. Moving on, I had a *counter* variable to search if either anyone of them has the ability to pass through the level number. If so, then the *counter* variable would increment, resulting in either the possibility of "I wanna be the guy" or "Oh, my keyboard!".

Best Case Scenario:
Ω(n log(n))

Since my code has a HeapSort that has the general time complexity of Ω(n log(n)) and other control flows are purely un-nested loops, therefore the time complexity of HeapSort takes the cake.

Average Case Scenario:
θ(n log(n))

The same applies for average case scenario.

[Problem 469A] (https://codeforces.com/problemset/problem/469/A)

[Solution] (https://codeforces.com/contest/469/submission/42950446)


Problem 492B - Vanya and Lanterns
=================================

The solution to this problem would be to find the largest gap/distance in between either the starting point of the street to the street lamps, one street lamp to another, and the last street lamp to the end point of the street.

1. If the distance between the starting point of the street to the first street lamp is the largest, then the first street lamp's coordinate would be the minimum radius.
2. If the largest distance is between one particular street lamp to another, then the coordinates of both lamps would be added together, and then divided by 2, to produce the minimum radius needed.
3. If the largest distance is between the last street lamp and the end point of the street length, then the minimum radius would be the result of the street length subtracted by the coordinate of the last street lamp.

I used *cout.precision* for precise output measurement.

Best Case Scenario:
Ω(n log(n))

Since my code also has a HeapSort algorithm inside in which function heapSort has the complexity of O(n) and calls for the heapify function that costs (log(n)), the entire time complexity of the code is as per mentioned above, as my other control flows are marked by un-nested loops and conditionals.

Average Case Scenario:
θ(n log(n))

The same applies for average case scenario.

[Problem 492B] (https://codeforces.com/problemset/problem/492/B)

[Solution] (https://codeforces.com/contest/492/submission/42955370)


