#include <iostream>
#include <iomanip>

using namespace std;

void matrisiOlustur(int &satir, int &sutun){
    cout << "Satir sayisini giriniz: ";
    cin >> satir;
    cout << "Sutun sayisini giriniz: ";
    cin >> sutun;
}

void degerleriAl(int** matris, int satir, int sutun) {
    for(int i = 0; i < satir; i++) {
        matris[i] = new int[sutun];
        for(int j = 0; j < sutun; j++) {
            cout << (i + 1) << ".Satir " << (j + 1) << ".Sutun:";
            cin >> matris[i][j];
        }
    }
    cout << endl;
}

void matrisiGoster(int** matris, int satir, int sutun) {
    cout << "Matris (" << satir  << "x" << sutun << ")" << endl;
    for(int i = 0; i < satir; i++) {
        for(int j = 0; j < sutun; j++) {
            cout << setw(5);
            cout << matris[i][j]; 
        }
        cout << endl;
    }
    cout << endl;
}

void transpozunuAl(int** matris, int satir, int sutun) {
    cout << "Matrisin Transpozu (" << sutun  << "x" << satir << ")" << endl;
    for(int i = 0; i < sutun; i++) {
        for(int j = 0; j < satir; j++) {
            cout << setw(5);
            cout << matris[j][i]; 
        }
        cout << endl;
    }
    cout << endl;
}

void serbestBirak(int** matris, int satir) {
    for(int i = 0; i < satir; i++) {
        delete[] matris[i]; 
    }
    delete[] matris;
}

int main() {
    int satir = 0, sutun = 0;
    matrisiOlustur(satir, sutun);
    int** matris = new int*[satir];

    degerleriAl(matris, satir, sutun);
    matrisiGoster(matris, satir, sutun);
    transpozunuAl(matris, satir, sutun);
    serbestBirak(matris, satir);
}