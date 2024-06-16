#include <stdio.h>

int main()
{

  int arr[5], maior = 0, menor, sum = 0;
  double media = 0;

  for (int i = 0; i < 5; i++) {

    printf("Insisra o %dº numero do vetor:\n", i + 1);
    scanf("%d", &arr[i]);

    if (arr[i] > maior) {
      maior = arr[i];
    }

    sum += arr[i];
  }

  menor = maior;
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] < menor) {
      menor = arr[i];
    
    }
  }

  media = (double)sum / 5.0f;

  printf("Vetor = { ");
  for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
  printf(" }\n");

  printf("Menor = %d\nMaior = %d\nMédia = %.2lf\n", menor, maior, media);

  return 0;
}
