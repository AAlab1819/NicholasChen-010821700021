#include <iostream>

using namespace std;

int paintingsFound = 0;
int regionNumber = 0;
char museumMap[1000][1000];
int ansDatabase[1000000] = {0};
int region[1000][1000] = {0};
int maxRow, maxCol;

void floodfill(int row, int col)
{
    if(row < 0 || row >= maxRow || col < 0 || col >= maxCol) return;
    if(region[row][col] != 0) return; //this is to prevent re-traversal of "." position
    if(museumMap[row][col] == '*')
    {
        paintingsFound++;
        return;
    }
    region[row][col] = regionNumber; //region of "0" is set to corresponding regionNumber per traversal
    floodfill(row-1, col);
    floodfill(row+1, col);
    floodfill(row, col-1);
    floodfill(row, col+1);
    return;
}
int main()
{
    int igorPos, testRow, testCol;
    cin >> maxRow >> maxCol >> igorPos;
    for(int i = 0; i < maxRow; i++)
    {
        for(int j = 0; j < maxCol; j++)
        {
            cin >> museumMap[i][j]; //input Map symbols
        }
    }
    for(int i = 0; i < maxRow; i++)
    {
        for(int j = 0; j < maxCol; j++)
        {
            if(museumMap[i][j] == '.' && region[i][j] == 0) //if "." hasn't been traversed before
            {
                regionNumber++; //regionNumber increments, with every new region found
                paintingsFound = 0; //resets every time a new region is traversed
                floodfill(i,j);
                ansDatabase[regionNumber] = paintingsFound; //stores the paintings found within the region in ansDatabase
            }
        }
    }
    for(int i = 0; i < igorPos; i++)
    {
        cin >> testRow >> testCol;
        cout << ansDatabase[region[testRow-1][testCol-1]] << endl; //outputs the amount of paintings found per igor Position within the region.
    }
    return 0;
}
