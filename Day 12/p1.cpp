//Inheritance


#include<bits/stdc++.h>
using namespace std;
 
class Rectangle{
private:
    int length;
    int breadth;

public:
    Rectangle(int l=0,int b=0)
    {
        length=l;
        breadth=b;
    }

    void setLength(int l)
    {
        length=l;
    }

    void setBreadth(int b)
    {
        breadth=b;
    }

    int getLength()
    {
        return length;

    }

    int getBreadth()
    {
        return breadth;
    }

    int area_of_rectangle(void);
    int perimeter_of_rectangle(void);

};


int Rectangle::area_of_rectangle(void)
{
    
      return length*breadth;    
     
}

int Rectangle::perimeter_of_rectangle(void)
{
    
      return 2*(length+breadth);    
     
} 


class Cube:public Rectangle{

private:
int height;

public:
Cube(int l=0,int b=0,int h=0)
{
    height=h;
    setLength(l);
    setBreadth(b);
}

int area()
{
    return getBreadth()*getLength()*height;
}

};
int main()
{
 
Rectangle o1;

o1.setLength(10);
o1.setBreadth(20);

cout<<o1.area_of_rectangle()<<endl;
cout<<o1.perimeter_of_rectangle()<<endl;
 
Cube o2(10,20,30);
cout<<o2.area()<<endl;
 
return 0;
   
}