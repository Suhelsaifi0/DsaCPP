#include<iostream>  
#include<string>
  using namespace std;
   
   class Student
   {

    // If All the Attribute are Private That is called Perfect Encapsulation
     private:
     // Attributes
     int id;
     int age;
     string name;
     int nos;

     float *gpa; 
     string gf;

     public:
     // All Private Member We can Set Getter and Setter
     // In Public Methods We are write Getter and Setter
     void setgpa(float a)
     {
      // Layer of Authentication -> Person is Valid Or Not  
      *this->gpa = a;
     }

     float getgpa() const{
        return *this->gpa;
     }

     float getage() const{
        return this->age;
     }   

     //Constructor -> Default Ctor
     Student(){
        cout<<"Student Default Constructor Called"<<endl;
     }

     //Constructor -> Parametrized Ctor
     Student(int id, int age, string name, int nos , float gpa, string gf){
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
   //cout<<A.age<<" "<<endl;
   //A.sleep(); 

   cout<<A.getgpa()<< endl; 
   A.setgpa(8.1); 
   cout<<A.getgpa()<< endl;
   cout<<A.getage()<<endl;

    return 0;
 }