#ifndef NCR_STRUCTS_H00
#define NCR_STRUCTS_H00

#define REVERSED_BIT_ORDER

// Most likely this one is the right order for your system
#ifdef REVERSED_BIT_ORDER
typedef struct 
{
    unsigned int       ncr_base;
    unsigned short int ncr_extension: 6;
    unsigned short int reserved: 9;
    unsigned short int ncr_base_remainder: 1;
} __attribute__((packed)) NCR;
#endif

#ifdef STRAIGHT_BIT_ORDER
typedef struct 
{
    unsigned int       ncr_base;
    unsigned short int ncr_base_remainder: 1;
    unsigned short int reserved: 9;
    unsigned short int ncr_extension: 6;
} __attribute__((packed)) NCR;
#endif

#endif