#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    bool f = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            f = false;
            break;
        }
    }
    if (f == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isCondition(int n)
{
    bool flag = false;

    if (isPrime(n) == true || (n % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void fib(int n)
{
    int s = 1, p = 1, temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (s > 1)
        {
            if (isCondition(s) == true)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << s << " ";
            }
        }
        else{
            cout<<s<<" ";
        }
        temp = s + p;
        s = p;
        p = temp;
    }
}

int main()
{
    int n;
    cout << "Enter the term you want to print the series" << endl;
    cin >> n;
    fib(n);
}