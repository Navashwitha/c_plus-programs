#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

    //Dynamically Allocating Linear one dimension array

    //Initialize with space  Otherwise it will store Junk in between
    //For eg if space is allocated for 10 elements Then after 10 elements 35 bytes=(4 bytes * 5 elements ) are junk values
   /* int *x=new int[30];
    cout<<"Enter a Number n: ";
    int n;
    cin>>n;
    srand(time(NULL));
    cout<<setw(20)<<"Address"<<setw(20)<<"Value\n";
    for (int i=1;i<=n;i++)
    {
        *(x+i)=rand()%100;
        cout<<setw(20)<<x+i<<setw(20)<<*(x+i)<<"\n";

    }
*/
//Two Dimension Array:

int matrix[4][4];
int i=0,j=0;
cout<<(matrix+i);
    return 0;
}
