#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void secret_message(){
  system("/bin/sh");
}
void buy_flag(){
  printf("pilihan 1\n");
}
void jual_dupa(){
    char buffer[64];
    getchar();
    printf("jenis dupa apa yang kamu mau jual ?\n");
    fflush(stdout);
    gets(&buffer);
    printf("yang kamu jual : \n%s\n",buffer);
}
void menu(){
  printf("+-----------------------+\n");
  printf("TOKO DUPA DEWANDARU\n");
  printf("+-----------------------+\n");
  printf("1. buy flag (999999 stick dupa)\n");
  printf("2. check stock dupa\n");
  printf("2. harga dupa perbatang\n");
  printf("3. jumlah dupa yg kamu miliki\n");
  printf("4. jual dupa\n");
  printf("5. exit\n");
}

int main()
{
  while(1){
  char pilihan;
  menu();
  printf(">>");
  fflush(stdout);

  scanf("%s",&pilihan);
  switch(pilihan){
    case '1' : 
    buy_flag();
    break;
    case '2' :
    printf("pilihan 2");
    break;
    case '3' :
    printf("pilihan 3");
    break;
    case '4' :
    jual_dupa();
    break;
    case '5' :
    printf("makasih udah berkunjung :)");
    exit(0);
    break;
    default :
    fprintf(stderr,"bad request!\n");
    exit(0);
  }
}

}
