#include<iostream.h>
#include<conio.h>
class ABC
{
	public:
		ABC()
		{
			cout<<"\n Inside constructor";
		}
		~ABC()
		{
			cout<<"\n Inside destructor";
		}
};
void main()
{
	ABC p;
	ABC q;
	cout<<"\n AKS";
	getch();
}