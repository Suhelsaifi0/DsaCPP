#include<iostream>
#include<vector>
using namespace std; 
 int main(){

    // 2D ARRAY VECTOR 
    vector<vector<int>> arr(5, vector<int>(4,0)); 
    vector<vector<int>> brr(5);
    // 2D ARRAY CREATED 5 ROWS AND 4 COLUMNS , WITH INITIAL VALUE OF CELL IS "0"  
    int rowCount = arr.size();
    int colCount = arr[0].size();

    brr[0] = vector<int>(4);
    brr[0] = vector<int>(2);
    brr[0] = vector<int>(5);
    brr[0] = vector<int>(1);
    brr[0] = vector<int>(3);
    int totalRowCount = brr.size();
    // int totalColCount = brr[i].size();


    return 0;
 }