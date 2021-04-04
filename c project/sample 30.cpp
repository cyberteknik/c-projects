#include <stdio.h>
#include <stdlib.h>

 main()

 {
 int i,a;
 char metin[1000];

  printf("Metni giriniz:");
  gets(metin);

  for(a=0;metin[a]!='\0';a++){
  printf("%c",metin[a]);
  }

  printf("\nMetnin Tersi:");

  for(i=a;i>=0;i--)
  {

  printf("%c",metin[i]);

 }

return 0;
 }
