#include <stdio.h>

int main(){   
    int pop1 = 1000, pop2 = 2000, opcao, resultado, pontosTuris1 = 10, pontosTuris2 = 20;
    float area1 = 200, area2 = 300, PIB1 = 400, PIB2 = 500, densiDemo1 = 100, densiDemo2 = 100;

printf("Qual quesito deseja comparar?\n");
printf("1. Populacao\n2. Area\n3. PIB\n4. Numero de pontos turisticos\n5. Densidade demografica\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
    printf("Para quesito populacao: \n");
    printf("Carta 1 igual a: %d\n", pop1);
    printf("Carta 2 igual a: %d\n", pop2);
    resultado = pop1 > pop2 ? 1 : 0;
    break;
case 2:
    printf("Para quesito area: \n");
    printf("Carta 1 igual a: %f\n", area1);
    printf("Carta 2 igual a: %f\n", area2);
    resultado = area1 > area2 ? 1 : 0;
    break;
case 3:
    printf("Para quesito PIB: \n");
    printf("Carta 1 igual a: %f\n", PIB1);
    printf("Carta 2 igual a: %f\n", PIB2);
    resultado = PIB1 > PIB2 ? 1 : 0;
    break;
case 4:
    printf("Para quesito numero de pontos turisticos: \n");
    printf("Carta 1 igual a: %d\n", pontosTuris1);
    printf("Carta 2 igual a: %d\n", pontosTuris2);
    resultado = pontosTuris1 > pontosTuris2 ? 1 : 0;
    break;
case 5:
    printf("Para quesito densidade demografica: \n");
    printf("Carta 1 igual a: %f\n", densiDemo1);
    printf("Carta 2 igual a: %f\n", densiDemo2);
    resultado = densiDemo1 < densiDemo2 ? 1 : 0;
    break;
default:
printf("Invalido!\n");
}

if ((resultado == 1) && (resultado ==0)){
    printf("Empate!\n");
}else if (resultado == 1){
    printf("Carta 1 venceu!\n");
}else{
    printf("Carta 2 venceu!\n");
}
}


/*
### NAO CONSEGUI FAZER UMA LOGICA DE DAR EMPATE ###
*/