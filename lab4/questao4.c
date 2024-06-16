#include <stdio.h>

int main()
{
  int vec[6], mirror[6];

  for (int i = 0, j = 5; i < 6; i++, j--) {

    printf("Insira o %dº numero do vetor: ", i+1);

    scanf("%d", &vec[i]);
    mirror[j] = vec[i];
  
  }


  printf("Vetor normal = { ");
  for (int i = 0; i < 6; i++) printf("%d ", vec[i]);
  printf(" }\n");


  printf("Vetor espelho = { ");
  for (int i = 0; i < 6; i++) printf("%d ", mirror[i]);
  printf(" }\n");

  return 0;
}
