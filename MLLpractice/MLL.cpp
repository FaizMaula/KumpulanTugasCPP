#include "MLL.h"

void createListCourse(list_course &L){
    first(L) = NULL;
}

void createListStudent(list_student &L){
    first(L) = NULL;
}

void insertStudent(list_student &L, adr_student P){
    adr_student q = first(L);
    if (first(L) == NULL){
        first(L) = P;
        cout << "TES";
    }else{
        adr_student q = first(L);
        while (next(q) != NULL) {
            q = next(q);
        }
        next(q) = P;
        next(P) = NULL;
    }
}

void insertLastCourse(list_course &L, adr_course P){
    adr_course q = first(L);
    if (first(L) == NULL){
        first(L) = P;
    }else{
        while (next(q) != NULL) {
            q = next(q);
        }
        next(q) = P;
        next(P) = NULL;
    }
}
adr_course alokasiAnak(infotype_course x){
    adr_course p = new elm_course;
    next(p) = NULL;
    info(p) = x;
    return p;
}
adr_student alokasi(infotype_student x){
    adr_student p = new elmStudent;
    next(p) = NULL;
    info(p) = x;
    createListCourse(course(p));
    return p;
}

adr_student cariStudent(list_student L, string id){
    adr_student p = first(L);
    while (p!=NULL){
        if (info(p).id == id){
            return p;
        }
        p = next(p);
    }
    return NULL;
}

adr_course cariCourse(list_course L,string id_course){
    adr_course p = first(L);
    while (p!=NULL){
        if (info(p).course_id == id_course){
            return p;
        }
        p = next(p);
    }
    return NULL;
}

void printInfo(list_student L){
    adr_student p = first(L);
    while (p != NULL){
        cout << info(p).id << " " << info(p).name <<endl ;
        if (first(course(p)) != NULL ){
            cout << info(p).name << " ENROLL PADA MATA KULIAH: ";
            printInfoCourse(course(p));
        }
        p = next(p);
    }
}

void printInfoCourse(list_course L){
    adr_course p = first(L);
    if (first(L) == NULL) {
        cout << "List Kosong " <<endl;
    }else {
        while (p != NULL){
            cout << info(p).course_id << " " << info(p).course_name;
            p = next(p);
        }
        cout << endl;
    }
}

void addcourse(list_student &L1, list_course L2, string id, string course_id){
    adr_student p;
    adr_course q,r;
    list_course L3;
    p = cariStudent(L1,id);
    q = cariCourse(L2,course_id);
    //cout << info(p).name << " " << info(q).course_name;
    if (p !=NULL and q !=NULL){
        r = alokasiAnak(info(q));
        L3 = course(p);
        insertLastCourse(L3,r);
        course(p) = L3;

    }

}


