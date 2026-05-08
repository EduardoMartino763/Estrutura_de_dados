#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No *ant; //ponteiro para o nó anterior
    struct No *prox; //ponteiro para o proximo nó
}

void inserirInicio(struct No **head, int x) {
    struct No *novo = (struct No*) malloc(sizeof(struct No));
    novo ->valor = x;
    novo ->ant = NULL;
    novo->prox = *head;

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
    struct No *heade = NULL;

    inserirInicio(&head, 11);
    inserirInicio(&head, 8);
    inserirInicio(&head, 5);

    imprimir(head);

    return 0;
}

