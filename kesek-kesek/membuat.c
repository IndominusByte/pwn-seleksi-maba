//gcc -fno-stack-protector -no-pie -z execstack -fno-builtin -mpreferred-stack-boundary=2 -m32 membuat.c -o membuat
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
  char buffer[64];
  char vuln[64];
  printf("masukan nama anda : ");
  fflush(stdout); 
  gets(buffer);
  printf("selamat datang %s\n",buffer);
  printf("buffer ada di : [%p]\n",vuln);
  fflush(stdout); 
  gets(vuln);
}
