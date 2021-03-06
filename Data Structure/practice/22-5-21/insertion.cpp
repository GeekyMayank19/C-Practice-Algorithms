// C++ program for implementation of selection sort
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		// Swap the found minimum element with the first element
		swap(arr[min_idx], arr[i]);
	}
}



// Driver program to test above functions
int main()
{
	int arr[] = {64, 25, 12, 22, 11};

	int n;
    cout<<"size";
    cin>>n;

    cout<<"elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	selectionSort(arr, n);
	cout << "Sorted array: \n";


	for (int i=0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}

// This is code is contributed by rathbhupendra
