#include<stdio.h>
#include<stdint.h>
#include"bits.h"

void print_bits(uint8_t value)
{
    int vals[8];
    int quotient = value;

    for (int i = 0; i < 8; i++)
    {
        vals[i] = quotient%2;
        quotient /= 2;
    }

    for (int i = 8; i >= 0; i--)
    {
        printf("%i", vals[i]);
    }
    
}

uint8_t reverse_bits(uint8_t value)
{

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