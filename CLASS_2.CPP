#include<iostream.h>
#include<conio.h>
class ABC
{
	private:
		int x[2];
	public:
		void putdata();
		void getdata();
};
void ABC::getdata()
{
	cout<<"\n enter the two numbers : "<<endl;
	for(int i=0;i<2;i++)
	{
		cin>>x[i];
	}
}
void ABC::putdata()
{
	for(int i=0;i<2;i++)
	{
		cout<<"\n"<<x[i]<<endl;
	}
}
void main()
{
	ABC p;
	p.getdata();
	p.putdata();
	getch();
}


