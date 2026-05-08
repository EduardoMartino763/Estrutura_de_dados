#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No *ant; //ponteiro para o nó anterior
    struct No *prox; //ponteiro para o proximo nó
};

void inserirFim (struct No **head, int x) {
    struct No *novo = (struct No) malloc (sizeof(struct No));
    novo ->valor = x;
    novo ->ant = *novo
    novo ->prox = *aux

    if(*head != NULL) {
        struct No *aux = *head;
        while(aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = novo;
}

void inserirInicio(struct No **head, int x) {
    struct No *novo = (struct No*) malloc(sizeof(struct No));
    novo ->valor = x;
    novo ->ant = NULL;
    novo ->prox = *head;

    if (*head != NULL) {
        (*head) ->ant = novo;
    }

    *head = novo;
}

void imprimir (struct No *head) {
    struct No *aux = head;
    printf("NULL <-> ");

    while (aux != NULL) {
        printf("%d <-> ", aux->valor);
        aux = aux->prox;
    }

    printf("NULL\n")
}

int main() {
    struct No *head = NULL;

    inserirInicio(&head, 11);
    inserirInicio(&head, 8);
    inserirInicio(&head, 5);
    inserirFim(&head, 13);

    imprimir(head);

    return 0;
}

