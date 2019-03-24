/*
Here we are finding the factors of numbers
*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n=1000;
    int limit=sqrt(n);//We are taking sqrt of number because numbers repeat after middle term in N terms
    cout<<"(1,"<<n<<") ";
    for(int i=2;i<=limit;i++)
    {
        if(n%i==0)
        {
            cout<<"("<<i<<","<<(n/i)<<") ";

        }

    }
    return 0;
}
