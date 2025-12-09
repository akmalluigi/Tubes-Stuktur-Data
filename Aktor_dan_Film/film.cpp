#include "film.h"

void createListFilm(listFilm &L){
    L.firstFilm = nullptr;
    L.lastFilm = nullptr;
}
adrFilm alokasiFilm(infotypeFilm dataFilm){
    adrFilm p = new elmFilm;
    p->info = data;
    p->next = nullptr;
    p->prev = nullptr;
    p->firstRelasi = nullptr;
    return p;
}
void insertFilm(listFilm &L, adrFilm p){
    if(L.lastFilm == nullptr){
        L.firstFilm = p;
        L.lastFilm = p;
    }else{
        p->prev = L.lastFilm;
        L.lastFilm->next = p;
        L.lastFilm = p;
    }
}
void deleteFirst(listFilm &L, adrFilm &p){
    if(L.firstFilm != nullptr){
        p = L.firstFilm;
        if(L.firstFilm == L.lastFilm){
            L.firstFilm = nullptr;
            L.lastFilm = nullptr;
        }else{
            L.firstFilm = L.firstFilm->next;
            L.firstFilm->prev = nullptr;
            p->next = nullptr;
        }
    }

}
void deleteLast(listFilm &L, adrFilm &p){
    if(L.lastFilm != nullptr){
        p = L.lastFilm;
        if(L.lastFilm == L.firstFilm){
            L.lastFilm == nullptr;
            L.firstFilm == nullptr;
        }else{
            L.lastFilm = L.lastFilm->prev;
            L.lastFilm->next = nullptr;
            p->prev = nullptr;
        }
    }
}
adrFilm findFilm(listFilm L, string judul){
    adrFilm p = L.firstFilm;
    adrFilm q;
    q = nullptr;
    while(p){
        if(p->info.judul == judul){
            q = p;
        }
        p = p->next;
    }
    if(q != nullptr){
    return q;
    }
}
void printFilm(listFilm L){
    adrFilm p = L.firstFilm;
    int i = 1;
    cout << "\n=== DAFTAR FILM ===" << endl;
    if (p == nullptr) {
        cout << "Belum ada film yang terdaftar." << endl;
    } else {
        while (p != nullptr) {
            cout << no++ << ". " << p->info.judul << " (" << p->info.tahun << ")" << endl;
            cout << "   Genre: " << p->info.genre << ", Rating: " << p->info.rating << endl;
            p = p->next;
        }
    }
}