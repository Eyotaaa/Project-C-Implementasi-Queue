#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    playlistlagu Q;
    infotype lagu;
    address plagu;
    createplaylist_1301213096(Q);


    for(int i = 1; i <= 10; i++){
        cout << "Masukkan ke: " << i << endl;
        cout << "Masukan Artis: " ; cin >> lagu.artis; cout << endl;
        cout << "Masukan Judul: " ; cin >> lagu.judul; cout << endl;


        createelement_1301213096(lagu, plagu);
        enqueue_1301213096(Q, plagu);
    }
    cout << "Sebelum dihapus: " << endl;
    showsemualagu_1301213096(Q);
    cout << endl;
    dequeue_1301213096(Q, plagu);
    cout << endl;
    cout << "Sesudah dihapus: " << endl;
    showsemualagu_1301213096(Q);

    return 0;
}
