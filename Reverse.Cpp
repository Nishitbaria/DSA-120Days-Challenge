#include <iostream>
using namespace std;
void revrse(int num[], int size)
{
    int first = 0;
    int last = size - 1;
    while (first < last)
    {
        swap(num[first], num[last]);
        first++;
        last--;
    }
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
    revrse(num, size);
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}