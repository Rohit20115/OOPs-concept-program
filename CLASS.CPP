#include<iostream.h>
#include<conio.h>
class ABC
{
	private:
		int x;
		int y;
		void putdata();
	public:
		void getdata();
};
void ABC::getdata()
{
	cout<<"\n Enter the two numbers : "<<endl;
	cin>>x>>y;
	putdata();
}
void ABC::putdata()
{
	cout<<"\n x = "<<x<<endl;
	cout<<"\n y = "<<y<<endl;
}
void main()
{
	ABC p;
	p.getdata();

	getch();
}