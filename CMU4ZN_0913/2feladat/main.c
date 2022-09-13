#include <stdio.h>
#include <stdlib.h>
void feladat2();

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
