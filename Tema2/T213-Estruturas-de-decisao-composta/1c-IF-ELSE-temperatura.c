int main(){

    float temperatura = 29.0;

    printf("VERIFICADOR DE TEMPERATURA \n");    
    printf("Digite a temperatura ambiente: ");
    scanf("%f", &temperatura);

    if(temperatura >= 22.0){
        printf("Está calor! \n");
    } else {
        printf("Está frio! \n");
    }
    
    printf(" \n");
    printf(" \n");
    
    return 0;
}