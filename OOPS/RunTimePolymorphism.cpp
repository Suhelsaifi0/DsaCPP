#include<iostream>
 using namespace std;
  
   class Shape{

    public:
     virtual void draw(){
        cout<<"Generic Drawing..."<<endl;
     }
    };

    class Circle : public Shape{
    
    public:
     void draw() override
     {
        cout<<" Circle is Drawing..."<<endl;
     }

    };
    
    class Rectangle : public Shape{
    
    public:
     void draw() override
     {
        cout<<" Rectangle is Drawing..."<<endl;
     }
   };

    class triangle : public Shape{
    
    public:
     void draw() override
     {
        cout<<" Triangle is Drawing..."<<endl;
     }
   };

   void ShapeDrawing(Shape *s){
     s->draw();  // Draw is Polymorphic 
   }

  int main(){

   Circle c;
   Rectangle r;
   triangle t;

   ShapeDrawing(&c);
   ShapeDrawing(&r);
   ShapeDrawing(&t);

   

     return 0;
  }