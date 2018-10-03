#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int input;
    map <string, int> mapOfPasswords;
    string pass;
    cin >> input;
    for (int i=0; i<input; i++)
    {
        cin>>pass;
        if (mapOfPasswords.count(pass) == 1)
        {
            cout<<pass<<mapOfPasswords[pass]<<endl;
            mapOfPasswords[pass]++;
        }
        else
        {
            cout<<"OK"<<endl;
            mapOfPasswords[pass] = 1;
        }
    }




    return 0;
}
