#ifndef film_aktor
#define film_aktor

#include "aktor.h"
#include "film.h"
#include "relasi.h"

void tambahFilm(listFilm &LF);
void tambahAktor(listAktor &LA);
void cariFilm(listFilm LF);
void tambahAktorPadaFilm(listFilm &LF, listAktor &LA);
void tampilkanAktorDiFilm(listFilm LF);
void tampilkanFilmDanAktornya(listFilm LF);
void hapusFilmDanAktornya(listFilm &LF);
void hapusAktorDariFilm(listFilm &LF);
void hitungJumlahAktor(listFilm LF);
void tampilkanFilmDenganAktorTerbanyak(listFilm LF);

#endif