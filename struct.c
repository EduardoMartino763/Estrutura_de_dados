#include <stdio.h>

struct No {
    int valor;
    struct No *prox;
};


void inserirInicio(struct No **head, int x) {
    struct No *novo = malloc(sizeof(struct No));
    novo->valor = x;
    novo->prox = *head;
    *head = novo; 
    
}

void imprimir(struct No *head) {
    struct No *aux = head;
    while (aux != NULL) {
        printf("%d -> ", aux->valor);
        aux = aux->prox;
    }
    printf("NULL\n");
}

int main() {
    struct No *head = NULL;

    inserirInicio(&head, 30);
    inserirInicio(&head, 20);
    inserirInicio(&head, 10);
    
    imprimir(head);
}