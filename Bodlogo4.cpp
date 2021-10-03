#include <iostream>
using namespace std;

//Garaas oruulsan toog 16tiin toolliin system ruu horvuul.

main()
{
	int n,i,hex[i];
	cout<<"N toogoo oruulna uu: ";
	cin>>n;
	while(n>=16)
	{
		hex[i]=n%16;
		i++;
		n/=16;
	}
	hex[i]=n;
	while(i>=0)
	{
		switch(hex[i]){
			case 10: cout<<"A";break;
			case 11: cout<<"B";break;
			case 12: cout<<"C";break;
			case 13: cout<<"D";break;
			case 14: cout<<"E";break;
			case 15: cout<<"F";break;
			default: cout<<hex[i];
		}
		i--;
	}
}
