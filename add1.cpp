//program to add 10 numbers
#include<iostream>
using namespace std;
int main()
{
    int a[10],sum=0,b;
    cout<<"enter numbers";
    for(int i=0;i<10;i++)
    {
        cin>>b;
        sum=sum+b;
    }
    cout<<"addition is:"<<sum;
    return 0;
}
