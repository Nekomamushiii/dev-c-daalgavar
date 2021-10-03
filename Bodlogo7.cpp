#include <iostream>
using namespace std;

//Ugsun 6 hurtleh orontoi buhel too uguhud heden orontoi too ugsuniig ol.

main()
{
	int n,i,n1;
	cout<<"N toogoo oruulna uu: ";
	cin>>n;
	n1=n;
	while(n>0)
	{
		n/=10;
		i++;
	}
	cout<<n1<<" ni "<<i<<" orontoi too baina.";
}
