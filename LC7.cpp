// n=10
// /2
//store remainder
//repeat until n=0
#include<iostream>
#include <climits>
using namespace std;
int main()
{

    int n;
    cout<<"Enter a number to reverse:";
    cin>>n;
    int ans=0;
    while(n!=0)
    {
     int digit=n%10;
     ans=(ans*10)+digit;
     n=n/10;
    }
    if((ans>INT_MAX/10)|| (ans<INT_MIN/10))
    {
        cout << "Overflow error!";
        return 0;
    }
    else{
         cout << "Reversed number: " << ans << endl;
        return ans;
    }
}
    