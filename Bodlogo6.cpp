#include <iostream>
using namespace std;

/*Gurvaljinii taluud boloh 3 buhel too ogchee. Edgeer ni gurvaljin bolj chadah esehiig ol. Herev gurvaljin boloh bol tuhain gurvaljnii talbaig mun eldev talt,
zuv gurvaljin,adil hajuut tegsh untsugt gurvaljnii ali ni bolohiig ol. */

main()
{
	int a,b,c;
	cout<<"Gurvaljinii taluudaa oruul: ";
	cin>>a>>b>>c;
	if(a+b>c && a+c>b && b+c>a)
	{
		if(a==b && a==c)
		  cout<<"zov gurvaljin";
		else if(a!=c && a!=b && c!=b)
		  cout<<"eldev talt gurvaljin";
		else
		  cout<<"tegsh ontsogt gurvaljin";
	}
	else
	  cout<<"Gurvaljin bolj chadahgui";
}
