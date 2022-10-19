#include <iostream>
using namespace std;

int shellSort(int a[], int n)
{
	for (int gap = n/2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < n; i += 1)
		{
			int temp = a[i]; int j;
			for (j = i; j >= gap && a[j - gap] > temp; j -= gap)
				a[j] = a[j - gap];
			
			a[j] = temp;
		}
	}
	return 0;
}

void PrintElements(int a[], int n)
{
	for (int i=0; i<n; i++)
		cout << a[i] << " ";
}

int main()
{
	int n; 
    cout<<"Enter the size of array"<<endl;
    cin>>n; int a[n];
    cout<<"Enter the elements of array"<<endl;
	for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Given Array"<<endl;
	PrintElements(a, n);

	shellSort(a, n);

	cout << "\nSorted Array using Shell Sort"<<endl;
    PrintElements(a, n);

	return 0;
}
