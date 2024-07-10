#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_CLIENTES 100
#define TAM_NOME 50
#define MAX_PRODUTOS 5

// Arrays
char nomes[MAX_CLIENTES][TAM_NOME];
int mesas[MAX_CLIENTES];
char produtos[MAX_PRODUTOS][TAM_NOME] = {"Casquinha", "Sundae", "Milkshake", "A�a�", "Picol�"};
float precos[MAX_PRODUTOS] = {5.0, 10.0, 12.0, 15.0, 3.0};
int pedidos_cliente[MAX_CLIENTES][MAX_PRODUTOS];

int main() {
    int escolha, subescolha, mesa, confirmacao, num_clientes = 0, num_pedidos = 0;
	float total_cliente = 0.0;
	
    system("color DE"); // Muda cor do fundo para Lil�s e a fonte Amarelo claro
    setlocale(LC_ALL, "Portuguese_Brazil"); // Interpreta caracteres especiais

    // Exibi��o inicial
    printf(" ");
    for (int i = 0; i < 77; ++i) {
        printf("#");
    }
    printf("#\n");
    printf(" #\t\t\t\t\t\t\t                      #\n");
    printf(" #\t\t\t BEM-VINDO(a) � SORVETERIA BONANI!\t\t      #\n");
    printf(" #\t\t\t\t\t\t\t                      #\n");
    printf(" #\t\t\t               .                                      #\n");
    printf(" #\t\t\t              ;v;                                     #\n");
    printf(" #\t\t\t            vv ;;;;                                   #\n");
    printf(" #\t\t\t          ;::::::::;                                  #\n");
    printf(" #\t\t\t         ;;; v  ;;;;;                                 #\n");
    printf(" #\t\t\t         ;::::::::: vv                                #\n");
    printf(" #\t\t\t         ;::::::::::  v                               #\n");
    printf(" #\t\t\t       ;;  vv ;;;;;;;;;;                              #\n");
    printf(" #\t\t\t       ;;;;;;;;; vv ;;;;                              #\n");
    printf(" #\t\t\t        ;;;;;;;;;;;;;;;;                              #\n");
    printf(" #\t\t\t         v;;v;;v;;v;;v                                #\n");
    printf(" #\t\t\t          |:::::::::|                                 #\n");
    printf(" #\t\t\t           |:::::::|                                  #\n");
    printf(" #\t\t\t            |:::::|                                   #\n");
    printf(" #\t\t\t            |:::::|                                   #\n");
    printf(" #\t\t\t             |:::|                                    #\n");
    printf(" #\t\t\t\t\t\t\t\t\t      #\n");
    printf(" ");
    for (int i = 0; i < 77; ++i) {
        printf("#");
    }
    printf("#\n");
    system("pause"); // Pausa a execu��o at� que o usu�rio pressione uma tecla
    system("cls"); // Limpa a tela

    // Loop principal do menu
    while (1) {
        system("cls");

        // Exibi��o do menu principal
        printf(" ");
        for (int i = 0; i < 77; ++i) {
            printf("#");
        }
        printf("#\n");
        printf(" #\t\t\t\t\t\t\t                      #\n");
        printf(" #\t\t\t         MENU PRINCIPAL:\t\t\t      #\n");
        printf(" #\t\t\t\t\t\t\t\t\t      #\n");
        printf(" #\t\t\t     1. Cadastro de Cliente.\t\t\t      #\n");
        printf(" #\t\t\t     2. Lan�amento de Pedido.\t\t\t      #\n");
        printf(" #\t\t\t     3. Relat�rio de Vendas.\t\t\t      #\n");
        printf(" #\t\t\t     4. Sair.\t\t\t\t\t      #\n");
        printf(" #\t\t\t\t\t\t\t\t\t      #\n");
        printf(" #\t\t\t     Escolha uma das op��es:                          #\n");
        printf(" #\t\t\t\t\t\t\t                      #\n");
        printf(" #\t\t\t\t\t\t\t                      #\n");
        printf(" #\t\t\t\t\t\t\t                      #\n");
        printf(" #\t\t\t\t\t\t\t                      #\n");
        printf(" #\t\t\t\t\t\t\t                      #\n");
        printf(" #\t\t\t\t\t\t\t                      #\n");
        printf(" #\t\t\t\t\t\t\t                      #\n");
        printf(" #\t\t\t\t\t\t\t                      #\n");
        printf(" #\t\t\t\t\t\t\t                      #\n");
        printf(" #\t\t\t\t\t\t\t                      #\n");
        printf(" #\t\t\t\t\t\t\t                      #\n");
		printf(" ");
        for (int i = 0; i < 77; ++i) {
            printf("#");
        }
        printf("#\n");

        scanf("%i", &escolha);
        fflush(stdin);

        switch (escolha) {
            case 1:
                while (1) {
                    system("cls");

                    // menu de cadastro
                    printf(" ");
                    for (int i = 0; i < 77; ++i) {
                        printf("#");
                    }
                    printf("#\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t        CADASTRO DE CLIENTE:\t\t\t      #\n");
                    printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                    printf(" #\t\t\t     1. Digitar informa��es.\t\t\t      #\n");
                    printf(" #\t\t\t     2. Mostrar cadastros.\t\t\t      #\n");
                    printf(" #\t\t\t     3. Voltar ao menu principal.\t\t      #\n");
                    printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                    printf(" #\t\t\t     Escolha uma das op��es:                          #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" ");
                    for (int i = 0; i < 77; ++i) {
                        printf("#");
                    }
                    printf("#\n");
                    
                    scanf("%i", &subescolha);
					fflush(stdin);

                    if (subescolha == 1) {
                        system("cls");

                        // Exibi��o do menu de digitar informa��es
                        printf(" ");
                        for (int i = 0; i < 77; ++i) {
                            printf("#");
                        }
                        printf("#\n");
                        printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                        printf(" #\t\t\t      CADASTRO DE CLIENTE:\t\t\t      #\n");
                        printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                        printf(" #\t\t\t     Digite seu nome: ");
                        scanf("%s", nomes[num_clientes]);
                        fflush(stdin); // Limpa o buffer
                        printf(" #\t\t\t     Digite o n�mero da sua mesa: ");
                        scanf("%i", &mesas[num_clientes]);
                        fflush(stdin); // Limpa o buffer
                        printf(" #\n");
                        printf(" #\t\t\t     Nome: %s \t\t\t\t      #\n", nomes[num_clientes]);
                        printf(" #\t\t\t     Mesa: %i \t\t\t\t\t      #\n", mesas[num_clientes]);
                        num_clientes++;

                        printf(" #\t\t\t     Os dados est�o corretos? (1 - Sim, 2 - N�o):     #\n");
                        scanf("%i", &confirmacao);
                        fflush(stdin); // Limpa o buffer

                        if (confirmacao == 1) {
                        	printf(" #\t\t\t       Cadastro confirmado. :)\t\t\t      #\n");
                            printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                    		printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                    		printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                   			printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                   			printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                   			printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                   			printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                   			printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                    		printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                    		printf(" ");
                    		for (int i = 0; i < 77; ++i) {
                        		printf("#");
                    		}
                    		printf("#\n");
                            system("pause");
                            break;
                        } else if (confirmacao != 2) {
                            printf(" #\t\t\tOp��o inv�lida. Tente novamente.\t\t      #\n");
                			printf(" #\t\t\t\t\t\t\t                      #\n");
							printf(" ");
        					for (int i = 0; i < 77; ++i) {
           						printf("#");
        					}
        					printf("#\n");
                            fflush(stdin); // Limpa o buffer
                            system("pause");
                        }
                    } else if (subescolha == 3) {
                        break;
                    } else if (subescolha == 2) {
                        if (num_clientes == 0) {
                            system("cls");
                            // Borda superior
							printf(" ");
    						for (int i = 0; i < 77; ++i) {
        						printf("#");
    						}
    						printf("#\n");
							printf(" #\t\t\t\t\t\t\t                      #\n");
                            printf(" #\t\t\t    Nenhum cadastro realizado.\t\t\t      #\n");
                            printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t\t\t      #\n");
							printf(" ");
    						// Borda inferior
    						for (int i = 0; i < 78; ++i) {
        						printf("#");
    						}
    						printf(" "); 
                            system("pause");
                        } else {
                            system("cls");

                            // Menu de mostrar cadastros
                            printf(" ");
                            for (int i = 0; i < 77; ++i) {
                                printf("#");
                            }
                            printf("#\n");
                            printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                            printf(" #\t\t\t      MOSTRAR CADASTROS:\t\t\t      #\n");
                            printf(" #\t\t\t\t\t\t\t                      #\n");
							for (int i = 0; i < num_clientes; ++i) {
                            printf(" #\t\t\t     Nome: %s \t\t\t\t      #\n", nomes[i]);
                            printf(" #\t\t\t     Mesa: %i \t\t\t\t\t      #\n", mesas[i]);
                			printf(" #\t\t\t\t\t\t\t                      #\n");
                			printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
							printf(" ");
        					for (int i = 0; i < 77; ++i) {
           						printf("#");
        					}
        					printf("#\n");
                            }
                            system("pause");
                        }
                    } else {
                        printf(" #\t\t\tOp��o inv�lida. Tente novamente.\t\t      #\n");
                		printf(" #\t\t\t\t\t\t\t                      #\n");
						printf(" ");
        				for (int i = 0; i < 77; ++i) {
           					printf("#");
        				}
        				printf("#\n");
                        fflush(stdin); // Limpa o buffer
                        system("pause");
                    }
                }
                break;
            case 2:
                while (1) {
                    system("cls");

                    // Menu de lan�amento de pedidos
                    printf(" ");
                    for (int i = 0; i < 77; ++i) {
                        printf("#");
                    }
                    printf("#\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t      LAN�AMENTO DE PEDIDO:\t\t\t      #\n");
                    printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                    printf(" #\t\t\t     1. Fazer Pedido.\t\t\t              #\n");
                    printf(" #\t\t\t     2. Voltar ao menu principal.\t\t      #\n");
                    printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                    printf(" #\t\t\t     Escolha uma das op��es:                          #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" #\t\t\t\t\t\t\t                      #\n");
                    printf(" ");
                    for (int i = 0; i < 77; ++i) {
                        printf("#");
                    }
                    printf("#\n");
                    
                    scanf("%i", &subescolha);
                    fflush(stdin);

                    if (subescolha == 1) {
                        system("cls");

                        // Exibi��o do menu de digitar pedido
                        printf(" ");
                        for (int i = 0; i < 77; ++i) {
                            printf("#");
                        }
                        printf("#\n");
                        printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                        printf(" #\t\t\t      LAN�AMENTO DE PEDIDO:\t\t\t      #\n");
                        printf(" #\t\t\t\t\t\t\t\t\t      #\n");

                        // Solicita a mesa do cliente
                        printf(" #\t\t\t     Digite o n�mero da sua mesa: \t\t      #\n");
                        scanf("%i", &mesa);
                        fflush(stdin); // Limpa o buffer
                        
                        // Verifica se a mesa est� cadastrada
                        int cliente_index = -1;
                        for (int i = 0; i < num_clientes; i++) {
                            if (mesas[i] == mesa) {
                                cliente_index = i;
                                break;
                            }
                        }

                        if (cliente_index == -1) {
                            printf(" #\t\t  Mesa n�o encontrada. Por favor, fa�a seu cadastro :).\t      #\n");
                            printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t                      #\n");
                    		printf(" #\t\t\t\t\t\t\t\t\t      #\n");
							printf(" ");
    						// Borda inferior
    						for (int i = 0; i < 78; ++i) {
        						printf("#");
    						}
    						printf(" "); 
                            system("pause");
                            break;
                        }

                        while (1) {
                            system("cls");

                            // Exibi��o dos produtos
                            printf(" ");
                            for (int i = 0; i < 77; ++i) {
                                printf("#");
                            }
                            printf("#\n");
                            printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                            printf(" #\t\t\t         CARD�PIO:\t\t\t              #\n");
                            printf(" #\t\t\t\t\t\t\t\t\t      #\n");

                            for (int i = 0; i < MAX_PRODUTOS; i++) {
                                printf(" #\t\t\t     %i. %s - R$ %.2f\t\t              #\n", i + 1, produtos[i], precos[i]);
                            }
							printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                            printf(" #\t\t\t     %i. Finalizar pedido\t\t              #\n", MAX_PRODUTOS + 1);
                            printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                            printf(" #\t\t\t     Escolha um produto:                              #\n");
                            printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                            printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                            printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                            printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                            printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                            printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                            printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                            printf(" #\t\t\t\t\t\t\t\t\t      #\n");
                            printf(" ");
                            for (int i = 0; i < 77; ++i) {
                                printf("#");
                            }
                            printf("#\n");
                            
                            scanf("%i", &subescolha);
                            fflush(stdin);

                            if (subescolha >= 1 && subescolha <= MAX_PRODUTOS) {
                                pedidos_cliente[cliente_index][subescolha - 1]++;
                            } else if (subescolha == MAX_PRODUTOS + 1) {
                                break;
                            } else {
                                printf("Op��o inv�lida! Tente novamente.\n");
                            }
                        }
                    } else if (subescolha == 2) {
                        break;
                    } else {
                        printf("Op��o inv�lida! Tente novamente.\n");
                    }
                }
                break;
            case 3:
    		system("cls");
    		// relat�rio de vendas
    		printf(" ");
    		for (int i = 0; i < 77; ++i) {
        		printf("#");
    		}
    		printf("#\n");
    		printf(" #\t\t\t\t\t\t\t\t\t      #\n");
    		printf(" #\t\t\t      RELAT�RIO DE VENDAS:\t\t\t      #\n");
    		printf(" #\t\t\t\t\t\t\t\t\t      #\n");
    		for (int j = 0; j < num_clientes; j++) {  // Corrigido: utilize 'j' ao inv�s de 'i'
        		printf(" #\t\tCliente: %s\t\t\t\t\t\t      #\n", nomes[j]);
        		printf(" #\t\tMesa: %i\t\t\t\t\t\t              #\n", mesas[j]);
        		for (int k = 0; k < MAX_PRODUTOS; k++) {  // Corrigido: utilize 'k' ao inv�s de 'i'
            		if (pedidos_cliente[j][k] > 0) {
                		printf(" #\t\tProduto: %s - Quantidade: %i - Pre�o: R$ %.2f\t      #\n", produtos[k], pedidos_cliente[j][k], pedidos_cliente[j][k] * precos[k]);
                		total_cliente += pedidos_cliente[j][k] * precos[k];
            		}
        		}
        			printf(" #\t\t\t\t\t\t\t\t\t      #\n");
    			}
    			// Impress�o do total geral
    			printf(" #\t\t\t\t\t\t\t\t\t      #\n");
    			printf(" #\t\t\t\t\t\t\t\t\t      #\n");
    			printf(" #\t\t\t     TOTAL GERAL: R$ %.2f\t\t\t      #\n", total_cliente);
    			printf(" #\t\t\t\t\t\t\t\t\t      #\n");
    			printf(" ");
    			for (int i = 0; i < 77; ++i) {
        			printf("#");
    			}
    			printf("#\n");
    			system("pause");
    			break;
            case 4:
            	printf(" #\t\tObrigado por escolher a BONANI, volte sempre. :3\t      #\n");
                printf(" #\t\t\t\t\t\t\t                      #\n");
				printf(" ");
        		for (int i = 0; i < 77; ++i) {
           			printf("#");
        		}
        		printf("#\n");
            	system("pause");
                exit(0); // Sair do programa
            default:
                printf(" #\t\t\tOp��o inv�lida. Tente novamente.\t\t      #\n");
                printf(" #\t\t\t\t\t\t\t                      #\n");
				printf(" ");
        		for (int i = 0; i < 77; ++i) {
           			printf("#");
        		}
        		printf("#\n");
                fflush(stdin); // Limpa o buffer
                system("pause");
        }
    }

    return 0;
}
// the best
