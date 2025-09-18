#include <iostream>
using namespace std;

void make_array(int[],int);
void print_array(int[],int);
void selection_sort(int[],int);
void selection_sort_bubble(int[],int);

int main()
{
	int n;
	cin >> n;
	int A[n];
	make_array(A,n);
	cout << "Unsorted array: \n";
	print_array(A,n);
	selection_sort_bubble(A,n);
	cout<<"Sorted array: \n";
	print_array(A, n);
	return 0;
}

void make_array(int arr[], int size)
{
	for (int i = 0; i < size; i++) arr[i] = rand() % 100;
}

void print_array(int arr[], int size)
{
	for (int i = 0; i < size; i++) cout << arr[i] << " " << endl;
}

void selection_sort(int arr[], int size)
{
	for (int i = 0; i < size; i++) {
		int min_idx = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}
		swap(arr[i], arr[min_idx]);
	}

}

void selection_sort_bubble(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		bool swapped = false;
		for ( int j = 0; j < size; j++) {
			if (arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
				swapped = true;
			}
		}
		if (!swapped) {
			break;
		}
	}
}

void selection_sort_insertion(int arr[], int size) {
	for (int i = 0; i < size; i++) {

	}
}
