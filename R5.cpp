#include<iostream>
using namespace std;
int f(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        return n+f(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<f(n);
}