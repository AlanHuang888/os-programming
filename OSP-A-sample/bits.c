#include<stdio.h>
#include<stdint.h>
#include"bits.h"

void print_bits(uint8_t value)
{

    // Use the one pointer to indicate the value of concern
    uint8_t mask = 0b10000000;

    // Evaluate until we shift the 1 into oblivion
    while (mask)
    {
        // If the value, under the mask 1, is 1, print 1
        if (value & mask)
        {
            printf("1");
        // if it's zero, print zero
        } else {
            printf("0");
        }
        // Shift the binary digits right and pad with 0
        mask = mask >> 1;
    }
    printf("\n");
    
    
    
}

uint8_t reverse_bits(uint8_t value)
{
    // Use the one pointer to indicate the value of concern
    uint8_t mask = 0b00000001;

    // Evaluate until we shift the 1 into oblivion
    while (mask)
    {
        // If the value, under the mask 1, is 1, print 1
        if (value & mask)
        {
            printf("1");
        // if it's zero, print zero
        } else {
            printf("0");
        }
        // Shift the binary digits right and pad with 0
        mask = mask << 1;
    }
    printf("\n");
    
    
}

uint8_t check_bit(uint8_t value, uint8_t bit)
{

}

uint8_t toggle_bit(uint8_t *value, uint8_t bit)
{

}

uint8_t get_subfield(uint8_t value, uint8_t start, uint8_t stop)
{

}