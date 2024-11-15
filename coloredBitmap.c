#include <string.h>
#include "config/coloredBitmap.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   u: Unit of the output value. It could be 'bt' bits, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored image size Bitmap (based on the unit passed parametter)
float coloredBitmap(int w, int h, char* unit) {
   // YOUR CODE HERE - BEGIN
   float value = 0 ;
   if (strcmp(unit,"bt")==0){
      value = (float)(w*h*3*8) ;

   }
   else if (strcmp(unit,"ko")==0){
      value = (float)(w*h*3*8)/(1024) ;
   }
   else if (strcmp(unit,"mo")==0){
      value =(float)( w*h*3*8)/(1024*1024) ;
   }
   else if (strcmp(unit,"go")==0){
      value = (float)(w*h*3*8)/(1024*1024*1024) ;
   }
   else {
      return 0 ;
   }
   // YOUR CODE HERE - END
   return value;
}

/*
int main(){
   printf("%f",coloredBitmap(250,248,"ko"));
   return 0;
}
*/