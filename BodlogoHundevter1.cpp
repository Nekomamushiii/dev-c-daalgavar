#include <iostream>
using namespace std;

//1-N too hurtleh 5 bolon 3-t uldegdelgui huvaagdah toonuudiin niilberiig ol.

main()
{
	int n,sum=0;
	cout<<"N toogoo oruulna uu: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%3==0 && i%5==0){
		  sum=sum+i;
		  cout<<i<<" ";
		  }
	}
	cout<<"\nNiilber ni: "<<sum;
}
