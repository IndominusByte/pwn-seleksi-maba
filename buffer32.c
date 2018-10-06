#include <stdio.h>
#include <string.h>
#include <limits.h>

void not_even_called(){
  puts("\nWelcome Garuda Muda\n");
  system("/bin/sh");
}

void tulisan(){
puts("██████╗ ██╗ █████╗ ██████╗ ██╗   ██╗    ███████╗███████╗██████╗ ██╗   ██╗██╗ ██████╗███████╗");
puts("██╔══██╗██║██╔══██╗██╔══██╗╚██╗ ██╔╝    ██╔════╝██╔════╝██╔══██╗██║   ██║██║██╔════╝██╔════╝");
puts("██║  ██║██║███████║██████╔╝ ╚████╔╝     ███████╗█████╗  ██████╔╝██║   ██║██║██║     █████╗  ");
puts("██║  ██║██║██╔══██║██╔══██╗  ╚██╔╝      ╚════██║██╔══╝  ██╔══██╗╚██╗ ██╔╝██║██║     ██╔══╝  ");
puts("██████╔╝██║██║  ██║██║  ██║   ██║       ███████║███████╗██║  ██║ ╚████╔╝ ██║╚██████╗███████╗");
puts("╚═════╝ ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝       ╚══════╝╚══════╝╚═╝  ╚═╝  ╚═══╝  ╚═╝ ╚═════╝╚══════╝\n");
}

int main()
{
  char a[4];
  int b;
  char c[16];

  strcpy(a,"KSL");
  b = 14045;

  tulisan();
  printf("Welcome to Diary Application \n");
  printf("write something : ");
  gets(&c);
    
  if(strlen(c) > 20){
    printf("karakter gak boleh lebih dari 20");
  } else{ 
    if(b == 0x67616c66) not_even_called();
    else printf("isi diary kamu : %s\n",c);
  }
  return 0;
}

