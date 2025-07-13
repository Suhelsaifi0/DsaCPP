#include<iostream>
#include<string>
  using namespace std;
   
   class Student
   {
     public:
     // Attributes
     int id;
     int age;
     string name;
     int nos;

     private:
     float *gpa;
     string gf;

     public:
     //Constructor -> Default Ctor
     Student(){
        cout<<"Student Default Constructor Called"<<endl;
     }

     //Constructor -> Parametrized Ctor
     Student(int id, int age, string name, int nos, float gpa, string gf){
        cout<<"Student Parametrized Constructor Called"<<endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = 6;
        this->gpa = new float(gpa);
        this->gf = gf;
     }

     //Constructor -> Copy Ctor
     Student( const Student &srcobj)
     {
        cout<<"Student Copy Constructor Called"<<endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
     }

     // Behaviour / Methods / Function
     void study(){
        cout<< this->name <<" Studying"<<endl;
     }

     void sleep(){
        cout<< this->name <<" Sleeping"<<endl;
     }

     void Bunk(){
        cout<< this->name <<" Bunking"<<endl;
     }

     //Destructor -> Default dtor
     ~Student(){
        cout<<"Student Default Destructor Called"<<endl;
     }

     private:
       void gfchatting(){
        cout<< this->name <<" Chatting with Gf"<<endl;
     }
   };   
   
   int main(){

   Student A(1, 20, "Rahul", 6, 9.8, "Tanvi");
   cout<<A.age<<" "<<endl;
   A.sleep(); 


    return 0;
 }