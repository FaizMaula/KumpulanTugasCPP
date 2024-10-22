#include "tree.h"

using namespace std;

int main()
{
    int x[9] = {5,3,9,10,4,7,1,8,6}; //{25,20,10,5,12,22,36,30,28,40,38,48};

    adrNode p;
    BinTree root = NULL;

    /* Tampilkan isi dari array */
    for(int i = 0;i<9;i++){
        cout << x[i] << " ";
    }
    cout << endl;
    /* 1. Tambahkan setiap elemen array x kedalam BST   secara berurutan */
    /* sehingga dihasilkan BST seperti Gambar 1, gunakan looping*/
    for(int i = 0;i<9;i++){
        p = newNode_1301223017(x[i]);
        insertNode_1301223017(root,p);
    }
    /*Tampilkan node dari BST secara Pre-Order */
    printf("\n");
    printf("\nPre Order\t: ");
    printPreOrder_1301223017(root);
    /*3. Tampilkan keturunan dari node 9*/
    printf("\n");
    printf("\nDescendent of Node 9\t: ");
    printDescendant_1301223017(root,9);
    /* 4. Tampilkan total info semua node pada BST */
    printf("\n");
    printf("\nSum of BST Info\t: ");
    cout << sumNode_1301223017(root);
    /* 5. Tampilkan banyaknya daun dari BST */
    printf("\nNumber of Leaves\t: ");
    cout << countLeaves_1301223017(root);
    /* 4. Tampilkan Tinggi dari Tree*/
    printf("\nHeight of Tree\t\t: ");
    cout << heightTree_1301223017(root) << endl;
    printf("\n Most Left\t\t: ");
    cout << key(findMostLeft_1301223017(root)) << endl;
    printf("\n Ancestor\t\t: ");
    printAncestor(root,6);
    printf("\n inOrder\t\t: ");
    printInOrder(root);
    printf("\n PostOrder\t\t: ");
    printpostorder(root);
    printf("\n Count Node\t\t: ");
    cout << countNode(root);
    printf("\n Max Node\t\t: ");
    cout << key(findMax(root));
     printf("\n Min Node\t\t: ");
    cout << key(findMin(root));

return 0;
}

