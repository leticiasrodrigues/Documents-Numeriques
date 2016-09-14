#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
	if (argc == 1){
		printf("No arguments\n");
	} else {
		int j = 1;
		FILE *fp;
		for (j; j<argc; j++){
			fp = fopen(argv[j],"r");
			if (fp == NULL){
				fprintf(stderr, "File not found\n");
			} else {
				char buff[255];
				int sum = 0;
				while(fscanf(fp, "%s", buff) != EOF){
					sum+=atoi(buff);
				}
				printf("sum for file %s: %d\n", argv[j],sum);
			}
		}
	}
	return 0;
}
