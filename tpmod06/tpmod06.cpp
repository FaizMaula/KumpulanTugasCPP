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
        first(L) = p;
        last(L) = p;
    } else {
        next(p) = first(L);
        prev(first(L)) = p;
        first(L) = p;
    }
 }

 void insertAfter_1301223017(List &L, adr prec, adr p) {
    next(p) = next(prec);
    prev(p) = prec;
    prev(next(prec)) = p;
    next(prec) = p;
 }

 void insertLast_1301223017(List &L, adr p){
    if (first(L) == NULL ) {
        first(L) = P;
        last(L) = P;
    } else {
        prev(p) = last(L);
        next(last(L)) = p;
        last(L) = p;
    }
 }

void deleteFirst_1301223017(List &L, adr p)
{
    p = first(L);
    if (first(L) != last(L)) {
        first(L) = next(p);
        next(p) = NULL;
        prev(first(L)) = NULL;
    } else {
        first(L) = NULL;
        last(L) = NULL;
    }
}
void deleteAfter_1301223017()
{
}

void deleteLast_1301223017()
{
    p = last(L);
}
