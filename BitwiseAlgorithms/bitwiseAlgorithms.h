#ifndef BITWISEALGORITHMS_H
#define BITWISEALGORITHMS_H

#include "../Utilities/utility.h"

struct BitRepresentation
{
	union
	{
		uint8_t 	bits8;
		uint16_t 	bits16;
		uint32_t 	bits32;
		uint64_t	bits64;
	};
	union
	{
		uint8_t		mask8;
		uint16_t	mask16;
		uint32_t	mask32;
		uint64_t	mask64;
	};
};

char* toBit(void *data, size_t size)
{
	struct BitRepresentation bits;
	size_t i;
	char *bitStr = (char*)malloc((size*8 + 1)*sizeof(char));
	if(size == 1){
		bits.bits8 = *(uint8_t*)data;
		bits.mask8 = 1 << 7;
		for(i = 0 ; i < size * 8; i++)
		{
			bitStr[i] = (bits.bits8 & bits.mask8) ? '1' : '0';
			bits.mask8 >>= 1;
		}
	} else if(size == 2){
		bits.bits16 = *(uint16_t*)data;
		bits.mask16 = 1 << 15;
		for(i = 0 ; i < size * 8; i++)
		{
			bitStr[i] = (bits.bits16 & bits.mask16) ? '1' : '0';
			bits.mask16 >>= 1;
		}
	} else if(size == 4){
		bits.bits32 = *(uint32_t*)data;
		bits.mask32 = 1 << 31;
		for(i = 0 ; i < size * 8; i++)
		{
			bitStr[i] = (bits.bits32 & bits.mask32) ? '1' : '0';
			bits.mask32 >>= 1;
		}
	} else if(size == 8){
		bits.bits64 = *(uint64_t*)data;
		bits.mask64 = 1UL << 63;
		for(i = 0 ; i < size * 8; i++)
		{
			bitStr[i] = (bits.bits64 & bits.mask64) ? '1' : '0';
			bits.mask64 >>= 1;
		}
	}
	
	bitStr[i] = '\0';
	return bitStr;
}



#endif //BITWISEALGORITHMS_H