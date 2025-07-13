#include<iostream>
#include<math.h>
 using namespace std;

  float AreaOfCircle(int Radius){
     float Pie = 3.14;
      float AOfCircle = Pie*Radius*Radius;
      return AOfCircle;
  }

  int main(){

     float Radius;
     cout<<"Enter Radius Of Circle"<<endl;
     cin>>Radius;

    float ans = AreaOfCircle(Radius);
    cout<<"Area Of Circle is : "<<ans;

    return 0;
  }