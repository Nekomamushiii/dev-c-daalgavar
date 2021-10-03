#include <iostream>
#include <algorithm>
using namespace std;

//Ugsun 5 buhel toonoos hamgiin ih,hamgiin baga mun dundah toog ol.

main()
{
	int n[5],i;
	cout<<"5 buhel too oruulna uu: ";
	for(i=0;i<5;i++)
		cin>>n[i];
	sort(n,n+5);
	for(i=0;i<5;i++)
	  cout<<n[i]<<" ";
	cout<<"\nHamgiin ih ni: "<<n[4]<<endl;
	cout<<"Hamgiin baga ni: "<<n[0]<<endl;
	cout<<"Dundah ni: "<<n[2];
}
