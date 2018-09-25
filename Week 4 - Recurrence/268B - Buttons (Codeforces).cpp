#include <iostream>

using namespace std;

int main()
{
    int numberOfButtons, sum = 0; //variable declarations
    cin>>numberOfButtons;
    for (int i=0; i<numberOfButtons; i++) //for loop per sequence
    {
        sum=sum+(numberOfButtons-i)+((numberOfButtons-i-1)*i); //a pattern I found
    }
    cout<<sum<<endl;
    return 0;
}
