#include <bits/stdc++.h>

bool displayArray(int *, int);
bool inputArrs(int *, int);
bool insertionSort(int *, int);

int main()
{
    int n = 0;
    std::cout << "Input list dimension ...\n";
    std::cin >> n;
    int a[n];
    if (inputArrs(a, n))
    {
        if (insertionSort(a, n))
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
bool insertionSort(int arr[], int n)
{
    for (int k = 1; k < n; k++)
    {
        int temp = arr[k];
        int j = k - 1;
        while (j >= 0 && temp <= arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}