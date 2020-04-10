#include <bits/stdc++.h>
using namespace std;
class Array
{
public:
    int arr[] = {null};
    Array(int size);
    int insertArrayElement(int value, int location)
    {

        if (arr[location] == INT_MIN)
        {
            arr[location] = value;
            cout << "item " << value << " is successfully add";
        }
        else
        {
            cout << "we value in the location";
        }
        return 0;
    }
};
int Array::Array(int size)
{
    int arr[size];
    for (int i = 0; i > size; i++)
    {
        arr[i] = INT_MIN;
    }
    return 0;
}

int main()
{
    Array arr(8);
    arr.insertArrayElement(5, 0);
}