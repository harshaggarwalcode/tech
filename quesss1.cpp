#include<iostream>
using namespace std;
int main()
{
int n,i,j;
cout<<"Enter the number(9)";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if((j==1||j==n)||(i==1||i==n))
cout<<"*";
else
cout<<" ";
}
cout<<endl;
}
}

