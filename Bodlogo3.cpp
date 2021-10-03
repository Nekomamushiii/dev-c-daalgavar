#include <iostream>
using namespace std;

//Garaas oruulsan 3 buhel toonii dundah toog ni ol.

main()
{
	int a,b,c,middle;
	cout<<"3 buhel too oruulna uu: ";
	cin>>a>>b>>c;
	if(a>b && a<c || a<b && a>c)
	  middle=a;
	else if(b>a && b<c || b<a && b>c)
	  middle=b;
	else if(c>a && c<b || c<a && c>b)
	   middle=c;
	
	if(a==b || a==c || b==c )
	   cout<<"Dundah too baihgui"<<endl;
	else        
	   cout<<"Dundah too ni: "<<middle;
}
