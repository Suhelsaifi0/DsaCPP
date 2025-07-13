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

     //Constructor -> Default Ctor
     Student()  // CLASS NAME LAGANA BHUL GAYA THA / HAR CONSTRUCTOR CLASS NAME SE DECLARE HOGI
     { 
        cout<<"Student Default Constructor Called"<<endl;
     }

     //Constructor -> Parametrized Ctor
     Student(int id, int age, string name, int nos){
        cout<<"Student Parametrized Constructor Called"<<endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = 6;
     }

     //Constructor -> Copy Ctor
     Student(const Student &srcobj)
     {
        cout<<"Student Copy Constructor Called"<<endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
     }

     // Behaviour / Methods / Function
     void study(){
        cout<< this->name <<" Studying"<<endl; // THIS POINTER LAGANA BHUL GAYA THA
     }

     void sleep(){
        cout<< this->name <<" Sleeping"<<endl;
     }

     void Bunk(){
        cout<< this->name <<" Bunking"<<endl;
     }

     //Destructor -> Default dtor
      ~Student(){ // TILDA LAGANA BHUL GAYA THA BHUL GAYA THA
        cout<<"Student Default Destructor Called"<<endl;
     }
   };   
   
   int main(){

   //  Student A;
   //  A.id = 1;
   //  A.age = 19;
   //  A.name = "Suhel";
   //  A.nos = 6;

    // A.study();

    // Student B;
    // B.id = 2;
    // B.age = 21;
    // B.name = "Bilal";
    // B.nos = 5;

    // B.Bunk();

    // Parametrized Constuctor
    // Student A(1, 19, "Suhel", 6);
    // Student B(2, 20, "Bilal", 5);

    // cout<<A.name<<" "<<A.age<<" "<<endl;
    // cout<<B.name<<" "<<B.age<<" "<<endl;
    // A.sleep();
    // B.Bunk();

    // Copy Ctor 
    // Student C = A;  // First Way 
    // Student C(A);   // Second Way
    // cout<<C.name<<" "<<A.name<<" "<<endl;

    // Dynamic Allocation Or Student Pointer;
    Student *A = new Student(1, 14, "BABBAN" , 7);
    cout<< A->name <<endl; 
    cout<< A->age <<endl;
    A->study();

    delete A;

    return 0;
 }