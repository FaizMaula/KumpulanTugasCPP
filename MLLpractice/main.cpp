#include "MLL.h"

using namespace std;

int main()
{
    list_course L2;
    list_student L1;
    createListStudent(L1);
    createListCourse(L2);
    adr_student p;
    adr_course q;
    infotype_student x;
    string id,course_id;
    infotype_course y;

    for (int i = 0;i<=3;i++) {
        cout << "input id student dan nama" << endl;
        cin >> x.id >> x.name;
        p = alokasi(x);
        insertStudent(L1,p);
    }


    for (int j = 0;j<=3;j++) {
        cin >> y.course_id >> y.course_name;
        q = alokasiAnak(y);
        insertLastCourse(L2,q);
    }
    printInfo(L1);

    for (int i = 0; i<=2;i++){
        cin >> id >> course_id;
        addcourse(L1,L2,id,course_id);
    }
    cout << "KONDISI SETELAH ADDCOURSE" << endl;
    printInfo(L1);

    //printInfoCourse(L2);
}
