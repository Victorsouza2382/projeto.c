#include <stdio.h> 
#include <locale.h>
#include <stdlib.h> 

int idade;             //vari�vel que armazena a idade dos visitantes.
int notapjt1;          //vari�vel que armazena as notas dadas pelos visitantes.
int notapjt2;          //vari�vel que armazena as notas dadas pelos visitantes.
int notapjt3;          //vari�vel que armazena as notas dadas pelos visitantes.
int notapjt4;          //vari�vel que armazena as notas dadas pelos visitantes.

char pjt[4][35];       //vari�vel que l� o nome dos projetos a serem cadastrados.
int cont;
FILE *arq;              

void cadastroPjt(){ 
    printf(">Cadastre o projeto 1:");
    gets(pjt[0]); //L� o nome do projeto 1 e guarda na vari�vel pjt[0]
    setbuf(stdin,NULL);
    putchar(10); 
     
    printf(">Cadastre o projeto 2:");
    gets(pjt[1]); //L� o nome do projeto 2 e guarda na vari�vel pjt[1]
    setbuf(stdin,NULL);
    putchar(10);
        
    printf(">Cadastre o projeto 3:");
    gets(pjt[2]); //Ler o nome do projeto 3 e guarda na vari�vel pjt[2]
    setbuf(stdin,NULL);
    putchar(10); 
     
    printf(">Cadastre o projeto 4:");
    gets(pjt[3]); //L� o nome do projeto 4 e guarda na vari�vel pjt[3]
    setbuf(stdin,NULL);  
    }
     
void cadastroIdade(){ //Bloco que � respons�vel pelo cadastro da idade dos visitantes.
    putchar(10);
    setbuf(stdin,NULL);   
    printf(">insira sua idade:");
    scanf("%d",&idade); //L� a idade do visitante e guarda na vari�vel idade[i] 
}
     
void cadastroNota(){ //Bloco que � respons�vel pelo cadastro das notas pelos visitantes.
    
    	printf(">>Julgue o projeto %s \n",pjt[0]); //Exibe na tela >>Julgue o projeto <nome do projeto cadastrado na vari�vel pjt[0]>
      	printf(">Nota(1 a 5):");
      	scanf("%d",&notapjt1); //L� a nota dada pelo visitante e armazena na vari�vel notapjt1
      	putchar(10);
    if(notapjt1<1 || notapjt1>5)
    do{ printf("VALOR INV�LIDO, REPIDA A OPERA��O!! \n\n \a\a\a");
        printf(">>Julgue o projeto %s \n",pjt[0]); //Exibe na tela >>Julgue o projeto <nome do projeto cadastrado na vari�vel pjt[0]>
      	printf(">Nota(1 a 5):");
      	scanf("%d",&notapjt1); //L� a nota dada pelo visitante e armazena na vari�vel notapjt1
      	putchar(10);              
       }while((notapjt1<1 || notapjt1>5));
    
    	printf(">>Julgue o projeto %s \n",pjt[1]); //Exibe na tela >>Julgue o projeto <nome do projeto cadastrado na vari�vel pjt[0]>
      	printf(">Nota(1 a 5):");
      	scanf("%d",&notapjt2); //L� a nota dada pelo visitante e armazena na vari�vel notapjt1
      	putchar(10);
    if(notapjt2<1 || notapjt2>5)
    do{ printf("VALOR INV�LIDO, REPIDA A OPERA��O!! \n\n \a\a\a");
        printf(">>Julgue o projeto %s \n",pjt[1]); //Exibe na tela >>Julgue o projeto <nome do projeto cadastrado na vari�vel pjt[0]>
      	printf(">Nota(1 a 5):");
      	scanf("%d",&notapjt2); //L� a nota dada pelo visitante e armazena na vari�vel notapjt1
      	putchar(10);              
       }while((notapjt2<1 || notapjt2>5));
    
    	printf(">>Julgue o projeto %s \n",pjt[2]); //Exibe na tela >>Julgue o projeto <nome do projeto cadastrado na vari�vel pjt[0]>
      	printf(">Nota(1 a 5):");
      	scanf("%d",&notapjt3); //L� a nota dada pelo visitante e armazena na vari�vel notapjt1
      	putchar(10);
    if(notapjt3<1 || notapjt3>5)
    do{ printf("VALOR INV�LIDO, REPIDA A OPERA��O!! \n\n \a\a\a");
        printf(">>Julgue o projeto %s \n",pjt[2]); //Exibe na tela >>Julgue o projeto <nome do projeto cadastrado na vari�vel pjt[0]>
      	printf(">Nota(1 a 5):");
      	scanf("%d",&notapjt3); //L� a nota dada pelo visitante e armazena na vari�vel notapjt1
      	putchar(10);              
       }while((notapjt3<1 || notapjt3>5));
   
    	printf(">>Julgue o projeto %s \n",pjt[3]); //Exibe na tela >>Julgue o projeto <nome do projeto cadastrado na vari�vel pjt[0]>
      	printf(">Nota(1 a 5):");
      	scanf("%d",&notapjt4); //L� a nota dada pelo visitante e armazena na vari�vel notapjt1
      	putchar(10);
    if(notapjt4<1 || notapjt4>5)
    do{ printf("VALOR INV�LIDO, REPIDA A OPERA��O!! \n\n \a\a\a");
        printf(">>Julgue o projeto %s \n",pjt[3]); //Exibe na tela >>Julgue o projeto <nome do projeto cadastrado na vari�vel pjt[0]>
      	printf(">Nota(1 a 5):");
      	scanf("%d",&notapjt4); //L� a nota dada pelo visitante e armazena na vari�vel notapjt1
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

    setlocale(LC_ALL,"Portuguese"); //Configura��o da biblioteca <locale.h>
    
    putchar(10);
    puts(".................Bem-Vindos ao programa NOTAS ETB.................");
    puts("------------------------------------------------------------------");
    puts("..................Pressione ENTER para continuar..................");
    putchar(10);
    getch(); //somente para pausar o programa at� o usu�rio apertar qualquer tecla.
    puts("Primeiramente vamos cadastrar os projetos no sistema");
    putchar(10);
    
    cadastroPjt(); //Executa o bloco cadastroPjt.
    putchar(10);
    putchar(10);
    
    arq = fopen("notas.csv","w");
      
    do{ //Fa�a...
    
        puts("....Deseja classificar os projetos apresentados pelo IESB?....");
        puts("................Pressione ENTER para continuar................");
        getch(); //somente para pausar o programa at� o usu�rio apertar qualquer tecla.
        
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
