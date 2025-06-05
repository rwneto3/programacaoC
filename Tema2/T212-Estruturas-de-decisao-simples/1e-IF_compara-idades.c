int main(){
    /*
    if (condicao) {
        //bloc de codigo a ser executado
        comando1
        comando2
    }
            
    */
    int idade1 = 35, idade2 = 40;

    if (idade1 > idade2) {
        printf("Pessoa 1 é mais velha que Pessoa 2 \n");
    }

   if (idade1 < idade2) {
        printf("Pessoa 1 é mais nova que Pessoa 2 \n");
    }

    if (idade1 == idade2) {
        printf("Pessoa 1 e a Pessoa 2 tem ambas a mesma idade! \n");
    }  
       
    if (idade1 != idade2) {
       printf("Pessoa 1 e a Pessoa 2 tem idades diferentes! \n");
    }  
    return 0;
}