#include "tree.h"
adrNode newNode (infotype x){
    adrNode n = new node;
    key(n) = x;
    left(n) = NULL;
    right(n) = NULL;
    return n;
}
/* mengembalikan alamat dari suatu node hasil alokasi, dengan info adalah x dan left dan right adalah NULL */
adrNode findNode (adrNode root, infotype x){
    if (key(root) == x || root == NULL){
        return root;
    }else {
        if (key(root) > x){
            findNode(x,left(root));
        }else if (key(root) < x) {
            findNode(x,right(root));
        }
    }
}
/* mengembalikan alamat dari node yang memiliki info sama dengan x, atau NULL apabila tidak ditemukan, Catatan: implementasikan secara REKURSIF */
void insertNode (adrNode &root, adrNode p){
    /* I.S. terdefinisi root dari BST (mungkin NULL), dan pointer p yang berisi alamat node yang mau ditambahkan pada BST
    F.S. elemen yang ditunjuk oleh p ditambahkan sebagai node dari BST Catatan: implementasikan secara REKURSIF */
    if (root == NULL){
        root = newNode(p);
    } else {
        if (key(root) > p){
            insertNode(p,left(root));
        }else if (key(root) < p){
            insertNode(p,right(root));
        }else{
            cout << "Duplicate" << endl;
        }
    }
}

void printPreOrder (adrNode root){
    if (root == NULL) {
        cout << "Tree Kosong" << endl;
    } else {
        q = left(root);
        p = right(root);
        cout << key(root);
        while(q != NULL){
            cout << key(q) << " ";
            q = left(q);
        }
        while(p != NULL ){
            cout << key(p) << " ";
            p = left(p);
        }
    }
}
/* I.S. terdefinisi root dari BST (mungkin NULL)
F.S. menampilkan node dari BST secara Preorder atau dengan urutan root, left dan right
Catatan: implementasikan secara REKURSIF */

void printDescendant (adrNode root, infotype x);
/* I.S. terdefinisi suatu root dari BST (mungkin NULL), dan infotype x F.S. menampilkan subtree atau keturunan dari node yang memiliki info x
24 Catatan: implementasikan secara REKURSIF */
int sumNode (adrNode root);
/* mengembalikan hasil penjumlahan semua info node yang terdapat pada BST Catatan: implementasikan secara REKURSIF */
int countLeaves (adrNode root);
/* mengembalikan banyaknya daun atau node yang tidak memiliki anak dari BST Catatan: implementasikan secara REKURSIF */
int heightTree (adrNode root);
/* mengembalikan banyaknya edge dari suatu root menuju daun yang terjauh. Catatan: implementasikan secara REKURSIF */
