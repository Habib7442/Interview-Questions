#include <iostream>
using namespace std;

int main()
{
    int n;
    int isPrime = 1;
    cout << "Enter the number" << endl;
    cin >> n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
        }
    }
    if (isPrime)
    {
        cout << " The number " << n << " is prime";
    }

    else
    {
        cout << " The number " << n << " is not prime";
    }

    return 0;
}