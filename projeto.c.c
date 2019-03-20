#include <stdio.h> 
#include <locale.h>
#include <stdlib.h> 

int idade;             //variável que armazena a idade dos visitantes.
int notapjt1;          //variável que armazena as notas dadas pelos visitantes.
int notapjt2;          //variável que armazena as notas dadas pelos visitantes.
int notapjt3;          //variável que armazena as notas dadas pelos visitantes.
int notapjt4;          //variável que armazena as notas dadas pelos visitantes.

char pjt[4][35];       //variável que lê o nome dos projetos a serem cadastrados.
int cont;
FILE *arq;              

void cadastroPjt(){ 
    printf(">Cadastre o projeto 1:");
    gets(pjt[0]); //Lê o nome do projeto 1 e guarda na variável pjt[0]
    setbuf(stdin,NULL);
    putchar(10); 
     
    printf(">Cadastre o projeto 2:");
    gets(pjt[1]); //Lê o nome do projeto 2 e guarda na variável pjt[1]
    setbuf(stdin,NULL);
    putchar(10);
        
    printf(">Cadastre o projeto 3:");
    gets(pjt[2]); //Ler o nome do projeto 3 e guarda na variável pjt[2]
    setbuf(stdin,NULL);
    putchar(10); 
     
    printf(">Cadastre o projeto 4:");
    gets(pjt[3]); //Lê o nome do projeto 4 e guarda na variável pjt[3]
    setbuf(stdin,NULL);  
    }
     
void cadastroIdade(){ //Bloco que é responsável pelo cadastro da idade dos visitantes.
    putchar(10);
    setbuf(stdin,NULL);   
    printf(">insira sua idade:");
    scanf("%d",&idade); //Lê a idade do visitante e guarda na variável idade[i] 
}
     
void cadastroNota(){ //Bloco que é responsável pelo cadastro das notas pelos visitantes.
    
    	printf(">>Julgue o projeto %s \n",pjt[0]); //Exibe na tela >>Julgue o projeto <nome do projeto cadastrado na variável pjt[0]>
      	printf(">Nota(1 a 5):");
      	scanf("%d",&notapjt1); //Lê a nota dada pelo visitante e armazena na variável notapjt1
      	putchar(10);
    if(notapjt1<1 || notapjt1>5)
    do{ printf("VALOR INVÁLIDO, REPIDA A OPERAÇÃO!! \n\n \a\a\a");
        printf(">>Julgue o projeto %s \n",pjt[0]); //Exibe na tela >>Julgue o projeto <nome do projeto cadastrado na variável pjt[0]>
      	printf(">Nota(1 a 5):");
      	scanf("%d",&notapjt1); //Lê a nota dada pelo visitante e armazena na variável notapjt1
      	putchar(10);              
       }while((notapjt1<1 || notapjt1>5));
    
    	printf(">>Julgue o projeto %s \n",pjt[1]); //Exibe na tela >>Julgue o projeto <nome do projeto cadastrado na variável pjt[0]>
      	printf(">Nota(1 a 5):");
      	scanf("%d",&notapjt2); //Lê a nota dada pelo visitante e armazena na variável notapjt1
      	putchar(10);
    if(notapjt2<1 || notapjt2>5)
    do{ printf("VALOR INVÁLIDO, REPIDA A OPERAÇÃO!! \n\n \a\a\a");
        printf(">>Julgue o projeto %s \n",pjt[1]); //Exibe na tela >>Julgue o projeto <nome do projeto cadastrado na variável pjt[0]>
      	printf(">Nota(1 a 5):");
      	scanf("%d",&notapjt2); //Lê a nota dada pelo visitante e armazena na variável notapjt1
      	putchar(10);              
       }while((notapjt2<1 || notapjt2>5));
    
    	printf(">>Julgue o projeto %s \n",pjt[2]); //Exibe na tela >>Julgue o projeto <nome do projeto cadastrado na variável pjt[0]>
      	printf(">Nota(1 a 5):");
      	scanf("%d",&notapjt3); //Lê a nota dada pelo visitante e armazena na variável notapjt1
      	putchar(10);
    if(notapjt3<1 || notapjt3>5)
    do{ printf("VALOR INVÁLIDO, REPIDA A OPERAÇÃO!! \n\n \a\a\a");
        printf(">>Julgue o projeto %s \n",pjt[2]); //Exibe na tela >>Julgue o projeto <nome do projeto cadastrado na variável pjt[0]>
      	printf(">Nota(1 a 5):");
      	scanf("%d",&notapjt3); //Lê a nota dada pelo visitante e armazena na variável notapjt1
      	putchar(10);              
       }while((notapjt3<1 || notapjt3>5));
   
    	printf(">>Julgue o projeto %s \n",pjt[3]); //Exibe na tela >>Julgue o projeto <nome do projeto cadastrado na variável pjt[0]>
      	printf(">Nota(1 a 5):");
      	scanf("%d",&notapjt4); //Lê a nota dada pelo visitante e armazena na variável notapjt1
      	putchar(10);
    if(notapjt4<1 || notapjt4>5)
    do{ printf("VALOR INVÁLIDO, REPIDA A OPERAÇÃO!! \n\n \a\a\a");
        printf(">>Julgue o projeto %s \n",pjt[3]); //Exibe na tela >>Julgue o projeto <nome do projeto cadastrado na variável pjt[0]>
      	printf(">Nota(1 a 5):");
      	scanf("%d",&notapjt4); //Lê a nota dada pelo visitante e armazena na variável notapjt1
      	putchar(10);              
       }while((notapjt4<1 || notapjt4>5));   
    
}  
     
