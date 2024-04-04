// Write a program to add two complex number using operator overloadding.

#include<iostream.h>
#include<conio.h>
class complex
{
	private:
		int r;
		int i;
	public:
		complex()
		{
			r = 0;
			i = 0;
		}
		complex(int m,int n)
		{
			r = m;
			i = n;
		}
		complex add(complex c)
		{
			complex t;
			t.r = r+c.r;
			t.i = i+c.i;
			return t;
		}
		void show()
		{
			cout<<"r <<"+i"<<i"<<endl;
		}
};
		void main()
		{
			complex c1(2,3),c2(4,5),c3;
			c3 = c1.add(c2);
			c3.show;
			getch();
		}
