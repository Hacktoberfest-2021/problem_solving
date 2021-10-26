#include <bits/stdc++.h>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    cout << "Elements are" << endl;
    for (i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
}
void Append(struct Array arr, int x)
{
    if (arr.length < arr.size)
    {
        arr.A[arr.length] = x;
        arr.length++;
    }
    Display(arr);
}
void Insert(struct Array arr, int index, int element)
{
    int i;
    if (index >= 0 && index <= arr.length)
    {
        for (i = arr.length; i > index; i--)
        {
            arr.A[i] = arr.A[i - 1];
        }
        arr.A[index] = element;
        arr.length++;
        Display(arr);
    }
}
void dlt(struct Array arr, int index)
{
    if (index > 0 && index < arr.length)
    {
        for (int i = index; i < arr.length - 1; i++)
        {
            arr.A[i] = arr.A[i + 1];
        }
        arr.length--;
        Display(arr);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i;
    struct Array arr;

    //Display
    cout << "Enter the size of an array" << endl;
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;
    cout << "Enter number of numbers" << endl;
    cin >> n;
    cout << "Enter all the elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr.A[i];
    }
    arr.length = n;
    Display(arr);

    // Adding in array;
    int x;
    cout << "\n\nEnter the element you want to Add" << endl;
    cin >> x;
    cout << "After Appended the ";
    Append(arr, x);

    // Inserting Element
    int index, element;
    cout << "\n\nEnter the element you want insert in array" << endl;
    cin >> element;
    cout << "\n\nEnter the element where you want to put " << element << endl;
    cin >> index;
    Insert(arr, index, element);

    //Deleting Element
    int ind;
    cout << "\n\nEnter the Index you want to delete " << endl;
    cin >> ind;
    dlt(arr, ind);
    return 0;
}
