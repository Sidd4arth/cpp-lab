#include<iostream>
using namespace std;

void f(int i, int sum)
{
    if(i == 0)
    {
        cout << sum;
        return;
    }
    f(i-1, sum+i);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    f(n, 0);
}
