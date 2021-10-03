#include <iostream>
using namespace std;

//Garaas oruulsan 3 buhel toonii hamgiin bagiig ol.

main()
{
	int a,b,c,min;
	cout<<"3 buhel too oruulna uu: ";
	cin>>a>>b>>c;
	if(a<b && a<c)
	  min=a;
	else if(b<a && b<c)
	  min=b;
	else
	  min=c;
	cout<<"Baga ni: "<<min;

}
