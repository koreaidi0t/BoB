#define DO1(buf,i)  {adler += (buf)[i];sum2 += adler;}
#define DO2(buf,i)  DO1(buf,i); DO1(buf,i+1);
#define DO4(buf,i)  DO2(buf,i); DO2(buf,i+2);
#define DO8(buf,i)  DO4(buf,i); DO4(buf,i+4);
#define DO16(buf)   DO8(buf,0); DO8(buf,8);
#include <stdio.h>

int main()
{
	int buf[16]={0,0,};
	int adler=0;
	int sum2=0;

//	for(int i=0;i<8;i++)
//		printf("buf: %d\n",buf[i]);
	printf("\n");

//	printf("adler: %d\nsum2: %d\n",adler,sum2);
	
	DO16(buf);

	printf("adler: %d\nsum2: %d\n",adler,sum2);

//	for(int i=0;i<8;i++)	
//		printf("buf: %d\n",buf[i]);
//	printf("\n");
	return 0;
}

