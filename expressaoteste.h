#ifndef CALCULADORAPOSFIXA_H
#define CALCULADORAPOSFIXA_H

typedef struct No {
    double dado;
    struct No *proximo;
} No;

typedef struct {
    No *topo;
} Pilha;

typedef struct NoString {
    char dado[256];
    struct NoString *proximo;
} NoString;

typedef struct {
    NoString *topo;
} PilhaString;

void inicializar(Pilha *pilha);
void empilhar(Pilha *pilha, double valor);
double desempilhar(Pilha *pilha);
int isOperator(char c);
double avaliarExpressaoPosfixada(const char *expressao);
void inicializarString(PilhaString *pilha);
void empilharString(PilhaString *pilha, const char *valor);
char* desempilharString(PilhaString *pilha);
char* converterParaInfixa(const char *expressaoPosfixada);

#endif
