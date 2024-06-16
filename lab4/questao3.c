#include <stdio.h>
#include <stdbool.h>

int main()
{

  int vec[5], search;
  bool exists = false;
  

  for (int i = 0; i < 5; i++) {

    printf("Insisra o %dº numero do vetor:\n", i + 1);
    scanf("%d", &vec[i]);

  }

  printf("Informe um valor para buscar: ");
  scanf("%d", &search);
  

  for (int i = 0; i < 5; i++) {

    if (vec[i] == search)
    {
      printf("Número encontrado no index %d\n", i);
      exists = true;
    }   }

  if(!exists) printf("Número não encontrado\n");

  return 0;
}
