#include<iostream>
using namespace std;
class Account
{
int bal;
public:
Account(int b)
{
bal=b;
}
void Debit()
{
int dr;
cout<<"Enter the amount of Dr.";
cin>>dr;
if(dr>bal)
cout<<"Insufficient Balance in Your account"; 
bal=bal-dr;
cout<<"Your Current Balance Rs.="<<bal;
}
void Credit()
{
cout<<"Enter the deposit amount";
int cr;
cin>>cr;
bal=bal+cr;
cout<<"Your amount has been depositd";
cout<<"Current Balance Rs.="<<bal; 
}
int choice()
{
int r;
cout<<"1. Withdran Amount"<<endl;
cout<<"2. Deposit Amount"<<endl;
cout<<"Please enter your choice";
cin>>r;
return r;
}
};
int main()
{
Account a1(5000);
switch(a1.choice())
{
case 1:
a1.Debit();
break;
case 2:
a1.Credit();
break;
default:
cout<<"Wrong Choice";
}
}
 

