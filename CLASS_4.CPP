#include<iostream.h>
#include<conio.h>
class ABC
{
	private:
		int x;
		int y;

	public:
		void ABC()
		{
			x=0;
			y=0;
		}
		void putdata()
		{
			cout<<"\n x = "<<endl;
			cout<<"\n y = "<<endl;
		}
};
void main()
{
	ABC p;
	p.putdata()
	getch();
}