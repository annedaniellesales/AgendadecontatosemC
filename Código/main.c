
//AGENDA DE CONTATOS 
#include <string.h>
#include <stdlib.h.>
#include <stdio.h>
#include <locale.h> 
#include <ctype.h>

int main(){
setlocale(LC_ALL, "portuguese");/*Maneira de utilizar acento no programa*/
system("chcp 1252 > nul");

int op,i=0;
char remover[100],editar[100],pesquisa[100];

typedef struct{
	char nome[100];
	char rua[50];
	int num_rua;
	int telefone;
		
}contato;
contato func[100]; //Vai armazenar até 100 contatos 


for(i=0; i<100; i++) {
strcpy(func[i].rua, "NULL");
strcpy(func[i].nome, "NULL");
func[i].telefone = 0;
func[i].num_rua = 0;

}

while(1){
printf("\nSUA AGENDA DE CONTATOS\n(1)- Inserir contato\n(2)- Remover contato\n(3)- Editar contato\n(4)- Pesquisar um contato\n(5)- Listar todos os contatos\n(6)- Listar os contatos cujo nome incia com uma data letra\n(7)- Encerra o programa\n");
printf("\n");
printf("Digite a opção desejada:");
scanf("%d",&op);


//OPÇÃO 1 - INSERIR CONTATOS
struct contato;
if(op== 1){
 printf("Insira o nome do contato:");
	for(i=0;i<100;i++){
	setbuf(stdin,NULL);	
	gets(func[i].nome);
	
	if(func[i].rua == 0){
	printf("Digite o telefone do contato:");
		scanf("%d",&func[i].telefone);
		printf("Digite o Endereço\n");
		printf("Digite o nome da rua:");
		setbuf(stdin,NULL);	
		gets(func[i].rua);
		printf("Digite o número da casa/Apartamento:");
		scanf("%d",&func[i].num_rua);
		printf("\n");
		printf("CONTATO SALVO COM SUCESSO!\n");
		printf("%s\n%d\n%s\n%d",func[i].nome,func[i].telefone,func[i].rua,func[i].num_rua);
        break;
}else{
	break;
}
	}
		
}
}

//OPÇÃO 2 - REMOVER CONTATOS
if(op == 2){
printf("Digite o nome do contato que quer remover:");
setbuf(stdin,NULL);
gets(remover);
for(i=0;i<100;i++){
	if(strcmp(remover,func[i].nome)== 0){
		func[i].nome == NULL;
		func[i].rua == NULL;
		func[i].num_rua == NULL;
		func[i].telefone == NULL;
		printf("CONTATO %s EXCLUÍDO COM SUCESSO\n",func[i].nome);
		break;
	}else{
		printf("CONTATO INEXISTENTE! TENTE NOVAMENTE");
		break;
		
	}
}

}
//OPÇÃO 3 - EDITAR UM CONTATO
if(op == 3){
	printf("Digite o nome do contato que quer editar:");
	setbuf(stdin,NULL);
	gets(editar);
	for(i=0;i<100;i++){
	if(strcmp(editar,func[i].nome)== 0){
      printf("%s\n%d\n%s\n%d",func[i].nome,func[i].telefone,func[i].rua,func[i].num_rua);
      printf("\nEdite o nome do contato:");
      gets(func[i].nome);
      printf("Edite o telefone do contato:");
      scanf("%d",&func[i].telefone);
      printf("Edite o endereço\nEdite o nome da rua:");
      setbuf(stdin,NULL);
      gets(func[i].rua);
      printf("Edite o número da rua:");
      scanf("%d",&func[i].num_rua);
      printf("%s\n%d\n%s\n%d",func[i].nome,func[i].telefone,func[i].rua,func[i].num_rua);
      printf("\nCONTATO SALVO COM SUCESSO!");
      break;
	}else{
		printf("CONTATO INEXISTENTE! TENTE NOVAMENTE");
		break;
	}
}
}
//OPÇÃO 4 - PESQUISAR UM CONTATO PELO NOME
if(op == 4){
	printf("Digite o nome do contato que deseja pesquisar:");
	setbuf(stdin,NULL);
	gets(pesquisa);
	for(i=0;i<100;i++){
		if(strcmp(pesquisa,func[i].nome)== 0){
			printf("%s\nTelefone:%d\nRua:%s\nn°:%d",func[i].nome,func[i].telefone,func[i].rua,func[i].num_rua);
			break;
		}else{
			printf("CONTATO INEXISTENTE! TENTE NOVAMENTE");
		}
	}
}
//OPÇÃO 5 - PESQUISAR UM CONTATO PELA LETRA DO NOME
if(op == 5){
	printf("SUA LISTA DE CONTATOS COMPLETA!\n");
	for(i=0;i<10;i++){
	if(func[i].nome == 0){
		
	}else{
	printf("%s\n",func[i].nome);
	}
	}
}
}