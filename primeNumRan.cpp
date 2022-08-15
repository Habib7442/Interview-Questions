#include <iostream>
using namespace std;

int isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a, b, i;
    cout << "Enter starting number: " << endl;
    cin >> a;
    cout << "Enter ending number: " << endl;
    cin >> b;
    cout << "The prime number between " << a << " and " << b << " are: ";

    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}
