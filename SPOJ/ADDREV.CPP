#include <iostream>

using namespace std;

int rev(int c)

{  
int r=0,e;

while(c!=0)
	
{
		
e=c%10;
		
r=r*10+e;
		
c=c/10;
	
}
	
return r;

}

int zero(int d)

{ 
	
while(d%10==0)
	
{
	 
 d=d/10;	
	
}
	
return d;

}

int main() 

{
int a[10000],n,a1,b,i,j;	

cin>>n;
for(i=0;i<n;i++)

{
	
cin>>a1>>b;
	
j=rev(a1)+rev(b);
	
a[i]=rev(zero(j));
	
}

for(i=0;i<n;i++)

{
cout<<a[i]<<"\n";
}
	
return 0;

}
