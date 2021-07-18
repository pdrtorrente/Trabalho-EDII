#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int num_lin;
    int num_col;
    int **nums;
} mapa;

typedef struct {
    int x;
    int y;
    // x = LINHA E y = COLUNA
} coordenada;


mapa *criarMapa(int nlin, int ncol) {
    mapa *m = malloc(sizeof(mapa) * 1);
    m->num_lin = nlin;
    m->num_col = ncol;
    m->nums = malloc(sizeof(int *) * nlin);
    for (int i = 0; i < nlin; i++) {
        m->nums[i] = malloc(sizeof(int) * ncol);
        for (int j = 0; j < ncol; j++) {
            m->nums[i][j] = 1;
        }
    }
    return m;
}

void apagarMapa (mapa *m) {
    // DA FREE EM TODO O MAPA
    for (int i = 0; i < m->num_lin; i++) {
        free(m->nums[i]);
    }
    free(m->nums);                                           
    free(m);
}

mapa *lerMapa () {
    int nl, nc;
    scanf("%d", &nl);
    scanf("%d", &nc);
    if (nl <= 0 || nc <= 0) {
        printf("0");
        exit(-1);
    }
    mapa *m = criarMapa(nl, nc);
    char temp;
    // PEGA AS ENTRADAS E COLOCA NO MAPA
    do {
        int coord_linha, coord_coluna, custo;
        scanf("%d", &coord_linha);
        scanf("%d", &coord_coluna);
        scanf("%d%c", &custo, &temp);
        if (coord_coluna < 0 || coord_linha < 0 || coord_linha >= nl || coord_coluna >= nc) {
            printf("0");
            exit(-1);
        }
        m->nums[coord_linha][coord_coluna] = custo;
    } while (!feof(stdin) && temp != '\n');
    return m;
}

int avancarCasa (coordenada *coord_atual, mapa *m) {
    // CHECA SE EXISTE UMA CASA PARA CIMA E UMA PARA DIREITA
    if (coord_atual->x > 0 && coord_atual->y < m->num_col - 1) {
        int casa_direita = m->nums[coord_atual->x][coord_atual->y + 1];
        int casa_cima = m->nums[coord_atual->x - 1][coord_atual->y]; 
        if (casa_direita <= casa_cima && coord_atual->y + 1 < m->num_col && casa_direita != 99) {
            // MOVE PARA DIREITA
            (coord_atual->y)++;
        } else if (coord_atual->x - 1 >= 0 && casa_cima != 99) {
            // MOVE PARA CIMA
            (coord_atual->x)--;
        } else {
            return 0;
        }
        return 1;
    // SE NÃO, CHECA SE EXISTE UMA CASA PARA CIMA
    } else if (coord_atual->x > 0) {
        int casa_cima = m->nums[coord_atual->x - 1][coord_atual->y];
        if (casa_cima != 99) {
            (coord_atual->x)--;
        } else {
            return 0;
        }
    // SE NÃO, CHECA SE EXISTE UMA CASA PARA DIREITA
    } else if (coord_atual->y < m->num_col - 1) {
        int casa_direita = m->nums[coord_atual->x][coord_atual->y + 1];
        if (casa_direita != 99) {
            (coord_atual->y)++;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
    return 1;
}

coordenada definirCoordenada(int x, int y) {
    coordenada nova_coordenada;
    nova_coordenada.x = x;
    nova_coordenada.y = y;
    return nova_coordenada;
}

int percorrerCaminho (mapa *m, int *custo) {
    coordenada coord_robo, coord_final;
    coord_robo = definirCoordenada(m->num_lin - 1, 0);
    coord_final = definirCoordenada(0, m->num_col - 1);
    int custo_total = -1;
    // TENTA AVANÇAR DE CASA ENQUANTO POSSIVEL
    while (avancarCasa(&coord_robo, m)) {
        custo_total += m->nums[coord_robo.x][coord_robo.y];
    }
    *custo = custo_total;
    int res = 1;
    // CHECA SE O ROBO CONSEGUIU CHEGAR ONDE QUERIA
    if (coord_robo.x != coord_final.x || coord_robo.y != coord_final.y) {
        res = 0;
        (*custo)++;
    }
    return res;
}

int main(void) {
    mapa *m = lerMapa();
    int custo;
    int sucesso = percorrerCaminho(m, &custo);
    printf("%d\n", custo);
    printf("%d\n", sucesso);
    apagarMapa(m);
}