#include <iostream>
using namespace std;
class Diagonal
{

private:
    int n;
    int *A;

public:
    Diagonal()
    {
        A = new int[10];
    }
    Diagonal(int n)
    {
        this->n = n;
        A = new int[n];
    }
    void set(int i, int j, int e);
    int get(int i, int j);
    void display();
    ~Diagonal()
    {
        delete[] A;
    }
};

void Diagonal::set(int i, int j, int e)
{
    if (i == j)
    {
        A[i - 1] = e;
    }
};
int Diagonal::get(int i, int j)
{
    if (i == j)
    {
        return A[i - 1];
    }
    return 0;
};
void Diagonal::display()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << A[i] << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Diagonal d(5);

    d.set(1, 1, 3);
    d.set(2, 2, 3);
    d.set(3, 3, 3);
    d.set(4, 4, 3);
    d.set(5, 5, 3);
    d.display();

    cout<<d.get(1,1);

    return 0;
}
