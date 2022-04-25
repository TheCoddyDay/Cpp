#include <bits/stdc++.h>

int findSmallest(int[], int);
bool selectionSort(int[], int);
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
        if (selectionSort(a, n))
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

int findSmallest(int arr[], int i)
{
    int ele_small, position, j;
    ele_small = arr[i];
    position = i;
    for (j = i + 1; j < 5; j++)
    {
        if (arr[j] < ele_small)
        {
            ele_small = arr[j];
            position = j;
        }
    }
    return position;
}

bool selectionSort(int arr[], int n)
{
    if (n > 0)
    {
        int pos, temp;
        for (int i = 0; i < n; i++)
        {
            pos = findSmallest(arr, i);
            temp = arr[i];
            arr[i] = arr[pos];
            arr[pos] = temp;
        }
        return true;
    }
    else
    {
        std::cout << "okk" << std::endl;
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