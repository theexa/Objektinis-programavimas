#include "mylib.h"

int main() {
    string fpav;
    int z;
    cout << "Pasirinkite ar norite dirbti su vektoriais(1) ar su sarašais(2):";
    cin >> z;
    if (z == 1) {
         vector<Studentas> Grupe;
         vector<Studentas> Nuskriaustukai;
         vector<Studentas> Kietuoliai;
         VykdytiPrograma(Grupe, Nuskriaustukai, Kietuoliai);
     }
     else if (z == 2) {
         list<Studentas> Grupe;
         list<Studentas> Nuskriaustukai;
         list<Studentas> Kietuoliai;
         
         VykdytiPrograma(Grupe, Nuskriaustukai, Kietuoliai);
     }
    return 0;
}
