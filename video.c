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
     float bitsPerPixel = 24
    float clrImage = w * h * bitsPerPixel * durationMovie * fps;
    float BImage = w * h * durationCredits * fps;
    float sizeInBits = clrImage + BImage; // Add to total size in bits
    float size;
    // Convert size based on the requested unit
    if (strcmp(unit, "bt") == 0) {
        size = sizeInBits; // Convert to bytes
    } else if (strcmp(unit, "ko") == 0) {
        size = sizeInBits / (1024); // Convert to kilobits
    } else if (strcmp(unit, "mo") == 0) {
        size = sizeInBits / (1024 * 1024); // Convert to megabits
    } else if (strcmp(unit, "go") == 0) {
        size = sizeInBits / (1024 * 1024 * 1024); // Convert to gigabits
    } else {
        return -1.0f;
    }
    return size / 8;
}
