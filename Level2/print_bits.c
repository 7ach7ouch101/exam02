#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i;
    i = 8;
    unsigned char bin;
    while(i--)
    {
        bin = (octet >> i & 1) + '0';
        write(1 , &bin , 1);
    }
}