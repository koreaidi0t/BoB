#define CHOP(a) \
    do { \
        unsigned long tmp = a >> 16; \
     	 a &= 0xffffUL; \
        a += (tmp << 4) - tmp; \
    } while (0)






#include <stdio.h>

int main()
{
	unsigned long a=100000;
	CHOP(a);
	printf("%d",a);

	return 0;

}
	
