#include <bits/stdc++.h>

bool quickSort(int[], int, int);
int partition(int[], int, int);
bool displayArray(int[], int);
bool inputArrs(int[], int);
int main()
{
    int n = 0;
    std::cout << "Input list dimension ...\n";
    std::cin >> n;
    int a[n];
    if (inputArrs(a, n))
    {
        if (quickSort(a, 0, n - 1))
        {
            if (displayArray(a, n))
            {
                std::cout << "----------------------------" << std::endl;
                return 0;
            }
            else
            {
                std::cout << "----------------------------" << std::endl;
                return -1;
            }
        }
        else
        {
            std::cout << "Got Error" << std::endl;
            return -1;
        }
    }
    else
    {
        std::cout << "are you sure about that?!" << std::endl;
        return -1;
    }
    // as we know
    return 0;
}

int partition(int arr[], int start, int end)
{

    int pivot = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    // Giving pivot element its correct position
    int pivotIndex = start + count;
    std::swap(arr[pivotIndex], arr[start]);

    // Sorting left and right parts of the pivot element
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            std::swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

bool quickSort(int arr[], int start, int end)
{
    if (end > 0)
    { // base case
        if (start >= end)
            return;

        // partitioning the array
        int p = partition(arr, start, end);

        // Sorting the left part
        quickSort(arr, start, p - 1);

        // Sorting the right part
        quickSort(arr, p + 1, end);
        return true;
    }
    else
    {
        std::cout << "ok" << std::endl;
        return false;
    }
    return false;
}

bool displayArray(int arr[], int n)
{
    if (n > 0)
    {
        for (int i = 0; i < n; ++i)
            std::cout << arr[i] << " ";
        std::cout << "\n";
        return true;
    }
    else
    {
        // got error
        std::cout << "Please provide a valid array index" << std::endl;
        return false;
    }

    // reaching here got error
    return false;
}

bool inputArrs(int arr[], int n)
{
    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            switch (i)
            {
            case 1:
                std::cout << "Provide " << i << "th elment: " << std::endl;
                break;
            case 2:
                std::cout << "Provide " << i << "nd elment: " << std::endl;
                break;
            case 3:
                std::cout << "Provide " << i << "ed elment: " << std::endl;
                break;
            default:
                std::cout << "Provide " << i << "th elment: " << std::endl;
                break;
            }

            std::cin >> arr[i];
        }
        return true;
    }
    else
    {
        // got againg
        std::cout << "Please provide a valid array index" << std::endl;
        return false;
    }
    // you know it!
    return false;
}
