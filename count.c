
#include <stdio.h>
int main()
{
	FILE * pfile;
	pfile=fopen ("myf.txt","r");
	int count = 0;
	char c;
	if (pfile == NULL){
		printf("Could not open file %s","myf.txt" );
		return 0;
	}
	while(!feof(pfile))	{
 	c = fgetc(pfile);
 		if(c == '\n') {
  	 count++;
 		}
	}
	count++;
	fclose(pfile);

	printf("The file %s has %d lines\n ", "myf.txt", count);
	return 0;
}

