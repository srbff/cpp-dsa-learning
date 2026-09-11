#include <iostream>
using namespace std;
 

 int main (){

   int arr [11] ={1,2,45,46,628,4896,261,48,484,92,6};
   int small  = arr [0];

   for ( int i = 1; i < 11; i++)
   {
     if (arr[i]<small)
     {
      small = arr[i];
     }
      
   }
   cout<< small;

       return 0;
 }