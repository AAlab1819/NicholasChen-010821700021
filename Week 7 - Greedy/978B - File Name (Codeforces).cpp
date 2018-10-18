#include <iostream>

using namespace std;

int main()
{
    int length;
    int counter = 0, toDelete = 0;

    string s;
    cin >> length; //kind of redundant
    cin >> s;

    for (int i=0; i<s.size(); i++)
    {

        if (s[i] == 'x')
        {
            counter++; //counter increments every time a 'x' is found in the string
        }
        else
        {
            counter = 0; //counter resets if subsequent character is not 'x'
        }
        if (counter>=3)
        {
            toDelete++; //toDelete increments based on counter >= 3
        }
    }
    cout<<toDelete<<endl;

    return 0;
}
