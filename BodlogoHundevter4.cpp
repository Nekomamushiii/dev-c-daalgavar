#include <iostream>
using namespace std;

//Ugsun N toog tugs too mun esehiig ol.

main()
{
	int n,sum=0;
	bool tugsToo=true;
	cout<<"N too oruulna uu: ";
	cin>>n;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		  sum=sum+i;
	}
	
	if(n==sum)
	  cout<<"Tugs too mun.";
	else
	  cout<<"Tugs too bish.";
}

