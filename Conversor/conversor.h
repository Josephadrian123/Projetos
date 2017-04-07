#define MOSTRAR 1
#define   NAO_MOSTRAR   0

typedef char telem;
typedef struct no {
    struct no *esq;
    telem info;
    struct no *dir;
    } tno;

typedef tno *tab;

tab* converteInfixaParaArvore(char *expressao, int mostrarExecucao);

int expressaoInfixaValida( char *expressao );

char* obterOperandos( char *expressao);

char* obterExpressaoPosfixa( tab *T);

float executaExpressao( tab *T, char *operandos, float *valor);
