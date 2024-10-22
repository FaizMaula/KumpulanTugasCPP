#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <iostream>
using namespace std;

#define Nil NULL
#define info(P) P->info
#define next(P) P->next
#define head(Q) ((Q).head)
#define tail(Q) ((Q).tail)

struct infotype {
    char pekerjaan;
    int waktu, dikerjakan = 0;
    string status = "unfinished";
};
typedef struct elmTugas *adr;
struct elmTugas {
    infotype info;
    adr next;
};
struct antrianTugas {
    adr head,tail;
};

bool queueEmpty_1301223017(antrianTugas Q);
void createQueue_1301223017(antrianTugas &Q);
void tambahTugas_1301223017(antrianTugas &Q, adr P);
void dailyTask_1301223017(antrianTugas &Q);
adr alokasi_1301223017(infotype info);
void printInfo_1301223017(antrianTugas Q);

#endif // QUEUE_H_INCLUDED
