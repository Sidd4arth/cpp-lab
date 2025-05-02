#include<iostream>
using namespace std;
void f(int i,int n)
{   
    if(i>n)
    {
        return;
    }
    else{
        cout<<"SID"<<endl;
    }
    f(i+1, n);
}
int main()
{
    int n;
    cout<<"Enter n to print n times:";
    cin>>n;
    f(1,n);
}