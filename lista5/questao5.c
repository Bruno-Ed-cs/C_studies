#include <stdio.h>

int main(){

    int grenais = 0, qtd = 0, vGremio = 0, vInter = 0, empates = 0, t1, t2, opt;
    
    do{

        scanf("%d %d", &t1, &t2);

        if (t1 == t2){
            empates++;
        } else if (t1 > t2) {
            vInter++;
        } else if (t1 < t2) {
            vGremio++;
        }

        qtd++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &opt);

    }while(opt != 2);

    printf("%d Grenais\n", qtd);
    printf("Inter:%d\n", vInter);
    printf("Gremio:%d\n", vGremio);
    printf("Empates:%d\n", empates);
    
    if (vGremio > vInter){

        printf("Gremio venceu mais\n");
    } else {
        printf("Inter venceu mais\n");
    }

    return 0;
}
