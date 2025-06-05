int main(){
    
    int idade1, idade2;

    printf("COMPARAR AS IDADES DE DUAS PESSOAS \n");    

    printf("Digite a idade da Pessoa 1:");
    scanf("%d", &idade1);

    printf("Digite a idade da Pessoa 2:");
    scanf("%d", &idade2);

    if (idade1 > idade2) {
        printf("Pessoa 1 é mais velha que Pessoa 2 \n");
    } else {
        if (idade1 < idade2) {
        printf("Pessoa 1 é mais nova que Pessoa 2 \n");
        }    
    }

    if (idade1 == idade2) {
        printf("Pessoa 1 e a Pessoa 2 tem ambas a mesma idade! \n");
    } else{  
        printf("Pessoa 1 e a Pessoa 2 tem idades diferentes! \n");
    }  

    printf(" \n");
    printf(" \n");

    return 0;
}