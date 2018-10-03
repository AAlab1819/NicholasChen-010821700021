#include <iostream>
using namespace std;


int main()
{
    int employee, currentDepth, check, group = 0;
    cin>>employee;
    int immediateBosses[employee];
    for (int i=1; i<=employee; i++)
    {
        cin>>immediateBosses[i];
    }

    for (int i=1; i<=employee; i++)
    {
        currentDepth = 1;
        check = immediateBosses[i];
        while (check!=-1)
        {
            currentDepth++;
            check = immediateBosses[check];
        }
        group = max(currentDepth, group);
    }

    cout<<group<<endl;

}
