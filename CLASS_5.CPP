#include<iostream.h>
#include<conio.h>
class ABC
{
	private:
		int x;
		int y;
	public:
		void ABC(int m,int n)
		{

			x=m;
			y=n;
		}
		void putdata()
		{
			cout<<x<<endl;
			cout<<y<<endl;
		}
};
void main()
{
	ABC p(10,20);
	p.pudata();
	getch();
}