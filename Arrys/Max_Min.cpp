#include <bits/stdc++.h>
using namespace std;
int GetMax(int num[], int size)
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, num[i]);
    }
    return maxi;
}
int GetMin(int num[], int size)
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        mini = min(mini, num[i]);
    }
    return mini;
}
int Max_Min_sum(int num[], int size)
{
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, num[i]);
        mini = min(mini, num[i]);
    }
    return maxi + mini;
}

int main()
{

    int size;
    cin >> size;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Max value sum is :" << Max_Min_sum(num, size);
    return 0;
}