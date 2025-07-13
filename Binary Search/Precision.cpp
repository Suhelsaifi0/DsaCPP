#include<iostream>
 using namespace std;
  
  int mysqrt(int n){
     
     int s = 0;
     int e = n-1;

     int ans  = 0;
      while(s <= e){
         int mid = s + (e-s)/2;

         if(mid*mid <= n){
            ans = mid;
            s = mid + 1;
         }
         else{
            e = mid - 1;
         }
      }
      return ans;
  }

  double myPrecisionSqrt(int n){
      double sqrt = mysqrt(n);
        int precision = 8;
        double step = 0.1;
         while(precision--){
            double j = sqrt;
             while(j*j <= n){
                sqrt = j;
                j += step;
             }
        step /= 10;
        }    
      return sqrt;  
  }
  
  int main(){

   int n = 63;
   double ans = myPrecisionSqrt(n);
//    cout<<"ANSWER : "<<ans<<endl;

    // For More than 5 Precision 
    printf("Precision Sqrt: %.8f\n", ans);

    return 0;
  }