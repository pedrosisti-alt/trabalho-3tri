int main()
{
    int numeros;
    printf("Digite um Numero: ");
    scanf("%d",&numeros);
    if(numeros>0){
        printf("Numero positivo\n");
    }else if(numeros<0){
        printf("Numero negativo\n");
    }else if(numeros==0){
        printf("Numero é zero\n");
    }
    
    if(numeros%2==0){
        printf("Numero é par");
    }else{
        printf("Numero é impar");
    }
}
