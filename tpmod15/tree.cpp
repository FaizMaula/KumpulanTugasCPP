#include "tree.h"
adrNode newNode_1301223017(infotype x){
    adrNode n = new node;
    key(n) = x;
    left(n) = NULL;
    right(n) = NULL;
    return n;
}
/* mengembalikan alamat dari suatu node hasil alokasi, dengan info adalah x dan left dan right adalah NULL */
adrNode findNode_1301223017(adrNode root, infotype x){
    if (key(root) == x || root == NULL){
        return root;
    }else {
        if (key(root) > x){
            findNode_1301223017(left(root),x);
        }else if (key(root) < x) {
            findNode_1301223017(right(root),x);
        }
    }
}
/* mengembalikan alamat dari node yang memiliki info sama dengan x, atau NULL apabila tidak ditemukan, Catatan: implementasikan secara REKURSIF */
void insertNode_1301223017(adrNode &root, adrNode p){
    /* I.S. terdefinisi root dari BST (mungkin NULL), dan pointer p yang berisi alamat node yang mau ditambahkan pada BST
    F.S. elemen yang ditunjuk oleh p ditambahkan sebagai node dari BST Catatan: implementasikan secara REKURSIF */
    if (root == NULL){
        root = p;
    } else {
        if (key(root) > key(p)){
            insertNode_1301223017(left(root),p);
        }else if (key(root) < key(p)){
            insertNode_1301223017(right(root),p);
        }else{
            cout << "Duplicate" << endl;
        }
    }
}

void printPreOrder_1301223017(adrNode root){
    adrNode q, p;
        if (root != NULL){
            cout << key(root) << " ";
            printPreOrder_1301223017(left(root));
            printPreOrder_1301223017(right(root));
        }
    }

/* I.S. terdefinisi root dari BST (mungkin NULL)
F.S. menampilkan node dari BST secara Preorder atau dengan urutan root, left dan right
Catatan: implementasikan secara REKURSIF */

void printDescendant_1301223017(adrNode root, infotype x){
    adrNode p = findNode_1301223017(root,x);
    if (root != NULL){
        printPreOrder_1301223017(left(p));
        printPreOrder_1301223017(right(p));
    }
}
/* I.S. terdefinisi suatu root dari BST (mungkin NULL), dan infotype x F.S. menampilkan subtree atau keturunan dari node yang memiliki info x
24 Catatan: implementasikan secara REKURSIF */

int sumNode_1301223017(adrNode root){
    int a;
    if (root == NULL){
        return 0;
    }else {
        return key(root) + sumNode_1301223017(left(root)) + sumNode_1301223017(right(root));
    }

}
/* mengembalikan hasil penjumlahan semua info node yang terdapat pada BST Catatan: implementasikan secara REKURSIF */
int countLeaves_1301223017(adrNode root){
    int a = 0;
    if (root == NULL){
        return 0;
    } else if (left(root) == NULL and right(root) == NULL){
        return 1;
    }
    return countLeaves_1301223017(right(root)) + countLeaves_1301223017(left(root));/*
    if (root == NULL){
        return 0;
    }else if (left(root) == NULL and right(root) == NULL){
        return 1;
    }else{
        countLeaves_1301223017(left(root)) + countLeaves_1301223017(right(root));
    }
    */


}
/* mengembalikan banyaknya daun atau node yang tidak memiliki anak dari BST Catatan: implementasikan secara REKURSIF */
int heightTree_1301223017(adrNode root){
    int a = 0;
    if (root == NULL){
        return 0;
    }
    if (left(root) != NULL and right(root) != NULL){
        a++;
    }
    return a +  heightTree_1301223017(right(root)) + heightTree_1301223017(left(root));
}
/* mengembalikan banyaknya edge dari suatu root menuju daun yang terjauh. Catatan: implementasikan secara REKURSIF */

adrNode findMostLeft_1301223017(adrNode root){
    if (left(root) == NULL){
        return (root);
    } else {
        findMostLeft_1301223017(left(root));
    }
}

void printAncestor(adrNode root,infotype x){
    if (key(root) != x ){
        cout << key(root) << " ";
        if (key(root) < x){
            printAncestor(right(root),x);
        }else{
             printAncestor(left(root),x);
        }
    }
}

void printInOrder(adrNode root) {
    if (root != NULL) {
        printInOrder(left(root));
        cout << (key(root)) << " ";
        printInOrder(right(root));
    }
}

void printpostorder(adrNode root){
    if (root != NULL) {
        printpostorder(left(root));
        printpostorder(right(root));
        cout << key(root) << " ";
    }
}

int countNode(adrNode root){
    if (root == NULL){
        return 0;
    }else {
        return 1 + countNode(right(root)) + countNode(left(root));
    }
}

adrNode findMax(adrNode root){

    if (right(root) == NULL) {
        return root;
    }
    return findMax(right(root));;
}
adrNode findMin(adrNode root){

    if (left(root) == NULL) {
        return root;
    }
    return findMin(left(root));
}

