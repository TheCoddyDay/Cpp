#include <bits/stdc++.h>

bool inputArrs(int[], int);
bool displayArray(int[], int);
bool shellSort(int[], int);

int main()
{
    int n = 0;
    std::cout << "Input list dimension ...\n";
    std::cin >> n;
    int a[n];
    if (inputArrs(a, n))
    {
        if (shellSort(a, n))
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

bool shellSort(int arr[], int n)
{
    if(n > 0)
    {
        for (int gap = n / 2; gap > 0; gap /= 2)
        {
            for (int i = gap; i < n; i += 1)
            {
                // sort sub lists created by applying gap
                int temp = arr[i];
                int j;
                for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                    arr[j] = arr[j - gap];

                arr[j] = temp;
            }
        }
        return true;
    }
    else
    {
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
