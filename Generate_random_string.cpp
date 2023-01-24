#include <iostream>      /* cout, cin */
#include <stdlib.h>     /* malloc, free, rand */
using namespace std;

int main ()
{
  int i,n;
  char * buffer;

  cout<<"How long do you want the string? ";
  cin >> i;

  buffer = (char*) malloc (i+1);
  if (buffer==NULL) exit (1);

  for (n=0; n<i; n++)
    buffer[n]=rand()%26+'a';
  buffer[i]='\0';

  cout<<"Random string: " << buffer;
  free (buffer);

  return 0;
}
