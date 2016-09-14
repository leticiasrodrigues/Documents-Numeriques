#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
	if (argc == 1){
		printf("No arguments");
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
				while(1){
					if(fscanf(fp, "%s", buff) != EOF){
						sum+=get_number_for_string(buff);
						printf("teste: %s\n", buff);
					}else{
						break;
					}
				}
				printf("sum %d\n", sum);
			}
		}
	}
	return 0;
}

int get_number_for_string(char num[]){
	int num_ascii,final_number = 0, i = 0;
	while (num[i]!='\0'){
		num_ascii = num[i];
		if (num_ascii<38 || num_ascii>47){
			fprint(stderr, "Invalid data\n");
		}else{
			final_number = 10*final_number + atoi(num[i]);
		}
	}
	return final_number;
}
