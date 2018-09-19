#include <iostream>
#include <vector>
using namespace std;

void insertNumbers (int character[], int indice) //function to insert numbers in array
{
    for (int i=0; i<indice; i++)
    {
        cin>>character[i];
    }
}

void mergeNumbers (int character1[], int character1Size, int character2[], int newIndice, int mergedNumbers[]) //function to merge two arrays into one
{
    int counter = 0;
       for (int i=0; i<newIndice; i++)
       {
           if (i<character1Size)
           mergedNumbers[i] = character1[i];

           else
           {
               mergedNumbers[i] = character2[counter];
               counter++;
           }
       }

}
// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
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
void heapSort(int arr[], int n)
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

int Search (int mergedNumbers[], int newIndice, int counter) //function to search if there is a corresponding level in the array
{
    for (int i=0; i<newIndice; i++)
    {
        if (mergedNumbers[i]==counter)
        {
            counter++;
        }
    }
    counter--;
    return counter;
}

int main()
{
    int levels, indice;
    int counter=1;
    cin>>levels;

    cin>>indice;
    int x[indice];
    insertNumbers (x, indice);
    int xSize = sizeof(x)/sizeof(*x); //this is needed for a parameter in the mergeNumbers function

    cin>>indice;
    int y[indice];
    insertNumbers (y, indice);

    int newIndice = ((sizeof(x)/sizeof(*x)) + sizeof(y)/sizeof(*y)); //the new indice/length of the merged array

    int mergedNumbers[newIndice] = {0};

    mergeNumbers(x,xSize,y,newIndice,mergedNumbers);

    heapSort(mergedNumbers, newIndice);

    counter=Search(mergedNumbers, newIndice, counter); //returns the last level number that either X or Y, or both can traverse

    if (counter==levels)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}
