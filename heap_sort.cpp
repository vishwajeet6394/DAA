#include <iostream>
using namespace std;
void insert(int Heap[], int n) // N is the last element which to be inserted
{
    int i = n, temp;
    temp = Heap[i];
    while (i > 0 && temp > Heap[(i - 1) / 2])
    {
        Heap[i] = Heap[(i - 1) / 2];
        i = (i - 1) / 2;
    }
    Heap[i] = temp;
}
void deleteHeap(int Heap[], int n)
{
    int x, i, j, temp, val;
    //  x=Heap[n];
    val = Heap[0];
    Heap[0] = Heap[n];
    i = 0, j = 2 * i + 1;
    while (j < n - 1)
    {
        if (Heap[j + 1] > Heap[j])
        {
            j = j + 1;
        }
        if (Heap[i] < Heap[j])
        {
            temp = Heap[i];
            Heap[i] = Heap[j];
            Heap[j] = temp;
            i = j;
            j = j * 2 + 1;
        }
        else
            break;
    }
    Heap[n] = val;
}
int main()
{
    int n;
    cin >> n;
    int Heap[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Heap[i];
    }
    for (int i = 1; i <= n - 1; i++)
    {
        insert(Heap, i);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        deleteHeap(Heap, i);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        cout << Heap[i] << " ";
    }

    return 0;
}
// 7
// 10 20 30 25 5 40 35