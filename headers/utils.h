#ifndef UTILS_H00
#define UTILS_H00

// Ha-ha
// Docs for bitwise check function

/**
    @brief checking if the pointed by the @position argument
           bit is set to 1 or to 0 by shifting the 0b00000001
           value to the left on the @position number
    
    @param bt 
           byte value we are checking the bit in
    @param position
           number of positions which we shall shift the 0b00000001 for
    
    @return true or false (0 or 1)
*/
#define BIT_IS_SET(bt, position) ( (bt & (1 << position)) ? 1 : 0)

#endif