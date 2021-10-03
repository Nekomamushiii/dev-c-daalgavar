#include <iostream>
using namespace std;

//N,M 2 buhel too ugugdsun bol N - toonii M zergiig ol.

main()
{
	int n,m,n1;
	cout<<"N,M toogoo oruulna uu: ";
	cin>>n>>m;
	n1=n;
	for(int i=1;i<m;i++)
	{
		n=n1*n;
	}
	cout<<n1<<" toonii "<<m<<" zereg ni: "<<n;
}
