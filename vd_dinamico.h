typedef struct VDinamico TVDinamico  ;
struct VDinamico{
	int ocupa, tam;
	void* *dados;
};

typedef void (*TImpressoraVd)(void*);

int tamVd(TVDinamico *vd);
int ocupaVd(TVDinamico *vd);
void *acessarVd(TVDinamico *vd, int pos);
void *remover(TVDinamico *vd, int pos);
void *inserirVd(TVDinamico *vd, void *dados);
void destroyVd(TVDinamico *vd);
void imprimirVd(TVDinamico *vd, TImpressoraVd imprimir);
TVDinamico *newVd(int tam);