
#include <stdio.h> // inclusão de biblioteca - biblioteca de input e output - #include <'nome da biblioteca'>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

#define pi 3 // define todos os textos pi como 3 - #define 'texto' 'valor'

/* comentário
em bolo */

void fun(int num); // protótipo de uma função

int soma_dois(int a) { // declaração de uma função - 'tipo do retorno' 'nome da função'('variaveis') { return 'valor a ser retornado' }
    return a + 2;
}

int funcao(num) // declarção tradicional de uma função
    int num; {
        printf("%d",num);
    }


int main(void) { // função principal do C


    // declaração de VARIAVEIS
    int a,d; // 'tipo da variavel' 'nome da variavel' = 'valor da variavel'
    float b = 5.0; // valores decimais
    double c; // valores decimais precisos
    char p = 'k'; // definicao de caracteres
    char frase[] = "ABUBLE"; 

    extern int l; //

    int vet[3]; // criação de um array - 'tipo do array' 'nome do array'['tamanho do array']

    c = 3.10000;


    // input e output
    printf("Hello Wordl \n"); // mostrar um texto na tela - printf('texto');

    scanf("%d",&a); // leitura de um valor - scanf(" 'tipo do valor' ",&'váriavel a ser armazenado');
    printf("a = %d, b = %f, c = %.2lf, p = \'%c\',%d\n",a,b,c,p,p); // mostra uma váriavel na tela - printf(" 'tipo da variável' ",'variável');

    scanf("%*d"); // leitura de um valor sem armazernar em uma variavel

    int leitura = scanf("%d",&d); // armazerna o numero de caracteres lidos
    printf("leitura = %d\n",leitura);

    //putc("a");
    putchar("a\n"); // impressão de um caractere
    puts("aaaa\n"); // impressao de uma string

    //char carac = getc();
    char carac = getchar();
    printf("caractere = %c\n",carac);
    //gets();

    char string1[10];
    scanf("%s",string1);
    for (int i = 0; i < 10; i++) {
        printf("%c",string1[i]);
    }
    
    char string2[10];
    scanf("%5c",string2);
    for (int i = 0; i < 10; i++) {
        printf("%c",string2[i]);
    }

    /*char string3[10];
    scanf("%[ab]",string3);
    for (int i = 0; i < 10; i++) {
        printf("%c",string3[i]);
    }
    
    char string4[10];
    scanf("%[^a]",string4);
    for (int i = 0; i < 10; i++) {
        printf("%c",string4[i]);
    }*/





    // laços CONDICIONAIS
    if (c) { // se/se então - if ('condição') { } else { }
        printf("%f\n",c);
    } else {
        puts("ERRO\n"); // imprime uma cadeia de caracteres
    }

    if (10 % 2 == 1 ? 0 : 1) // condicional ternário - 'condição' ? 'valor se verdadeiro' : 'valor se falso'
    {
        puts("PAR\n");
    }

    int integer;
    scanf("%d",&integer);
    switch (integer)
    {
    case(2): 
        printf("DOIS\n"); 
    
    case(3): 
        printf("TRES\n");
        break; 

    case(4): 
        printf("QUATRO\n"); 
    
    default: 
        printf("ERRADO\n");
        break; 
    }
    

    // simbolos CONDICIONAIS e operadores RELACIONAIS
    if (10 >= 10 && 5 != 6 || 4 == !5) { // >= - maior ou igual, != - diferente, == - igual
                                         // && - e, || - ou, ! - not
        puts("SIM");
    }
    
    
    

    // laços de REPETIÇÃO
    int i = 0;
    while (3 >= i) { // laço de repetição ilimitado - while ('condição') { }
        vet[i] = i;
        i++; // i = i + 1
        break; // termina o laço
    }
    printf("%d\n",vet[0]);


    for (int j=0, i; i+j<4; j++,i++) { // laço de repetição limitado - for ('valor inicial'; 'condição'; 'incremento no valor') { }
        printf("%d\n",j);
    }
    
    i = -2;
    do // laço de repetição ilimitado com pelo menos 1 execução - do { } while (condição);
    {
        i++;
        continue; // passa para a próxima iteração
    } while (i < 0);
    

    // FUNÇÂO
    int resultado = soma_dois(a); // comando para chamar uma função 'nome da função'('variaveis');
    printf("%d\n",resultado);

    printf("%d\n",funcao(20000));


    int m = 0x15; // definição de um valor hexadecimal
    int n = 015; // definição de um valor octadecimal
    float f = 10e-3; // definição de um valor em notação cientifica
    int g = 2*pi;
    printf("m = %d,n = %d,f = %f,pi = %d\n",m,n,f,g);

    #undef pi // comando para tirar a definição de um texto


    printf("alerta = \a,backspace = \b,\r,\f,tabulação = \t,nulo = \o \n"); // caracteres especiais


    // APONTADORES
    b = 15.0;
    int w[5] = {0,1,2,3,4};
    float *ap = &b; // definição de um apontador apontando para uma variavel - 'tipo da variavel a ser apontada' * 'nome do apontador' = & 'nome da variavel'
    float **pa = &ap; // definição de um apontador que aponta para um apontado - adiciona mais *
    int * bp; // definição de um apontador - 'tipo do apontador' *'nome do apontador';
    bp = (int *) 15024; // armazena o endereço de memória dado - 'nome do apontador' = ('tipo do' *) 'enderço de memória
    float j = *ap;
    int * apont = &w[0]; // apontador para um vetor
    int * apo = &w[2];

    printf("1 - %p\n 2 - %p\n 3 - %p\n",&b,ap,pa);
    printf("4 - %p\n",bp);
    printf("5 - %f\n",j);

    *ap = 20;
    printf("%f\n",b);

    printf("APONTADOR - %d\n",*(apont++)); // posicao apontada + 1
    printf("APONTADOR - %d\n",*(apont+2)); // posicao apontada + n
    printf("%d\n",apo-apont); // numero de elementos entre dois apontadores

    if (apont == apo) { // comparação entre ponteiros
        printf("INGUAL");
    } else {
        if (*apont != '\0') { // compração do valor de um ponteiro
            printf("VALOR - %d\n",*apont);
        }
        
    }
    




    // MODIFICADORES

    // MOD - TAMANHO

    short int pequeno = 10;
    long double grande;
    long long int muito;
    signed int sem;
    unsigned char sinal;

    signed var; // variavel inteira
    long longo; // variavel long int

    printf("%d\n",pequeno);
    printf("%f\n", (float) pequeno); // conversão do tipo de uma expressão - ('tipo a ser convertido') 'expressão'
    printf("%d\n", sizeof(pequeno));

    // MOD - PRECISAO

    printf("%.2d\n",pequeno); // numero de zeros a esquerda
    printf("%.2lf\n",c); // numero de cadas decimais
    printf("%.2s\n",frase); // numero de caracteres

    // MOD - LARGURA

    printf("%10d\n",pequeno);
    printf("%*d\n",pequeno,pequeno); // usa uma variavel pra definir a largura

    // MOD - FLAGS

    printf("%010d\n",pequeno); // zeros no lugar da largura
    printf("%-10d\n",pequeno); // alinha a esquerda
    printf("%+10d\n",pequeno); // coloca sinal no numero
    printf("% 10d\n",pequeno); // espaço pro sinal

    // MOD - ORDEM

    printf("%2$d,%1$c\n",c,pequeno); // ordem

    
    /* %n
    char um,dois;
    printf("NUMERO DE CARACTERES = %n\n");
    scanf("%c,%c,%n",&um,&dois); */


    if (errno != 0) { // variavel que deixa de ser zero quando da algum erro de sistema
        perror("ERRO404"); // imprime uma mensagem caso de algum erro de sistema - perror("mensagem")
    }
    
    
    // Vetores e Matrizes

    int matriz[2][3] = {{1,0,1},{0,5}}; // definição de uma matriz - 'tipo' 'nome'['linhas']['colunas']
    char vetor[10] = "BRUNO";
    char * pessoas[] = {"nome1","nome2"};

    printf("%p %d\n",vetor,*vetor);
    printf("%p %d\n",matriz,*matriz[0]);
    printf("%d %d\n",sizeof(vetor),strlen(vetor)); // tamanho do vetor e tamanho da string
    printf("%s\n",pessoas[1]);
    printf("%d\n",*(matriz[1]+1));
    printf("%d\n",(*(matriz+1))[1]);



    // STRINGS
    char * S = "string";
    printf("%s\n",S); // impressao da string
    printf("%c\n",S[0]); // impressao de um caractere da string

    // STDLIB
    /*
    atoi
    sprintf
    */

    // STRING.h
    /*
    strcmp
    strncmp
    strcat
    strncat
    strcpy
    strchr
    strnchr
    strpbrk
    strspn
    strstr
    */



   // REGISTROS
    struct teste { // declaração de um registro
        int numero;
        char letra;;
    };

    struct teste t1; // criação de um registro

    t1.numero = 19; // definição de valor a um parametro do registro

    printf("%d\n",t1.numero); // chamando o valor de um registro

    // struct teste2 t2 = {int number, char letter}
    
    /*struct {
        int number;
        char letter;
    }  t2, t3;*/
    







    typedef unsigned int natural;
    natural num = 0;
    printf("%d",num);

    return 0;
}