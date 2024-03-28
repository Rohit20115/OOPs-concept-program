#include<iostream.h>
#include<conio.h>
class ABC
{
	int x;
	static int y;
	public:
		void getdata(int m)
		{
			x=m;
			y++;
		}
		void show_x()
		{
			cout<<"\n x = "<<x<<endl;
		}
		static void show_y()
		{
			cout<<"\n y = "<<y<<endl;
		}
};
int ABC::y;
void main()
{
	ABC p,q;
	p.getdata(10);
	q.getdata(20);

	p.show_x();
	p.show_y();

	ABC::show_y();
	getch();
}
