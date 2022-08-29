#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main (){
    int soma1, soma2, var1,mult1,mult2;
    float div1, div2,sub1, sub2, x, y;

    setlocale(LC_ALL,"portuguese");
    printf ("voce quer somar,dividir ou subtrair?: \n\n");
    printf (" 1 - somar\n");
    printf (" 2 - dividir\n");
    printf (" 3 - subtrair\n");
    printf (" 4 - raiz quadrada\n");
    printf (" 5 - multiplicação\n");
    scanf ("%d",& var1);
    
    if (var1 == 1) {
        printf (" vamos somar\n");
        printf (" EXEMPLO: ?? + ?? = ??\n");
        printf ("quais os numeros deseja somar?\n");
        scanf  ("%d", &soma1);
        printf (" \ndigite outro numero: ");
        scanf ("%d", &soma2);
        soma1 = soma1 + soma2;
        printf ("\no resultado é: %d", soma1);
        
    } else if (var1 == 3) {
        printf (" vamos subtrair\n");
        printf ("EXEMPLO: ?? - ?? = ??\n");
        printf (" \nQuais numeros deseja subtrair: ");
        scanf ("%f", &sub1);
        printf (" \ndigite outro numero: ");
        scanf ("%f", &sub2);
        sub1 = sub1 - sub2;
        printf ("\nO resultado é: %.2f", sub1);
    }
    if (var1 == 2) {
        printf ("Vamos Dividir!\n");
        printf ("EXEMPLO: ??  ÷  ?? = ??\n");
        printf ("quais os numeros deseja dividir?\n");
        scanf ("%f", &div1);
        printf ("\ndigite outro numero:");
        scanf ("%f", &div2);
        div1 = div1 / div2;
        printf ("\nO resultado é: %.2f", div1);
        
    } if (var1 == 4){
        printf ("Raiz Quadrada!\n");
        printf ("EXEMPLO: RAIZ QUADRADA DE X = ??\n");
        printf ("\nDeseja descobrir a Raiz Quadrada de qual numero?:  ");
        scanf  ("%f", &x);
        y = sqrt (x);
        printf (" \nO resultado é: %.2f ", y);
    } if (var1 == 5){
        printf (" Vamos Multriplicar!\n");
        printf ("EXEMPLO: 2 x 10 = 20 \n");
        printf (" \nDigite o numero que deseja multiplicar: ");
        scanf ("%d", &mult1);
        printf ("%d x ?? ", mult1);
        printf ("\nEscreva o Próximo numero: ");
        scanf ("%d", &mult2);
        printf ("%d" "x" "%d ", mult1, mult2);
        mult1 = mult1 * mult2;
        printf ("O resultado é: %d", mult1);
    }
        
    
    return 0;
}