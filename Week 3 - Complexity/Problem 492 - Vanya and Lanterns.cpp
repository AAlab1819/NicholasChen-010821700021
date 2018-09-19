#include <iostream>

using namespace std;

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(double arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(double arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}


int main()
{
    int numberOfLanterns, streetLength;
    double currentMinimum; //because answer will be in decimal
    bool lanternAtStart = false; //if there is a lantern at the starting coordinate
    cin>>numberOfLanterns;
    cin>>streetLength;

    double lanterns[numberOfLanterns];

    for (int i=0; i<numberOfLanterns; i++)
    {
        cin>>lanterns[i];
        if (lanterns[i]==0)
        {
            lanternAtStart = true; //true if there is a lantern at the starting coordinate
        }
    }

    heapSort(lanterns, numberOfLanterns); //sort
    if (lanternAtStart==true)
    {
        currentMinimum = lanterns[0]/2; //if there is, then currentMinimum will be half of the distance
    }
    else
    currentMinimum = lanterns[0]; //if not, then currentMinimum will be distance from first lantern to starting coordinate

    for (int i=0; i<numberOfLanterns; i++) //one for loop, O(n)
    {
        if (i+1<numberOfLanterns)
        {
            if ((currentMinimum+lanterns[i])>=(lanterns[i+1]-currentMinimum)) //if distance of current minimum and the current lantern is
                                                                            //equivalent of more than the next lantern minus the current minimum
            {
                continue; //currentMinimum stays put
            }
            else
            {
                currentMinimum = (lanterns[i+1] - lanterns[i])/2; //if not, change accordingly.
            }
        }
    }

    if (lanterns[numberOfLanterns-1]+currentMinimum<streetLength) //in case the last lantern is not at the end of the street, do one more comparison.
    {
        currentMinimum = streetLength - lanterns[numberOfLanterns-1];
    }
    cout.precision(20); //to ensure precise number output
    cout<<currentMinimum<<endl;

    return 0;
}
