#include<iostream>
#include<string>
 
 using namespace std;
 
 class Vehicle{
    
    protected:
    string name;
    string model;
    int noOfTyre;

    // Create Constuctor
    public:
      Vehicle(string _name, string _model, int _noOfTyre)
      {
        cout<<" I am inside Vehicle ctor"<<endl;
        this->name = _name;
        this->model = _model;
        this->noOfTyre = _noOfTyre;
      }

    // Behaviour / Methods / Function
    void Start_engine(){
        cout<<"Engine is Starting"<<" "<<name<<" "<<model<<endl;
    }  
    
    void Stop_engine(){
        cout<<"Engine is Stopping"<<" "<<name<<" "<<model<<endl;
    }

    ~Vehicle(){
        cout<<"I am inside Vehicle dtor"<<endl;
    }
 };

 // Inheritance Implimentation
 class Car : public Vehicle
 {
   public:
   // Define Specification
   int noOfDoor;
   string transmissionType;

   Car(string _name, string _model, int _noOfTyres, int _noOfDoors, string _transmissionType) : Vehicle(_name, _model, _noOfTyres)
   {
     cout<<"I am inside Car ctor"<<endl;
     this->noOfDoor = _noOfDoors;
     this->transmissionType = _transmissionType;
   }

   void StartAC(){
    cout<<"AC has Started Of "<<name<<endl;
   }
 };

  class MotorCycle : public Vehicle{
    public:
    // Define Specification 
    string Suspension;
    string Style; 

    MotorCycle(string _name, string _suspension, string _model, int _NoOfTyre, string Style) : Vehicle(_name, _model, _NoOfTyre){
        this-> Suspension = Suspension;
        this-> Style = Style;
    }

    void StartDrive(){
      cout<<this-> name<<"NOW I DRIVING "<<endl;
    }
  }; 

  int main(){

    Car A("Alto 800", "Lxi", 4, 4, "manual");
    A.Start_engine();
    A.StartAC();
    A.Stop_engine();

    return 0;
  }