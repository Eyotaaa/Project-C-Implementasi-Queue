#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
using namespace std;
#define next(P) (P) -> next
#define info(P) (P) -> info
#define head(Q) ((Q).head)
#define tail(Q) ((Q).tail)
#define NIL NULL

struct infotype{
    string artis;
    string judul;
};

typedef struct element *address;
struct element{
    infotype info;
    address next;
};

struct playlistlagu{
    address head,tail;
};

void createplaylist_1301213096(playlistlagu &Q);
void createelement_1301213096(infotype lagubaru, address &plagu);
void enqueue_1301213096(playlistlagu &Q, address plagu);
void dequeue_1301213096(playlistlagu &Q, address &plagu);
void showsemualagu_1301213096(playlistlagu Q);
bool isempty_1301213096(playlistlagu Q);
#endif // QUEUE_H
