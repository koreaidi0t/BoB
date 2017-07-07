#include <stdio.h>
#include <time.h>
#include <unistd.h>


int main()
{	
	
	int pid;
	pid=fork();
	if (pid!=0); /*"Parent*/
	else
	{

		while(1)
		{

			FILE *fp;
			fp=fopen("list.txt","a+");
	
			time_t t=time(NULL);
			struct tm tm=*localtime(&t);

			fprintf(fp,"now: %d-%d-%d %02d:%02d:%02d\n", \
						tm.tm_year + 1900, \
						tm.tm_mon+1, \
						tm.tm_mday, \
						tm.tm_hour, \
						tm.tm_min, \
						tm.tm_sec);
			sleep(1);
	
	
			fclose(fp);
		}
	
	}
	return 0;
}

