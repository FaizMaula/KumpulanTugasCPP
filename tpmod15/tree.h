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
adrNode newNode_1301223017 (infotype x);
/* mengembalikan alamat dari suatu node hasil alokasi, dengan info adalah x dan left dan right adalah NULL */
adrNode findNode_1301223017 (adrNode root, infotype x);
/* mengembalikan alamat dari node yang memiliki info sama dengan x, atau NULL apabila tidak ditemukan, Catatan: implementasikan secara REKURSIF */
void insertNode_1301223017 (adrNode &root, adrNode p);
/* I.S. terdefinisi root dari BST (mungkin NULL), dan pointer p yang berisi alamat node yang mau ditambahkan pada BST
F.S. elemen yang ditunjuk oleh p ditambahkan sebagai node dari BST Catatan: implementasikan secara REKURSIF */
void printPreOrder_1301223017 (adrNode root);
/* I.S. terdefinisi root dari BST (mungkin NULL)
F.S. menampilkan node dari BST secara Preorder atau dengan urutan root, left dan right
Catatan: implementasikan secara REKURSIF */
void printDescendant_1301223017 (adrNode root, infotype x);
/* I.S. terdefinisi suatu root dari BST (mungkin NULL), dan infotype x F.S. menampilkan subtree atau keturunan dari node yang memiliki info x
24 Catatan: implementasikan secara REKURSIF */
int sumNode_1301223017 (adrNode root);
/* mengembalikan hasil penjumlahan semua info node yang terdapat pada BST Catatan: implementasikan secara REKURSIF */
int countLeaves_1301223017 (adrNode root);
int countNode(adrNode root);
/* mengembalikan banyaknya daun atau node yang tidak memiliki anak dari BST Catatan: implementasikan secara REKURSIF */
int heightTree_1301223017 (adrNode root);
/* mengembalikan banyaknya edge dari suatu root menuju daun yang terjauh. Catatan: implementasikan secara REKURSIF */
adrNode findMostLeft_1301223017(adrNode root);
void printAncestor(adrNode root,infotype x);
void printInOrder(adrNode root);
void printpostorder(adrNode root);

adrNode findMax(adrNode root);
adrNode findMin(adrNode root);
#endif // TREE_H_INCLUDED
