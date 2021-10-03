#include <iostream>
using namespace std;

//Ugsun N too anhnii too mun esehiig ol.

main()
{
	int n;
	cout<<"N toogoo oruulna uu: ";
	cin>>n;
	bool anhniiToo=true;
	for(int i=2;i<n;i++)
	{
		if(n%i==0){
			anhniiToo=false;
			break;
		}
	}
	if(anhniiToo)
	   cout<<"Anhnii too mun.";
	else 
	  cout<<"Anhnii too bish";
	
}