void mostrarResultado(){
    
    puts("..............................RESUMO..............................");
    printf(">Idade: %d \n",idade); //mostra na tela a idade cadastrada pelo visitante.
    printf(">Nota para o projeto %s: [%d] \n",pjt[0],notapjt1); //mostra na tela a nota que o visitante julgou ao primeiro projeto cadastrado
    printf(">Nota para o projeto %s: [%d] \n",pjt[1],notapjt2); //mostra na tela a nota que o visitante julgou ao segundo projeto cadastrado
    printf(">Nota para o projeto %s: [%d] \n",pjt[2],notapjt3); //mostra na tela a nota que o visitante julgou ao terceiro projeto cadastrado
    printf(">Nota para o projeto %s: [%d] \n",pjt[3],notapjt4); //mostra na tela a nota que o visitante julgou ao quarto projeto cadastrado
    puts("..................................................................");
    	

        }
       
void main(){ //BLOCO PRINCIPAL

    setlocale(LC_ALL,"Portuguese"); //Configuração da biblioteca <locale.h>
    
    putchar(10);
    puts(".................Bem-Vindos ao programa NOTAS ETB.................");
    puts("------------------------------------------------------------------");
    puts("..................Pressione ENTER para continuar..................");
    putchar(10);
    getch(); //somente para pausar o programa até o usuário apertar qualquer tecla.
    puts("Primeiramente vamos cadastrar os projetos no sistema");
    putchar(10);
    
    cadastroPjt(); //Executa o bloco cadastroPjt.
    putchar(10);
    putchar(10);
    
    arq = fopen("notas.csv","w");
      
    do{ //Faça...
    
        puts("....Deseja classificar os projetos apresentados pelo IESB?....");
        puts("................Pressione ENTER para continuar................");
        getch(); //somente para pausar o programa até o usuário apertar qualquer tecla.
        
        cadastroIdade(); //Execulta o bloco cadastroIdade.
        putchar(10);
        
		cadastroNota(); //Executa o bloco cadastroNota.
        putchar(10);
        
		mostrarResultado(); //Executa o bloco mostrarResultado
		cont++;
        fprintf(arq,"%d;%d;%d;%d;%d;\n",idade, notapjt1, notapjt2, notapjt3, notapjt4);		
 	
	        
        putchar(10);putchar(10);putchar(10);
     }while(1); //enquanto cont for menor que 200.
     
     fclose(arq);
    }     
