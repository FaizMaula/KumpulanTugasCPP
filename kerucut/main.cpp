#include "kerucut.h"
int main()
{
    kerucut kr;
    inputK_1301223017(kr);

    kr.s = sqrt(pow(kr.r,2) + pow(kr.t,2));
    cout << "Panjang garis pelukis kerucut: " << kr.s << endl;
    kr.v = volume_1301223017(kr.r,kr.t);
    cout << "Nilai volume kerucut adalah: " << kr.v << endl;
    kr.l = luas_1301223017(kr.r,kr.s);
    cout << "Nilai luas kerucut adalah: " << kr.l << endl;
    return 0;
}
