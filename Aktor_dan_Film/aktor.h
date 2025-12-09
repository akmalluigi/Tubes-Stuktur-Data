#ifndef SLL_AKTOR_H
#define SLL_AKTOR_H

#include <iostream>
#include <string>
using namespace std;

typedef struct elmAktor *adrAktor;
typedef struct aktor infotypeAktor;

struct aktor {
    string nama;
    int usia;
    string negara;
};

struct elmAktor{
    infotypeAktor info;
    adrAktor next;
};

struct listAktor{
    adrAktor first;
};

void createListAktor(listAktor &L);
adrAktor alokasiAktor(infotypeAktor dataAktor);
void insertAktor(listAktor &L, adrAktor p); //insert First
void deleteFirst(listAktor &L, adrAktor &p);
void deleteLast(listAktor &L, adrAktor &p);
adrAktor findAktor(listAktor L, string nama);
void printAktor(listAktor L);

#endif


