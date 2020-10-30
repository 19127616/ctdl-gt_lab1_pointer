#include "header.h"

void inputArray(int *&a, int &n)
{
    cout << "Enter n: ";
    cin >> n;
    a = new int[n];

    for (size_t i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> a[i];
    }
}

void dellocateArray(int *&a)
{
    delete[] a;
}

void printArray(int *a, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}

int findMin(int *a, int n)
{
    int min = a[0];
    for (size_t i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}

int findMaxModulus(int *a, int n)
{
    int max = a[0];
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            if (max < a[i] * (-1))
            {
                max = a[i] * (-1);
            }
        }
        else
        {
            if (max < a[i])
            {
                max = a[i];
            }
        }
    }
    return max;
}

bool isAscending(int *a, int n)
{
    int count = 0;
    for (size_t i = 0; i < n - 1; i++)
    {
        if (a[i] <= a[i + 1])
        {
            count += 1;
        }
        else
        {
            break;
        }
    }

    if (count = n - 1)
    {
        return true;
    }
    else
    {
        count = 0;
        for (size_t j = 0; j < n - 1; j++)
        {
            if (a[j] >= a[j + 1])
            {
                count += 1;
            }
        }
    }

    if (count = n - 1)
    {
        return true;
    }
    return false;
}

int sumOfArray(int *a, int n)
{
    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

int countPrime(int *a, int n)
{
    int count = n;
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] == 0 || a[i] == 1)
        {
            continue;
        }

        for (int j = 2; j < a[i] / 2; j++)
        {
            if (a[i] % j == 0)
            {
                count -= 1;
                break;
            }
        }
    }

    return count;
}

void reverseArray(int *&a, int *b, int n)
{
    a = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        a[i] = b[n - i - 1];
    }
}

int LinearSearch(int *a, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int SentinelLinearSearch(int *a, int n, int key)
{
    int flag = -1;
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = i;
        }
    }
    return flag;
}

int BinarySearch(int *a, int n, int key)
{
    int left, right, mid;
    left=0;right=n-1;
    mid=(left+right)
    while (a[mid] != key)
    {
        /* code */
    }
}
