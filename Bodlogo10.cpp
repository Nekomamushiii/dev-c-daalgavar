#include <iostream>
using namespace std;

/*On,sar 2-iig garaas oruulahad tuhain sar hed honogtoi bolohiig togtoo. 2 dugaar sar deer undur jil tootsno. Undur jiliin durem:
400-d huvaagddag jileed undur buyu 29, harin zuvhun 100-d huvaagddag jiluud nam buyu 28,Mun 4-t huvaagddag jiluud undur buyu 20 honogtoi baina.
*/

main()
{
	int on, sar;
	cout<<"On saraa oruulna uu: ";
	cin>>on>>sar;
	switch(sar)
	{
		case 2: (on%4==0 && on%100 != 0|| on%400==0) ? cout<< "29 honogtoi": cout<<"28 honogtoi";break;
		case 4:
		case 6:
		case 9:
		case 11: cout<<"30 honogtoi";break;
		case 1:
		case 3:
		case 5:
		case 7: 
		case 8:
		case 10:
		case 12: cout<<"31 honogtoi";break;
		default: cout<<"Aldaa!";	
	}
}
