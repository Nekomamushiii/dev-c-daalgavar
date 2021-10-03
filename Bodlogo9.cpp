#include <iostream>
using namespace std;

//Hunii tursun on,sar,udur ugugdsun bol tuhain hun unuudriin baidlaar heden nastaig ol.

main()
{
	int tursunOn,tursunSar,tursunUdur,odooOn=2021,odooSar=10,unuudur=4;
	cout<<"Tursun On Sar Uduruu oruuna uu: ";
	cin>>tursunOn>>tursunSar>>tursunUdur;
	int sar[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(tursunUdur>unuudur)
	{
		unuudur=unuudur+sar[tursunSar+1];
		odooSar=odooSar-1;
	}
	if(tursunSar>odooSar)
	{
		odooOn=odooOn-1;
		odooSar=odooSar+12;
	 } 
	 int nas=odooOn-tursunOn;
	 int sar1=odooSar-tursunSar;
	 int udur=unuudur-tursunUdur;
	 cout<<nas<<" nas "<<sar1<<" sar "<<udur<<" honogtoi.";
}

/*internetees olson code. Code-oo mash sain oilgoj baigaach uuruu ingej setgeed olj chadahgui bna. Yaj ingej setgedeg boloh ve?
