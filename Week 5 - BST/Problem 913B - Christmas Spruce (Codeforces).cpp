#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int vertex, parent, leafs;
    bool isSpruce = true;
    cin >> vertex;
    map <int, vector <int> > tree;


    for(int i = 2; i <= vertex; i++)
    {
        cin >> parent;
        tree[parent].push_back(i);
    }
    for(int i = 1; i <= vertex; i++)
    {
        if(tree[i].size() == 0)
        {
            continue;
        }
        else {
            leafs = 0;

            for(int j = 0 ; j < tree[i].size(); j++)
            {
                if(tree[tree[i][j]].size() == 0)
                {
                    leafs++;
                }
            }

            if(leafs<3)
            {
               isSpruce = false;
            }

        }
    }

    if(isSpruce)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
