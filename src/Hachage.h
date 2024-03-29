#ifndef __HACHAGE_H__
#define __HACHAGE_H__

#include "Reseau.h"

typedef struct table {
    CellNoeud **table;
    int lenght;
} TableHachage;

double key(double x, double y);

int hachage(int key, int lenght);

void liberer_table_hachage(TableHachage *table);
TableHachage *cree_table_hachage(int taille);

#endif