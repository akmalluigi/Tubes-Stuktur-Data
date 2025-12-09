#ifndef SLL_RELASI_H
#define SLL_RELASI_H
#include "aktor.h"

typedef struct elmRelasi *adrRelasi;

struct elmRelasi{
    adrAktor aktor;
    adrRelasi next;
};

struct listRelasi{
    adrRelasi first;
};

void createListRelasi(listRelasi &L);
adrRelasi alokasiRelasi(adrAktor aktor);
void insertRelasi(listRelasi &L, adrRelasi p);
void deleteRelasi(listRelasi &L, string namaAktor);

#endif
