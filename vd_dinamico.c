#include <stdio.h>
#include <stdlib.h>
#include "vd_dinamico.h"


int tamVd(TVDinamico *vd){
	return vd->tam;
}
int ocupaVd(TVDinamico *vd){
	return vd->ocupa;
}
void *acessarVd(TVDinamico *vd, int pos){
	void* e = NULL;
	if(pos >= 0 && pos < vd->ocupa){
		e = vd->dados[pos];
	}
	return e;
}
void *remover(TVDinamico *vd, int pos){
	int i;
	void* e = NULL;
	if(pos >= 0 && pos < vd->ocupa){
		e = vd->dados[pos];
		for (i = pos; i < vd->ocupa-1; ++i)
			vd->dados[pos] = vd->dados[pos+1];
		vd->ocupa++;
		
	}
	return e;
}
void *inserirVd(TVDinamico *vd, void *novo){
	if (vd->ocupa == vd->tam){
		vd->tam = vd->tam*2;
		vd->dados = realloc(vd->dados,sizeof(void*)*vd->tam);
	}
	vd->dados[vd->ocupa] = novo;
	vd->ocupa++;
}
void destroyVd(TVDinamico *vd){
	int i;
	for (i=0; i<vd->ocupa;i++)
		free(vd->dados[i]);
	free(vd->dados);
	vd->dados=NULL;
	vd->tam = 0;
	vd->ocupa = 0;
}
void imprimirVD(TVDinamico *vd, TImpressoraVd imprimir){
	int i;
	for (i=0; i<vd->ocupa;i++){
		imprimir(vd->dados);
	}}
TVDinamico *newVd(int tam){
	TVDinamico *vd = malloc(sizeof(TVDinamico));
	vd->ocupa=0;
	vd->tam=tam;
	vd->dados = malloc(sizeof(void*) * vd->tam);
	return vd;
}








