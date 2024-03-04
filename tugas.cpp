#include <iostream>
using namespace std;

int main(){
int nNilaiMtk, nNilaiFisika, nRerata;
string status;

cout << "Nilai Matematika: ";
cin >> nNilaiMtk;
cout << "Nilai Fisika: ";
cin >> nNilaiFisika;

nRerata = (nNilaiMtk = nNilaiFisika) / 2;

if (nRerata > 60 || nNilaiMtk > 70) {
    status = "Lulus";
}

else
{
    status= "Tidak Lulus";
}

cout << "Statusnya adalah " << status << endl;


}