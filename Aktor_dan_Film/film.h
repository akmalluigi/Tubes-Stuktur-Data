#ifndef DLL_FILM_H
#define DLL_FILM_H
#include "relasi.h"

typedef struct elmFilm *adrFilm;
typedef struct film infotypeFilm;

struct film{
    string judul;
    int tahun;
    string genre;
    float rating;
};

struct elmFilm{
    infotypeFilm info;
    listRelasi firstRelasi;
    adrFilm next;
    adrFilm prev;
}

struct listFilm{
    adrFilm firstFilm;
    adrFilm lastFilm;  
}

void createListFilm(listFilm &L);
adrFilm alokasiFilm(infotypeFilm dataFilm);
void insertFilm(listFilm &L, adrFilm p); //insert last
void deleteFirst(listFilm &L, adrFilm &p);
void deleteLast(listFilm &L, adrFilm &p);
adrFilm findFilm(listFilm L, string judul);
void printFilm(listFilm L);

#endif