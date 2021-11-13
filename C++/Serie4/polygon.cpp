#include <iostream>
#include <vector>
using namespace std;

class Polygon {
	protected:
		int width, height;
	
	public: 
		Polygon():width{0}, height{0}{}
		Polygon(int a, int b):width{a}, height{b}{}
		virtual ~Polygon(){}
		virtual int getArea() const {return 0;}
		
		//virtual int getArea()=0; {return 0;}
};

class Rectangle: public Polygon{
	
	public:
		Rectangle():Polygon(){}
		Rectangle(int a,int b):Polygon((int)a, (int)b){}
		~Rectangle(){}
		int getArea() const {return width*height;}
	
};

class Triangle: public Polygon {
	public:
		Triangle():Polygon(){}
		Triangle(int a, int b):Polygon((int)a, (int)b){}
		~Triangle(){}
		int getArea() const { return width*height/2;}
};

int main()
{
	vector<const Polygon *>vp;
	Polygon* p1 = new Rectangle(4,5);
	Polygon* p2 = new Triangle(4,5);
	vp.push_back(p1);
	vp.push_back(p2);
	
	for (auto p:vp)
	{
		cout << "L'aire vaut: " << p->getArea() << endl;
		//cout << (*p).getArea() << endl;
	}
	
	
	delete p1;
	delete p2;
	
	return 0;
	
}
