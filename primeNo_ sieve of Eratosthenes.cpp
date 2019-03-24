
/*
Compute prime number from 2 to 100000000 in 13.2sec

*/


#include<iostream>
#include<math.h>
using namespace std;
void find_prime( int n)
{
    //cout<<n;
   unsigned long int *list_prime=new unsigned long int[n];
    //set Everything to true
    for(unsigned long int i=2;i<=n;i++)
    {
        list_prime[i]=1;
    }

    //Find prime

    for(unsigned long int i=2;i<=sqrt(n);i++)
    {
        if(list_prime[i]==1)
        {
            for(unsigned long  int j=2*i;j<=n;j=j+i)
            {

                list_prime[j]=0;
            }


        }
    }
    for(unsigned long int i=2;i<=n;i++)
    {

        if(list_prime[i]!=0)
        {
            cout<<i<<"\n";
        }
    }

}
int main()
{

   // int n=0;
   // cout<<"Enter a \'n\' to list of \'n\' prime no";
   // cin>>n;
    find_prime(99999);
    return 0;
}

/*
Compute prime number from 2 to 100000000 in 13.2sec

*/


#include<iostream>
#include<math.h>
using namespace std;
void find_prime( int n)
{
    //cout<<n;
   unsigned long int *list_prime=new unsigned long int[n];
    //set Everything to true
    for(unsigned long int i=2;i<=n;i++)
    {
        list_prime[i]=1;
    }

    //Find prime

    for(unsigned long int i=2;i<=sqrt(n);i++)
    {
        if(list_prime[i]==1)
        {
            for(unsigned long  int j=2*i;j<=n;j=j+i)
            {

                list_prime[j]=0;
            }


        }
    }
    for(unsigned long int i=2;i<=n;i++)
    {

        if(list_prime[i]!=0)
        {
            cout<<i<<"\n";
        }
    }

}
int main()
{

   // int n=0;
   // cout<<"Enter a \'n\' to list of \'n\' prime no";
   // cin>>n;
    find_prime(99999);
    return 0;
}
