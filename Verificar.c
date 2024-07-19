#include <stdio.h>
#include <locale.h>


int verificar(int i){

if (i >= 18 )
    return 1;
else{
    return 0;
}
}


int main(){
setlocale(LC_ALL,"");

int idade;

printf("Digite sua idade: \n");
scanf("%d",&idade);

int resultado = verificar(idade);

if(resultado == 1)
   printf("Você é maior de idade! \n");
else {
    printf("Você é menor de idade! \n");

}

return 0;
}

