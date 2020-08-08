#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	for(a=0;a<=6;a++)
	{
		for(b=0;b<=4;b++)
 
			if(((b==0||b==4)&&(a!=0&&a!=6))||((a==0||a==6)&&(b>0&&b<4)))
				cout<<"*";
			else
				cout<<" ";


		}
		cout<<endl;
		
	}

}
