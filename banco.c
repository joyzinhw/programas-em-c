#include <stdio.h>

typedef  struct { 

int numero;
double saldo;

} conta;


void iniciar (conta *c, int numero, double saldo){

    c->numero=numero;
    c->saldo = saldo; 
    
}

void imprimir(conta c){

    
    printf("Este é seu saldo: %.2f \n", c.saldo);
    printf("Este é seu numero: %d \n", c.numero);
}

void sacar (conta *c, double valor){

    c->saldo = c-> saldo - valor;
    printf("Este saque foi realizado com sucesso! \n");
    
}

void depositar(conta *c, double valor){

   c->saldo = c-> saldo + valor; 
   printf("Este deposito foi realizado com sucesso!\n ");
    
}

int main (){

    conta c;

    iniciar(&c, 1, 100);
    imprimir(c);
    depositar(&c, 5);
    imprimir(c);
    sacar(&c, 2);
    imprimir(c);
}