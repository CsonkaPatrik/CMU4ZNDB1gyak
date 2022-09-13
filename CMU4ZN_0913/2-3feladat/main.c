#include <stdio.h>
#include <stdlib.h>
void feladat2();
void feladat3();

int main()
{
    feladat2();

    return 0;
}

void feladat2(){
    FILE *fp;
    char ch;
    char nev[50];
    printf("Nev:");
    scanf("%s", nev);
    fp = fopen(nev, "w");
    printf("uzenet:");
    while((ch = getchar())!='#'){
        putc(ch,fp);
    }
    fclose(fp);
    fp = fopen(nev, "r");
    while ((ch = getc(fp)) != EOF){
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}

void feladat2(char *nev, char *nev2){
    FILE *fp1, *fp2;
    char ch;
    int pos;

    if ((fp1 = fopen(nev1,"r")) == NULL)
    {
        printf("\nNem megnyithato formatum.");
        return;
    }
    else
    {
        printf("\nFile megnyitasa... MEGNYITVA!\n");
    }

    fp2 = fopen(nev2,"w");
    fseek(fp1,0L,SEEK_END);
    pos = ftell(fp1);
    fseek(fp1,0L,SEEK_SET);
    while(pos--){
        ch = fgetc(fp1);
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
