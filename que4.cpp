#include<iostream>
using namespace std;
class rectangle
{
private:
float length,width;
public:
void getValue(float l,float w)
{
length=l;
width=w;
}
int area()
{
int a;
if(length>=0&&width<20)
return length*width;
else
return 0;
}
int perimeter()
{
int p;
if(length>=0 &&width<20)
return 2*(length+width);
else
return 0;
}
};
int main()
{
rectangle r;
int a;
r.getValue(4,500);
a=r.area();
if(a==0)
cout<<"Invalid Area"<<endl;
else
cout<<"Area="<<a;

int p;
p=r.perimeter();
if(a==0)
cout<<"Invalid Area";
else
cout<<"Area="<<a<<endl;

}

