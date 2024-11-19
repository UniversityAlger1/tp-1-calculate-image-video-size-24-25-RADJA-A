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
    long long movie = ((long long) w * h * 24 *(fps * durationMovie));
    long long credits = ((long long)w * h  *8 * ( fps * durationCredits));
    float size =( movie + credits)/8;
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
      return -1 ;
   }
   // YOUR CODE HERE - END
   return value;
}
