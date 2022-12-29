#include<stdio.h>
#include<ctype.h>

// removing spaces
int main()
{
	FILE * pfile;
	int a;	
	pfile = fopen ("myf.txt","r");
	if (pfile)
	{
		do {
			a = fgetc (pfile);
			if ( isgraph(a) ) putchar (a);
		} while (a != EOF);
		fclose (pfile);
	}
	printf("\n\n");
	return 0;
}
