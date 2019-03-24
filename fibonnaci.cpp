#include<iostream>
using namespace std;

void fibo(int n)
{
    int first=0,second=1,sum=0;
    sum=first+second;
    for(int i=0;i<n;i++)
    {

     cout<<sum<<" ";
    sum=first+second;
    first=second;
    second=sum;

    }

}

int main()
{


    fibo(10);


    return 0;
}
