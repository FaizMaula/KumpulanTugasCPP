#include <iostream>
using namespace std;

bool cekbagian(const std::string(&S)[5], const std::string& x) {
    for(int i = 0; i < 5; i++) {
        if(S[i] == x) {
            return true;
        }
    }
    return false;
}

string subjek[5] = {"Anak", "Guru", "Dokter", "Petani", "Pelukis"};
string predikat[5] = {"membaca", "mengajar", "merawat", "menanam", "melukis"};
string objek[5] = {"buku", "siswa", "pasien", "padi", "kanvas"};
string keterangan[5] = {"di sekolah", "dengan baik", "setiap hari", "di sawah", "dengan hati-hati"};

typedef struct Node{
        string name;
        bool isFinal = 0;
        struct Node *sInput  = NULL;
        struct Node *pInput = NULL;
        struct Node *oInput = NULL;
        struct Node *kInput = NULL;
    } State;

class SPOK{
    State start,S,P,O,K;

    public:
    SPOK(){
        S.name = "Subjek";
        S.isFinal =  1;
        P.name, P.isFinal = "Predikat", 1;
        O.name, O.isFinal = "Objek", 1;
        K.name, K.isFinal = "Keterangan", 1;
        start.name = "Start";


        //start state
        start.sInput = &S;
        start.oInput = &O;
        start.pInput = &P;
        start.kInput = &K;
    }
        bool determine(string inputString) {
            State *presentState = &start;
            cout<<presentState->name;
            string c;
            cin >> c;
            if(c != "KOSONG"){
                if(cekbagian(subjek,c)){
                    presentState = presentState->sInput;
                    cout<<"-->"<<presentState->name;
                }else if(cekbagian(predikat,c)) {
                    presentState = presentState->kInput;
                    cout<<"-->"<<presentState->name;
                }else if(cekbagian(objek,c)) {
                    presentState = presentState->oInput;
                    cout<<"-->"<<presentState->name;
                }else if(cekbagian(keterangan,c)) {
                    presentState = presentState->kInput;
                    cout<<"-->"<<presentState->name;
                }
            }
        cout<<'\n';
        return presentState->isFinal;
    }
};

int main(){
    SPOK fsm;
    bool accepted = fsm.determine("");
    if(accepted) cout<<"accepted";
    else cout<<"Not accepted";
    return 0;
}
