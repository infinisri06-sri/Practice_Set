#include<iostream>
using namespace std;
int main()
{
    int n,fac=1,i;
    cout<<"Enter a number:";
    cin>>n;
    if(n<=0)
    {
        cout<<"Enter a number greater than Zero";
    }
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    cout<<"Factorial of "<<n<<" is "<<fac;
}