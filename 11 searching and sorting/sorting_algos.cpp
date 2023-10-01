#include <iostream>
#include <climits>
using namespace std;

void print_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX, ind = 0;
        for (int j = i; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                ind = j;
            }
        }
        swap(arr[i], arr[ind]);
    }
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
        print_arr(arr, n);
    }
}

// 4 5 2 3 1

// in selection sort we do not do swaping, we do shifitng, think like a card game. i will give you card one by one you havr to sort in your hand
void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > curr)
                arr[j + 1] = arr[j];
            else
                break;
        }
        arr[j+1] = curr;
        print_arr(arr,n);
    }
}

int main()
{
    int n = 7;
    // cin >> n;
    // int arr[n] = {5, 3, 2, 9, 1};
    int arr[n] = {2, 13, 4, 1, 3, 6, 28};
    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];
    cout << "array before sorting " << endl;
    print_arr(arr, n);
    // selection_sort(arr, n);
    // bubble_sort(arr, n);
    insertion_sort(arr, n);
    cout << "array after sorting " << endl;
    print_arr(arr, n);
    return 0;
}