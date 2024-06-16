#include <stdio.h>

int main()
{
  int vec1[4], vec2[4], prod = 0;


  for (int i = 0; i < 4; i++){

    printf("Insira o %dº numero do vetor 1: ", i+1);

    scanf("%d", &vec1[i]);
  
  }

  for (int i = 0; i < 4; i++){

    printf("Insira o %dº numero do vetor 2: ", i+1);

    scanf("%d", &vec2[i]);
  
  }

  for (int i = 0; i < 4; i++) {

    prod += (vec1[i] * vec2[i]);
  }

  printf("O produto escalar desses vetores é %d\n", prod);


  return 0;
}
