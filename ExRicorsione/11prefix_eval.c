#include <stdio.h>
#include <string.h>

static char *a = "* + 5 12 3";
static int i;

int eval();

int main() {
  i = 0 ;
  printf("Result = %d", eval());
  return 0;
}

int eval() {
  int x = 0;

  while (a[i] == ' ')
    i++;

  if (a[i] == '+') {
    i++;
    return eval() + eval ();
  }
  if (a[i] == '*') {
    i++;
    return eval() * eval ();
  }

  while ((a[i] >= '0') && (a[i] <= '9'))
    x = 10 * x + (a[i++]-'0') ;

  return x;
}

