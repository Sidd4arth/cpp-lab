#include<iostream>
using namespace std;
void f(int i, int n)
{
    if(i<1)
    {
        return;
    }
    else{
        cout<<i<<endl;
    }
    f(i-1,n);
}
int main()
{
    int n;
    cout<<"Enter starting point:";
    cin>>n;
    f(n,n);
}