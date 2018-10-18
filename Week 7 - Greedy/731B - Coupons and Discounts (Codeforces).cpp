#include <iostream>

using namespace std;

int main()
{
    int n;
    bool flag = true;
    cin >> n;
    int teams[n];

    for (int i=0; i<n; i++)
    {
        cin>>teams[i];
        if (flag == false) //this is needed for one free pizza every 2 consecutive days
        {
            teams[i] = teams[i] - 1;
            if (teams[i]>=0)
            {
                flag = true; //if still above or equal to 0, then will go to while statement
            }
            else
            {
                break;
            }
        }
        while (teams[i]>0) //will decrement by 2 until teams[i] reaches 0 or -1 (for discount)
        {
            teams[i] = teams[i] - 2;
            if(teams[i] == -1) //this will allow the next element to tap into (flag == false) conditional
            {
                flag = false;
            }
        }
    }

    if (flag == true)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}
