#include <bits/stdc++.h>
using namespace std;
void InsertionSort(int a[], int n)
{
	int x, j;
	for (int i = 1; i < n; i++)
	{
		x = a[i];
		j = i - 1;

		while (j >= 0 && a[j] > x)
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = x;
	}
}

void ArrayElements(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main()
{
  int N;
  cout<<"Enter the size of array"<<endl;
  cin>>N;
  int a[N];
  cout<<"Enter elements of array"<<endl;
  for(int i=0;i<N;i++)
    cin>>a[i];
	InsertionSort(a, N);
  cout<<"Sorted Array using Insertion Sort"<<endl;
	ArrayElements(a, N);

	return 0;
}
