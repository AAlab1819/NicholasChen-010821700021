#include <iostream>

using namespace std;

int main() //This would be the best case scenario for the problem.
{
    int kDragon, lDragon, mDragon, nDragon, totalDragon;
    int dragonSuffered = 0;
    cin>>kDragon;
    cin>>lDragon;
    cin>>mDragon;
    cin>>nDragon;
    cin>>totalDragon;

    for (int i=1; i<=totalDragon; i++) //only one for loop used, O(n)
    {
        if (i%kDragon==0||i%lDragon==0||i%mDragon==0||i%nDragon==0) //if divisible by the x-th Dragon
        {
            dragonSuffered++; //dragonSuffered will increment
        }
    }

    cout<<dragonSuffered<<endl; //output how many dragons suffered

    return 0;
}
