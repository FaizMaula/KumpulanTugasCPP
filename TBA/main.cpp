#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include "TBA.h"

#define MAX_KALIMAT_LEN 120  // Maximum length of your address can't be more than 120

bool cekbagian(const std::string(&S)[5], const std::string& x) {
    for (int i = 0; i < 5; i++) {
        if (S[i] == x) {
            return true;
        }
    }
    return false;
}

string subjek[5] = { "Anak", "Guru", "Dokter", "Petani", "Pelukis" };
string predikat[5] = { "membaca", "mengajar", "merawat", "menanam", "melukis" };
string objek[5] = { "buku", "siswa", "pasien", "padi", "kanvas" };
string keterangan[5] = { "di sekolah", "dengan baik", "setiap hari", "di sawah", "dengan hati-hati" };

typedef struct Node {
    string name;
    bool isFinal = 0;
    struct Node* sInput = NULL;
    struct Node* pInput = NULL;
    struct Node* oInput = NULL;
    struct Node* kInput = NULL;
} State;

class SPOK {
    State start, S, P, O, K;

public:
    SPOK() {
        S.name = "subjek";
        S.isFinal = 1;
        P.name = "predikat";
        P.isFinal = 1;
        O.name = "objek";
        O.isFinal = 1;
        K.name = "keterangan";
        K.isFinal = 1;
        start.name = "Start";

        //start state
        start.sInput = &S;
        start.oInput = &O;
        start.pInput = &P;
        start.kInput = &K;
    }

    bool determine(string inputString) {
        struktur S;
        createStack_1301223017(S);
        push_1301223017(S, "#");
        State* presentState = &start;
        cout << presentState->name << "\n";
        char kalimat[MAX_KALIMAT_LEN];
        cout << "Enter your sentence: ";
        cin.getline(kalimat, MAX_KALIMAT_LEN);
        string str = kalimat, s;
        stringstream ss(str);
        vector<string> v;
        while (getline(ss, s, ' ')) {
            v.push_back(s);
        }

        for (int i = v.size() - 1; i >= 0; i--) {
            cout << "\n";
            presentState = &start;
            string phrase = v[i];
            if (i > 0 && v[i - 1] == "di" && (phrase == "sekolah" || phrase == "sawah")) {
                phrase = v[i - 1] + " " + v[i];
                i--;
            } else if (i > 0 && v[i - 1] == "dengan" && (phrase == "baik" || phrase == "hati-hati")) {
                phrase = v[i - 1] + " " + v[i];
                i--;
            } else if (i > 0 && v[i - 1] == "setiap" && phrase == "hari") {
                phrase = v[i - 1] + " " + v[i];
                i--;
            }

            if (cekbagian(subjek, v[i])) {
                presentState = presentState->sInput;
                cout << v[i] << " adalah " << presentState->name << "\n";
                Parser(S, "S", 0);
            } else if (cekbagian(predikat, v[i])) {
                presentState = presentState->pInput;
                cout << v[i] << " adalah " << presentState->name << "\n";
                Parser(S, "P", 0);
            } else if (cekbagian(objek, v[i])) {
                presentState = presentState->oInput;
                cout << v[i] << " adalah " << presentState->name << "\n";
                Parser(S, "O", 0);
            } else if (cekbagian(keterangan, phrase)) {
                presentState = presentState->kInput;
                cout << phrase << " adalah " << presentState->name << "\n";
                Parser(S, "K", 0);
            }
        }
        cout << '\n';
        Parser(S, "-", 1);

        return true;
    }

    void Parser(struktur& S, string x, int i) {
        if (x == "S") {
            push_1301223017(S, "S");
        } else if (x == "P") {
            push_1301223017(S, "P");
        } else if (x == "O") {
            push_1301223017(S, "O");
        } else if (x == "K") {
            push_1301223017(S, "K");
        }
        printInfo_1301223017(S);
        string a;
        if (i == 1) {
            if (info(S)[Top(S)] == "S") {
                pop_1301223017(S);
                a += "S";
                cout << "\n";
                printInfo_1301223017(S);
            }
            if (info(S)[Top(S)] == "P") {
                pop_1301223017(S);
                a += "P";
                cout << "\n";
                printInfo_1301223017(S);
            }
            if (info(S)[Top(S)] == "O") {
                pop_1301223017(S);
                a += "O";
                cout << "\n";
                printInfo_1301223017(S);
            }
            if (info(S)[Top(S)] == "K") {
                pop_1301223017(S);
                a += "K";
                cout << "\n";
                printInfo_1301223017(S);
            }
            pop_1301223017(S);
            printInfo_1301223017(S);
            if (a == "SP" || a == "SPO" || a == "SPOK" ||  a == "SPK") {
                cout << "\nStruktur Kalimat adalah " << a;
            }else{
                cout << "\nStruktur Tidak Valid";
            }
        }
    }
};

int main() {
    SPOK fsm;
    bool accepted = fsm.determine("");
    return 0;
}
