#include "queue.h"

void createplaylist_1301213096(playlistlagu &Q){
    head(Q) = NIL;
    tail(Q) = NIL;
}

void createelement_1301213096(infotype lagubaru, address &plagu){
    plagu = new element;
    info(plagu) = lagubaru;
}

void enqueue_1301213096(playlistlagu &Q, address plagu){
    if(isempty_1301213096(Q)) {
        head(Q) = plagu;
        tail(Q) = plagu;
    }else{
        next(tail(Q)) = plagu;
        tail(Q) = plagu;
    }
}

void dequeue_1301213096(playlistlagu &Q, address &plagu){
    if(isempty_1301213096(Q)) {
        cout<<"Quen Kosong";
    }else if (head(Q) == tail(Q)){
        head(Q) = NIL;
        tail(Q) = NIL;
    }else{
        plagu = head(Q);
        head(Q) = next(plagu);
        next(plagu) = NIL;
    }
}

void showsemualagu_1301213096(playlistlagu Q){
    address plagu = head(Q);
    cout << "Playlist Lagu" << endl;
    while(next(plagu) != NIL){
        cout << endl;
        cout << "Nama artis: " << info(plagu).artis<<endl;
        cout << "Lagu: " << info(plagu).judul << endl;
        cout << endl;
        plagu = next(plagu);
    }
        cout << endl;
        cout << "Nama artis: " << info(plagu).artis<<endl;
        cout << "Lagu: " << info(plagu).judul << endl;
        cout << endl;
}

bool isempty_1301213096(playlistlagu Q){
    return head(Q) == NIL && tail(Q) == NIL;
}
