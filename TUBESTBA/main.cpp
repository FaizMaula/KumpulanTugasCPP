#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define Top(S) (S).Top
#define info(S) (S).info
#define MAX_KALIMAT_LEN 120  // Maximum length of your address can't be more than 120

bool cekbagian(const std::string(&S)[5], const std::string& x) {
    for(int i = 0; i < 5; i++) {
        if(S[i] == x) {
            return true;
        }
    }
    return false;
}
typedef string infotype;

struct stack {
    infotype info[5];
    int Top;
};

void createStack_1301223017(stack &S){
    Top(S) = 0;
}
bool isEmpty_1301223017(stack S){
    return Top(S) == 0;
}

bool isFull_1301223017(stack S){
    return Top(S) == 15;
}

void push_1301223017(stack &S, infotype x){
    if (!isFull_1301223017(S)) {
        Top(S) = Top(S) + 1;
        info(S)[Top(S)] = x;
    }
}

infotype pop_1301223017(stack &S) {
    infotype x = info(S)[Top(S)];
    Top(S) = Top(S) - 1;
    return x;
}

void printInfo_1301223017(stack S){
    int i = 0;
    if (isEmpty_1301223017(S)) {
        cout << "Stack Kosong" << endl;
    } else {
        for (i = 1;i <= Top(S);i++){
            cout << info(S)[i] << " ";
        }
    }
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
        S.name = "subjek";
        S.isFinal =  1;
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
        vector TokenRecognizer(string inputString) {
            State *presentState = &start;
            cout<<presentState->name << "\n";
            char  kalimat[MAX_KALIMAT_LEN];
            cout << "Masukkan kalimat: ";
            cin.getline (kalimat, MAX_KALIMAT_LEN);
            string str = kalimat, s;
            stringstream ss(str);
            vector<string> v;
            while (getline(ss, s, ' ')) {
                v.push_back(s);
            }
            for (int i = 0; i < v.size(); i++) {
                presentState = &start;
                if(cekbagian(subjek,v[i])){
                    presentState = presentState->sInput;
                    cout<<v[i] <<" adalah "<<presentState->name << "\n";
                }else if(cekbagian(predikat,v[i])) {
                    presentState = presentState->pInput;
                    cout<<v[i] <<" adalah "<<presentState->name<< "\n";
                }else if(cekbagian(objek,v[i])) {
                    presentState = presentState->oInput;
                    cout<<v[i] <<" adalah "<<presentState->name<< "\n";
                }else if(cekbagian(keterangan,v[i])) {
                    presentState = presentState->kInput;
                    cout<<v[i] <<" adalah "<<presentState->name<< "\n";
                }
            }
            cout<<'\n';
            return v;
        }/*
        bool Parser(string ,){
            state = i;
            push_1301223017(S, "#");
            state = p;
            push_1301223017(S, V[0]);
            push_1301223017(S, V[1]);
            push_1301223017(S, V[2]);
            push_1301223017(S, V[3]);
            while info(S)[Top(S)] != "#"{
                switch(info(S)[Top(S)]){
                    case "subjek":
                        pop_1301223017(&S);
                        break;
                    case "predikat":
                        pop_1301223017(&S);
                        break;
                    case "objek":
                        pop_1301223017(&S);
                        break;
                    case "keterangan":
                        pop_1301223017(&S);
                        break;
                }
            }
            pop_1301223017(&S);
            State = f;
        }
};
*/
int main(){
    SPOK fsm;
    stack S;
    createStack_1301223017(&S);
    bool accepted = fsm.TokenRecognizer("");
    if(accepted) cout<<"accepted";
    else cout<<"Not accepted";

    return 0;
}
