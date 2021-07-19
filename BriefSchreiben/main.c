#include <stdio.h>
//Frage: In Namentext.txt Namen und text in zwei Zeile?
void writeLetter(char name[], char text[]);
int main() {
    FILE *fp;
    int numOfGast = 4;
    int i;
    char nameAry[numOfGast][10], text[100];
    fp = fopen("NamenText.txt", "r");
    if(fp == 0){
        printf("Die Datei NamenText.txt existiert nicht.");
    }else{
        printf("Erfolg");
        for( i=0; i<numOfGast; i++){fscanf(fp, "%s", nameAry[i]);}
        fgets(text, 100, fp);  // read a line, store in text
    }
    for( i=0; i<numOfGast; i++){ writeLetter(nameAry[i], text);}
    return 0;
}

void writeLetter(char name[], char text[]){
    FILE *fp;
    char dateiEnd[10] = "Brf.txt";
    char dateiName[20];
    sprintf(dateiName,"%s%s",name,dateiEnd); // create file name: eg: SaraBrf.txt
    fp = fopen( dateiName, "w");
    if(fp==0){
        printf("Die Datei wird nicht erzeugt.");
    } else{
        fprintf(fp, text, name);
    }
    fclose(fp);
}

