#include<iostream.h>
#include<conio.h>
class ABC
{
	public:
		ABC() //constructor
		{
			cout<<"\nInside constructor\n";
		}
		~ABC() //destructor
		{
			cout<<"\nInside destructor\n";
		}
};
void main()
{
	ABC p;
	getch();
}