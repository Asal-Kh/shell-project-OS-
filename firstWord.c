#include <stdio.h>
#include <stdlib.h> 
int main() {
	char word[30];
	FILE * pfile;
	pfile=fopen ("myf.txt","r");;
	if (pfile == NULL){
		printf("Could not open file %s","myf.txt" );
		return 0;
	} else {
   		while (!feof(pfile)) {
        	fscanf(pfile,"%s%*[^\n]",word);
        	printf("first word: %s\n", word);
       		strcpy(word,"");
    	}
	}
	fclose(pfile);
return 0;
}
