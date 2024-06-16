#include <stdbool.h>
#include <stdio.h>

int main() {
  int arr[10], qtd_eq = 0, p = 0, equals[10];
  bool in_eq = false;

  for (int i = 0; i < 10; i++) {

    printf("Insisra o %dº numero do vetor:\n", i + 1);
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < 10; i++) {

    for (int j = 0; j < 10; j++) {
      if (arr[j] == arr[i]) {
        qtd_eq++;
      }
    }

    for (int o = 0; o < p; o++) {

      if (arr[i] == equals[o]) {
        in_eq = true;
      }
    }

    if (qtd_eq >= 2 && !in_eq) {
      printf("Temos %d numeros %d\n", qtd_eq, arr[i]);
      
      equals[p] = arr[i];
      p++;
    }
    qtd_eq = 0;
    in_eq = false;
  }

  return 0;
}
