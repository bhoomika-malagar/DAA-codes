#include <iostream>
using namespace std;

void bubble_sort(int n, int *a)
 {
    int temp = 0;
    for (int i = 0; i <= n - 2; i++)
        {
        for (int j = 0; j <= n - 2 - i; j++)
        {
            if (a[j + 1] < a[j])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
 {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bubble_sort(n, a);

    cout << "Sorted elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
