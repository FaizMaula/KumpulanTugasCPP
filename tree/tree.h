#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>
#include <cstdio>
using namespace std;

#define key(p) p->key
#define left(p) p->left
#define right(p) p->right
typedef int infotype;
typedef struct node *adrNode;
struct node{
    int key;
    adrNode left, right;
};
typedef adrNode BinTree;
adrNode newNode (infotype x);
/* mengembalikan alamat dari suatu node hasil alokasi, dengan info adalah x dan left dan right adalah NULL */
adrNode findNode (adrNode root, infotype x);
/* mengembalikan alamat dari node yang memiliki info sama dengan x, atau NULL apabila tidak ditemukan, Catatan: implementasikan secara REKURSIF */
void insertNode (adrNode &root, adrNode p);
/* I.S. terdefinisi root dari BST (mungkin NULL), dan pointer p yang berisi alamat node yang mau ditambahkan pada BST
F.S. elemen yang ditunjuk oleh p ditambahkan sebagai node dari BST Catatan: implementasikan secara REKURSIF */
void printPreOrder (adrNode root);
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

#endif // TREE_H_INCLUDED
