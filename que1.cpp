#include<iostream>
using namespace std;
int main()
{
int n=9,i,j,p=n/2+1;
for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
 {
  if(j==p || j==n-p+1)
  {
    cout<<"*";
  }
  else
  {
   cout<<" ";
   }

 }
if(i<=n/2)
p--;
else
p++;
  

cout<<endl;
}

} 
