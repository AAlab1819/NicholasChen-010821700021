#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input, sum = 0;
    int posSum = 0, negSum = 0;
    cin >> input;
    int arr[input];
    for (int i=0; i<input; i++)
    {
        cin>>arr[i];
        if (arr[i]>=0)
        {
            posSum+=arr[i]; //to sum the positive integers
        }
        else
        {
            negSum-=arr[i]; //to sum the negative integers as well (in positive form)
        }
    }

    cout<<posSum+negSum<<endl;
    return 0;
}
