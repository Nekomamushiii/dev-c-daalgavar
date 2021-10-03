#include <iostream>
using namespace std;

/*Garaas oruulsan 2 buhel toonii niilber,yalgavar,urjver,noogdvor,uldegdeliig tus tusd ni ol.*/

int niilber(int a,int b){
	return a+b;
}
int yalgavar(int a,int b){
	return a-b;
}
int urjver(int a,int b){
	return a*b;
}
int noogdvor(int a,int b){
	return a/b;
}
int uldegdel(int a,int b){
	return a%b;
}

int main()
{
	int a,b;
	cout<<"2 buhel toogoo oruulna uu: ";
	cin>>a>>b;
	cout<<a<<"+"<<b<<"="<<niilber(a,b)<<endl;
	cout<<a<<"-"<<b<<"="<<yalgavar(a,b)<<endl;
	cout<<a<<"*"<<b<<"="<<urjver(a,b)<<endl;
	cout<<a<<"/"<<b<<"="<<noogdvor(a,b)<<endl;
	cout<<a<<"%"<<b<<"="<<uldegdel(a,b)<<endl;
}
