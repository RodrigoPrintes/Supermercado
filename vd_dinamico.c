#include <stdio.h>
#include <stdlib.h>

typedef struct VDinamico TVDinamico;
struct VDinamico{
	int ocupa, tam;
	void *dados;};
typedef void (*TImpressoraVd)(void*);
void imprimirVD(TVDinamico *vd, TImpressoraVd imprimir){
	imprimir(vd->dados);
}
void inserirVD(TVDinamico *vd, void *m){
	if (vd->ocupa+1==vd->tam){
		vd->tam = vd->tam*2;
		vd->dados = realloc(vd->dados,sizeof(m)*vd->tam);			
	}
	vd->dados[vd->ocupa] = m;
	vd->ocupa++;
}

TVDinamico* criarVDinamico(int tam){
	TVDinamico *v = NULL;

	v = malloc(sizeof(TVDinamico));

	v->ocupa=0;
	v->tam=tam;
	v->armazenador = malloc(sizeof(TMedida)*v->tam);

	return v;
}

void destroyVDinamico(TVDinamico *v){
	free(v->armazenador);
	free(v);
}

int main(int argc, char const *argv[])
{
	TMedida medida;
	TVDinamico *vd = criarVDinamico(8);
	
	scanf("%d", &medida.tempo);
	while(medida.tempo>=0){
		scanf("%lf",&medida.temp);
		inserirVD
		(vd, medida);
	
		scanf("%d", &medida.tempo);

	}
	
	imprimirVD(vd);
	free(vd);

	destroyVDinamico(vd);
	vd = criarVDinamico(10);
	
	return 0;
}










