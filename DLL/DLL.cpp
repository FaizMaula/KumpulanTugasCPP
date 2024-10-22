void createList_1301223017(List &L){
    first(L) = NULL;
    last(L) = NULL;
}

bool isEmpty_1301223017(List L) {
    if (first(L) == NULL) {
        return true;
    } else {
        return false;
    }
 }

void insertFirst_1301223017(List &L, adr p) {
    if (first(L) == NULL ){
        first(L) = P;
        next(P) = P;
        prev(P) = P;
        last(L) = P;
    } else {
        next(p) = first(L);
        next(last(L)) = p;
        first(L) = p;
    }
 }

 void insertAfter_1301223017(List &L, adr prec, adr p) {

 }

 void insertLast_1301223017(List &L, adr p){
    if (first(L) == NULL ) {
        first(L) = P;
        next(P) = P;
        prev(P) = P;
        last(L) = P;
    } else {
        prev(p) = last(L);
        next(p) = first(L);
        last(L) = p;
    }
 }

void deleteFirst_1301223017(List &L, adr p)
{

}
void deleteAfter_1301223017()
{
}

void deleteLast_1301223017()
{

}
