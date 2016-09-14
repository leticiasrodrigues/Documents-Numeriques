#include <stdio.h>

int main (int argc, char * argv[])
{
	int i, j;
	for (j=1; j<argc; j++){
		i=0;
		while(argv[j][i] != '\0'){
			i++;
		}
		printf("%s %d \n",argv[j],i);
	}	
	return 0;
}
