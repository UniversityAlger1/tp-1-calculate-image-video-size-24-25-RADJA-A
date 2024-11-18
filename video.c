#include <string.h>
#include "config/video.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in second of movie (colored image)
//   durationCredits: duration in second of credit (image Black/White)
//   unit: Unit of the output value. It could be 'bt' byte, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored video size (based on the unit passed parametter)
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
   // YOUR CODE HERE - BEGIN
  float movie = (float)(w * h * 3 * 8 *(fps * durationMovie))/8;
   float credits = (float)(w * h *8 * ( fps * durationCredits))/8;
    float size = movie + credits;
    float value = 0;
   if (strcmp(unit,"bt")==0){
      value = (float)size;
   }
   else if (strcmp(unit,"ko")==0){
      value =(float) (size) /(1024) ;
   }
   else if (strcmp(unit,"mo")==0){
      value = (float)(size)/(1024*1024) ;
   }
   else if (strcmp(unit,"go")==0){
      value = (float)(size)/(1024*1024*1024) ;
   }
   else {
      return 0 ;
   }

   // YOUR CODE HERE - END
   return value;
}

