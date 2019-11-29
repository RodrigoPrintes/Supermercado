#include "stdio.h"
#include "stdlib.h"
typedef struct atendente Tatendente;
struct atendente{
	int fa;
	int agilidade// fa*medida_de_agilidade;
	// fa == fator de agilidade [1,10], onde 1 e o maximo.};
typedef struct cliente Tcliente;
struct cliente{
	int tempo_chegada;
	int itens;
	int tipo_cliente;//[1,2,3]
	/* 1 -  tempo maximo(todos dessa classe seram atendidos);
	   2 -  X tempo( fila + atendimento) só desiste ao terminar o maximo tempo
	   3 -  Y na fila e Z no atendimento(pode desistir em duas etapas)   
 	*/ };
//vd
// typedef struct evento Tevento;
// struct evento{
// 	char eventos;
// };	

