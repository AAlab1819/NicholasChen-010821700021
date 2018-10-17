#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;

struct topic{
    long long int id;
    long long int zNew;
};

void heapify(vector<topic> &myVector, long long int n, long long int i)
{
    int smallest = i; // Initialize smalles as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is smaller than root
    if (l < n && myVector[l].id < myVector[smallest].id)
        smallest = l;

    // If right child is smaller than smallest so far
    if (r < n && myVector[r].id < myVector[smallest].id)
        smallest = r;

    // If smallest is not root
    if (smallest != i) {
        swap(myVector[i], myVector[smallest]);

        // Recursively heapify the affected sub-tree
        heapify(myVector, n, smallest);
    }
}

// main function to do heap sort
void heapSort(vector<topic> &myVector, long long int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(myVector, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(myVector[0], myVector[i]);

        // call max heapify on the reduced heap
        heapify(myVector, i, 0);
    }
}
int main()
{
    long long int testCase, topicId, oldZScore, posts, like, comment, share, newZScore;
    map<int, vector<topic>>myMap; //map of zScore difference and vector of Topics
    topic Topic;
    cin>>testCase;
    while (testCase--)
    {
        cin>> topicId >> oldZScore >> posts >> like >> comment >> share;

        posts = posts * 50LL;
        like = like * 5LL;
        comment = comment * 10LL;
        share = share * 20LL; //LL is for big numbers, essential if dealing with really large numbers
        newZScore = posts + like + comment + share;

        Topic.id = topicId; //fill this with topic ID
        Topic.zNew = newZScore; //fill this with newZScore

        myMap[newZScore - oldZScore].push_back(Topic); //zScore difference will be the key, and the element will be Topic data type pushed to Vector
    }

    map<int, vector<topic>>::iterator it;

    for (it = myMap.begin(); it != myMap.end(); it++)
    {
        heapSort(it->second, it->second.size());    //vector elements are sorted in descending order
    }

    cout<<endl;

    int counter = 1;
    for (it = myMap.end(); it!= myMap.begin(); it--)
    {
        for (int i=0; i<it->second.size(); i++)
        {
            cout<<it->second[i].id<<" "<<it->second[i].zNew<<endl;  //prints topic ID and topic's new zScore
            if (++counter > 5)
            {
                return 0; //program exits out of int main() after the top 5 scores
            }
        }
    }
    return 0;
}
