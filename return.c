#include <stdio.h>

void secret_message()
{
  system("/bin/sh");
}

int main(int argc, char **argv)
{
  char buffer[64];

  gets(buffer);
}
