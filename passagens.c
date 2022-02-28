#include <stdio.h>

int main(int argc, char **argv)
{
	int janela[15], corredor[15], i, op, assento, num;
	
	for(i=0;i<15;i++){
		janela[i] = 0;
		corredor[i] = 0;
		}
		
		do{
			printf("1 - Comprar\n");
			printf("2 - Ver mapa do onibus\n");
			printf("3 - Sair\n");
			scanf("%d", &op);
			
			switch(op){
				case 1:
					printf("1 - Janela\n");
					printf("2 - Corredor\n");
					scanf("%d", &assento);
					if(assento == 1){
						printf("Escolha o numero da poltrona: ");
						scanf("%d", &num);
						if(janela[num] == 0){
							printf("Comprado\n");
							janela[num] = 1;
							}else if(janela[num] == 1){
								printf("Banco Ocupado\n");
								}
								
								if(assento == 2){
									printf("Escolha o numero da poltrona: ");
									scanf("%d", &num);
									if(corredor[num] == 0){
										printf("Comprado\n");
										}else if(corredor[num] == 1){
											printf("Banco Ocupado\n");
											}
									}
						}
				break;
				case 2:
					for(i=1;i<=15;i++){
						printf("JANELA | CORREDOR\n");
						if(janela[i] == 0){
							printf("Livre\n");
							}else if(janela[i] == 1){
								printf("Ocupado\n");
								}
								if(corredor[i] == 0){
									printf("Livre\n");
									}else if(corredor[i] == 1){
										printf("Ocupado\n");
										}
						}
						
				break;
				}
			}while(op != 3);
		
	return 0;
}

