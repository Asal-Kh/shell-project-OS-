#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
#include <ctype.h>

int main()  
{     
    FILE *file;  
    char ch, *line;  
    size_t len = 0, read;  
    char words[1000][1000], word[20];  
    int i = 0, j, k, maxCount = 0, count;  
      
    file = fopen("myf.txt","r");  
      
    if (file == NULL){  
        printf("File not found");  
        exit(EXIT_FAILURE);  
    }  

    while ((read = getline(&line, &len, file)) != -1) {  
        for(k=0; line[k]!='\0'; k++){  
 
            if(line[k] != ' ' && line[k] != '\n' && line[k] != ',' && line[k] != '.' ){  
                words[i][j++] = tolower(line[k]);  
            }  
            else{  
                words[i][j] = '\0';  
                i++;  
                j = 0;  
            }  
        }  
    }  
      
    int length = i;  
          for(i = 0; i < length; i++){  
        count = 1;  

        for(j = i+1; j < length; j++){  
            if(strcmp(words[i], words[j]) == 0 && (strcmp(words[i]," ") != 0)){  
                count++;  
            }   
        }  

        if(count > maxCount){  
            maxCount = count;  
            strcpy(word, words[i]);  
        }  
    }  
      
    printf("Most repeated word: %s", word);  
    fclose(file);  
      
    return 0;  
}  