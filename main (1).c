#include<stdio.h>
#include<stdlib.h>
struct trabalho{
		char nome[20];
		int age;
		int conta;
		float valor;
	}av[5];

	void menu(){int x;
	
    x= 0;

	for(x=0;x<10;x++){
		if(av[x].age==0){
		    
		    
		       printf("\nQual eh seu nome :");
        scanf("%f",av[x].nome);
        
        printf("Qual eh sua agencia :");
        scanf(" %d", &av[x].age);
        fflush(stdin);

 

        printf("Numero da sua conta:");
        scanf(" %d", &av[x].conta);
        fflush(stdin);
        printf("Seu saldo começa com 0\n");
		
		x=10;
	}
	}  
	}

    void fechar(){ int i;
	i=1;
	int agencia;
	int conta;
	for(i=0;i<10;i++){
      printf("\nQual é sua agencia ");
	  scanf("%d",&agencia);
	  printf("\nQual é sua conta ");
	  scanf("%d",&conta);
	if(agencia==av[i].age){
		if(conta==av[i].conta){
			av[i].conta=0;
			av[i].age=0;
	i=10;	}
	}
	}
	}		
		

	void depo(){ int x;
	x=0;
		 int agencia;
		float saldo;
		int conta;
		
		 printf("\nQual é sua agencia ");
	      scanf("%d",&agencia);
		printf("\ndigite sua conta ");
		scanf("%i",&conta);
		fflush(stdin);
	for(x=0;x<10;x++){
		if(agencia==av[x].age){
			if(conta=av[x].conta){
				
				printf("\nNao pode depositar 0");
		        printf("\no quanto voce deseja depositar ");
		        scanf("%f",&saldo);
		        fflush(stdin);
		        if(saldo==0){
	 	        printf("Nao é possivel fazer o deposito");
				}else{
				av[x].valor=av[x].valor+saldo;
			x=10; }
		          }
	    
         }
	}
	}
	void sacar(){ int cont;
	     cont=0;
		 int agencia;
		float sacar;
		int conta;
		 printf("\nQual é sua agencia ");
	  scanf("%d",&agencia);
		printf("\ndigite sua conta ");
		scanf("%i",&conta);
		fflush(stdin);
	if(agencia==av[0].age || agencia==av[1].age||agencia==av[2].age||agencia==av[3].age||agencia==av[4].age||agencia==av[5].age||agencia==av[6].age||agencia==av[7].age||agencia==av[8].age||agencia==av[9].age){
			if(conta==av[0].conta||conta==av[1].conta||conta==av[2].conta||conta==av[4].conta||conta==av[5].conta||conta==av[7].conta||conta==av[8].conta||conta==av[9].conta){
		  printf("\no quanto voce deseja sacar ");
		  scanf("%f",&sacar);
		  fflush(stdin);
	 	  av[0].valor=av[0].valor-sacar;}
	}
	}

	void consultar(){ int x;
	 int agencia;
	 int conta;
	    printf("Qual é o numero da sua agencia ");
		scanf("%d",&agencia);
		printf("\nDigite o numero da sua conta ");
		scanf("%d",&conta);
		if(agencia==av[0].age || agencia==av[1].age||agencia==av[2].age||agencia==av[3].age||agencia==av[4].age||agencia==av[5].age||agencia==av[6].age||agencia==av[7].age||agencia==av[8].age||agencia==av[9].age){
			if(conta==av[0].conta||conta==av[1].conta||conta==av[2].conta||conta==av[4].conta||conta==av[5].conta||conta==av[7].conta||conta==av[8].conta||conta==av[9].conta){
		printf("Tem %.2f Reais", av[0].valor);
	}
		}
	}

	void transferir(){ int trans,x,origem,destino;
        x=0;
	  do{  printf("Qual conta de origem ");
		scanf("%d",&origem);
		fflush(stdin);
		printf("\nQual conta de destino ");
		scanf("%d",&destino);
		fflush(stdin);
	    printf("deseja transferir quanto ?");
		scanf("%f",&trans);
		fflush(stdin);
		for(x=0;x<10;x++){
		    if(origem==av[x].conta){
			 av[x].valor=av[x].valor-trans;
		    }
			if(destino==av[x].conta){
		     av[x].valor=av[x].valor+trans;
		     x=10;
		   }
		}}while(x<10);
	}
	
	
	
	void listagem(){ int x;
		for(x=0;x<10;x++){
			printf("\nOs Nomes dos correntistas eh %s", av[x].nome);
			printf("\nOs numeros das contas eh %d",av[x].conta);
			printf("\nO numeros das agencia eh %d",av[x].age);
			printf("\n saldo da conta é %.2f",av[x].valor);
		}
	}
    
	void sa(){
		printf(" Ate mais ;)");
		abort();

	}
int main (){

system("clear");
    int f,a,sair;
    f=0;
	while(f==0){
	    printf("\nDigite 1 para acessar as opcoes do banco e qualquer outro para fechar");
	    scanf("%d",&sair);
	    	fflush(stdin);
	    if(sair!=1){
	        printf("ate a proxima");
	        break;
	    }
	    if(sair==1){
	printf("\nO que deseja fazer ?");
    printf("\nAbrir conta digite 1 ");
	printf("\nEncerrar conta digite 2");
	printf("\nSe quiser depositar dinheiro digite 3");
    printf("\nSe quiser sacar o dinheiro digite 4");
	printf("\nSe quiser consultar o saldo digite 5 ");
	printf("\nSe quiser transferir dinherio digite 6");
	printf("\nSe quiser a listagem  de contas digite 7");
	printf("\nSe quiser sair digite  digite 8");
	printf("\nDejesa voltar para o inicio digite 1 se deseja fechar qualquer outro numero");
	
	printf("\nO que deseja fazer ");
	scanf("%d",&a);
	fflush(stdin);
      switch (a)
	  {
	  case 1 :menu();
	  break;
	 
	  case 2: fechar();
	  break;
	  case 3: depo();
	  break;
	  case 4:sacar();
	  break;
	  case 5:consultar();
	  break;
	  case 6:transferir();
	  break;
	  case 7:listagem();
	  break;
      case 8:sa();
	  break;
	  
	fflush(stdin);
	  }
}
	}
	return 0;

}