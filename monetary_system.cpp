/*
convert old system '\x9c'5.2.8 where 5 pound,2 shilling,8 pence
                  tO
        new SYSTEM  '\x9c'5.13 decimal pound consists of only pound & pence

*/
#include<iostream>
#include<iomanip>
#define POUND_PENCE 100 //i pound=100 pence
#define POUND_SHELLING 20//1 pound=20 shelling
#define SHELLING_PENCE 12 //1 shelling=12 pence
using namespace std;
float pound=0,shill=0,pence=0;
float result=0;
float OldMonSystemto()
{
cout <<"Enter Pound: ";cin>>pound;
cout<<"Enter Shilling: ";cin>>shill;
cout<<"Enter pence: ";cin>>pence;
//Pence to Shill
float pence_shill=(pence/12);
float result_shill=shill+pence_shill;

//Shill to pound
float shill_pound=(result_shill/20);
float result_pound=(pound)+shill_pound;

//decimal_pound
float decimal_pound=result_pound;
cout<<"Decimal pound "<<setprecision(3)<<decimal_pound;
return decimal_pound;
}

void NewMonSystemto(float ab)
{
    //Separate decimal part and fraction part from pound
    int decimal_part=static_cast<int>(ab);
    float fraction_part=ab-decimal_part;
    //decimal part cat as Pound
    pound=decimal_part;
    //1pound=20shill
    shill=POUND_SHELLING*fraction_part;
    pence=(shill-static_cast<int>(shill))*SHELLING_PENCE;
    //Convert shill and pence to decimal
    shill=static_cast<int>(shill);
    pence=static_cast<int>(pence);

    cout<<"\nEuro "<<pound<<"."<<shill<<"."<<pence;

}
int main(){

  //float ab=OldMonSystemto();
  NewMonSystemto(5.13);
 return 0;
}
