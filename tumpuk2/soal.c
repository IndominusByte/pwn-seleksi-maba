//gcc -m32 -mpreferred-stack-boundary=2 -fno-stack-protector -no-pie -fno-builtin -o tumpuk2 soal.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *pager ="/";
char *bin = "bin";
char *sh  = "sh";
char binsh[8];
 
void flag(int y,int w){
    if( y == 0xfacebabe && w == 0xbeefdead)
        system(binsh);
}
 
void ramuan(int x, char *dest, char *src){
    if( x == 0xdeadbeef )
        strcpy(dest,src);
}
 
void vuln(){
    char buf[64];
    printf("Masukkan flag : ");
    fflush(stdout);
    gets(buf);
    printf("flag adalah %s\n", buf);
}
 
int main(){
    vuln();
}
