#include<iostream.h>
#include<conio.h>

class Shape
{
  public:
	int side, length, breadth;
	Shape()
	{
	  side=6;
	  length=8;
	  breadth=12;
	}
};
class Square: public Shape
{
  int asqr, psqr;
  public:
	void areaSquare()
	{
	  asqr=side*side;
	  cout<<"Area of the the square is = "<<asqr;
	}
	void periSquare()
	{
	  psqr=4*side;
	  cout<<"\nPerimeter of the square is = "<<psqr;
	}
};
class Rectangle: public Shape
{
  int arct, prct;
  public:
	void areaRect()
	{
	  arct=length*breadth;
	  cout<<"\nArea of the rectangle is = "<<arct;
	}
	void periRect()
	{
	  prct=2*(length+breadth);
	  cout<<"\nPerimeter of the rectangle is = "<<prct;
	}
};
class Cuboid: public Rectangle
{
  int height;
  int vcbd;
  public:
	void volCuboid()
	{
	  vcbd=length*breadth*height;
	  cout<<"\nVolume of the cuboid is = "<<vcbd;
	}
};

void main()
{
  clrscr();
  Shape s;
  Square sqr;
  sqr.areaSquare();
  sqr.periSquare();
  Rectangle rct;
  rct.areaRect();
  rct.periRect();
  Cuboid cbd;
  cbd.volCuboid();
  getch();
}