#include <stdio.h>
#include <stdlib.h>
int main(){
    char ch;
    int wordCount,lineCount,charCount;
    FILE *fi;
    fi = fopen("input.txt","r");
    wordCount = lineCount = charCount = 0;
    while((ch = fgetc(fi)) != EOF){
        charCount++;
        if(ch == '\n')
        lineCount++;

        if(ch == ' ' || ch == '\t' || ch == '\n')
        wordCount++;
    }
    if(charCount > 0){
        wordCount++;
        lineCount++;
    }


    printf("Total characters = %d\n",charCount);
    printf("Total words = %d\n",wordCount);
    printf("Total lines = %d\n",lineCount);
    fclose(fi);
    return 0;
}