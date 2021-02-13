#include <iostream>

using namespace std;

class A
{
	private:
		int x;
		
	public:
		
		void setX(int);
		
		int getX();
		
		friend void foo(A&);
};

    void A::setX(int _x)
    {
    	x=_x;
	}
	
	int A::getX()
	{
		return x;
	}
	
	void foo(A&a)
	{
		a.x=0;
	}
	
int main ()
{
	A n;
	
	n.setX(18);
	
	cout<<n.getX()<<endl;
	
	foo(n);
	
	cout<<n.getX()<<endl;
	
	return 0;
}
