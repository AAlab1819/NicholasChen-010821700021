#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define loop(n) for(int i=0; i<n; i++)

typedef unsigned long long ull;

int main()
{
    ull numOfStones;
    ull query;
    ull questionType, l, r;
    ull sum = 0;
    cin >> numOfStones; //amount of stones
    ull cost;
    ull arrOfStonesSorted[numOfStones];
    ull stoneCost[numOfStones] = {0};
    ull stoneCostSorted[numOfStones] = {0};

    loop(numOfStones)
    {
        cin>>cost;  //stones, respectively
        sum+=cost;  //incrementing value of stones
        stoneCost[i] = sum; //put in unsorted container for questionType 1
        arrOfStonesSorted[i] = cost;    //to sort later
    }

    sort(arrOfStonesSorted, arrOfStonesSorted+numOfStones); //sort

    sum = 0;
    loop(numOfStones)
    {
        sum+=arrOfStonesSorted[i];
        stoneCostSorted[i] = sum;   //incrementing values of sorted stones stored here
    }

    cin >> query;

    loop(query)
    {

        cin >> questionType;
        if (questionType == 2)
        {
            cin >> l;
            cin >> r;
            if (l-2 == -1) cout << stoneCostSorted[r-1] << endl;    //if "l" is the first value in the container (index manipulation)
            else
            cout << stoneCostSorted[r-1] - stoneCostSorted[l-2] << endl;    //subtraction of the right-most bound and the sum
                                                                            //before the left-most bound
        }
        else
        {
            cin >> l;
            cin >> r;
            if (l-2 == -1) cout << stoneCost[r-1] <<endl;
            else
            cout << stoneCost[r-1] - stoneCost[l-2] << endl;
        }

    }

    return 0;
}
