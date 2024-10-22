#ifndef MLL_H_INCLUDED
#define MLL_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) (L).first
#define info(P) P->info
#define next(P) P->next
#define course(P) P->course

struct infotype_student{
    string id,name;
};
struct infotype_course{
    string course_id,course_name;
    int credit;
};
typedef struct elmStudent *adr_student;
typedef struct elm_course *adr_course;
struct list_course{
    adr_course first;
};
struct elmStudent{
    infotype_student info;
    adr_student next;
    list_course course;
};

struct elm_course {
    infotype_course info;
    adr_course next;
};

struct list_student{
    adr_student first;
};

void createListStudent(list_student &L);
void createListCourse(list_course &L);
void insertStudent(list_student &L, adr_student P);
void insertLastCourse(list_course &L, adr_course P);
adr_course alokasiAnak(infotype_course x);
adr_student alokasi(infotype_student x);
void printInfo(list_student L);
void addcourse(list_student &L1, list_course L2, string id, string course_id);
/* I.S. list mungkin kosong
 F.S. jika list tidak kosong menampilkan semua info yang ada pada list
*/
adr_course cariCourse(list_course L,string id_course);
adr_student cariStudent(list_student L, string id);
void printInfoCourse(list_course L);




#endif // MLL_H_INCLUDED
