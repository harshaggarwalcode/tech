#include <iostream>
using namespace std;
class date
{
int dd,mm,yy;
public:
int fun( int d, int m, int y )
{
mm=m;
dd=d;
yy=y;

	if( yy < 0 )
		return 1;
		
	if( mm < 0 || mm > 12)
		return 1;
	
	if( mm == 2)
	{	
		if ( yy % 4 == 0 )
		{
				if( dd > 29 || dd < 0) 
					return 1;
		}
		else
		{
				if( dd > 28 || dd < 0) 
					return 1;
		}
	}
	else if( mm == 1 || mm == 3 || mm  == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12 )
	{
		if( dd > 31 || dd < 0) 
			return 1;
	}
	else
	{
		if( dd > 30 || dd < 0) 
			return 1;
	}
	
	return 0;
}
void show()
{
cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
};


int main()
{
	int ret = 0;
date d;

	
	ret = d.fun( 10, 10, 17 );
	if(ret==0)
		cout<<"Given date is valid"<<endl;
	else
		cout<<"Given date is not valid"<<endl;
	/*
	ret = d.fun( 10, 15, 17 );
	if(ret==0)
		cout<<"Given date is valid"<<endl;
	else
		cout<<"Given date is not valid"<<endl;*/
d.show();
return 0;
	
	
}

