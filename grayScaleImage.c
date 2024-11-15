#include "config/grayScaleImage.h"
// Parameters:
//   w: width of the image
//   h: height of the image
// Return value
//   grayScale size of the image Bitmap (in byte)
float grayScaleImage(int w, int h) {
   // YOUR CODE HERE - BEGIN
   float value = 0;
   value = w * h ;
   // YOUR CODE HERE - END
   return (value);
}
/*
int main(){
   float test =0;
   test = grayScaleImage(50,2.5);
   printf("%.2f",test);
   return 0 ;
}*/