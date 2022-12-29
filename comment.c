#include <stdio.h>
#include <string.h>
int main(){
	FILE * pfile;
	pfile=fopen ("myf.txt","r");
		if (pfile == NULL){
		printf("Could not open file %s","myf.txt" );
		return 0;
	}
		char line[256];
    	while (fgets(line, sizeof(line), pfile)) {
    		if(!(strstr(line, "#"))){
				printf("%s", line);
   			}
    	}

    fclose(pfile);

    return 0;
}

