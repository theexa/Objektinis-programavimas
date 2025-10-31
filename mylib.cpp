// bendros funkcijos
#include "mylib.h"

void MatuotiLaika(const string& operacijosPavadinimas, std::function<void()> operacija) {
    auto start = std::chrono::high_resolution_clock::now();
    
    operacija();
    
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    
    cout << operacijosPavadinimas << " uztruko: ";
    cout << duration.count() << endl; //" s" << endl;
}

void StudentuSarG(int n, int m){
    std::ofstream fr("stud1000.txt");
    srand(time(0));
    fr << setw(15) << left << "Pavarde" << setw(15) << "Vardas";
    for (int i = 0; i < m; i++){
        fr << setw(5) << right <<"ND" << i+1 ;
    }
    fr << " Egzaminas" << endl;
    for (int i = 0; i < n; i++){
        fr << setw(7) << left << "Pavarde" << setw(8) << left << (i+1) << setw(6) << left << "Vardas" << setw(9) << left << (i+1);
        for (int j = 0; j < m+1; j++){
                    int randomNum = rand() % 10 + 1;
                    fr << setw(6) << right << randomNum;
                }
                fr << endl;
    }
    fr.close();
}

template<typename Container>
void VykdytiPrograma(Container& Grupe, Container& Nuskriaustukai, Container& Kietuoliai) {
    string fpav;
    int n, m;
    int s;
    cout << "Ar norite sukurti atsitiktinius studentu sąrašus? Taip - (1), Ne - (2): ";
    cin >> s;
    if(s == 1){
        cout << "Kiek studentu norite? ";
        cin >> n;
        cout << "Kiek namu darbu pazymiu? ";
        cin >> m;
    }
    
    int pasirinkimas;
    cout << "Ar norite ivesti studentus rankiniu budu? Taip - (1), Ne - (2): ";
    cin >> pasirinkimas;
    
    if (pasirinkimas == 1) {
        int kiek;
        cout << "Kiek studentu norite ivesti? ";
        cin >> kiek;
        for (int i = 0; i < kiek; i++) {
            cout << "\nIvedamas " << i+1 << " studentas:" << endl;
            RanksinisIvedimas(Grupe);
        }
        return; // Baigiame čia, jei vartotojas įvedė rankiniu būdu
    }
    
    cout << "Iveskite failo pavadinima: ";
    cin >> fpav;
    
    int rusiavimoPasirinkimas;
    cout << "\nPasirinkite rusiavimo kriterijų:\n";
    cout << "1 - Pagal pavardę\n";
    cout << "2 - Pagal vardą\n";
    cout << "3 - Pagal galutinį balą (vidurkį)\n";
    cout << "4 - Pagal medianą\n";
    cout << "Jūsų pasirinkimas: ";
    cin >> rusiavimoPasirinkimas;
    
    Grupe.clear();
    Nuskriaustukai.clear();
    Kietuoliai.clear();
    if (s==1){
        MatuotiLaika("Studentu saraso generavimas", [&](){
            StudentuSarG(n, m);
        });
    }
        
    MatuotiLaika("Failo skaitymas", [&]() {
        SkaitytiIsFailo(fpav, Grupe);
    });
        
    MatuotiLaika("Studentu rusiavimas", [&]() {
        RusiuotiStudentus(Grupe, rusiavimoPasirinkimas);
    });
        
    MatuotiLaika("Studentu skaidymas i grupes", [&]() {
        SkaidytiStudentus(Grupe, Nuskriaustukai, Kietuoliai);
    });
        
    MatuotiLaika("Nuskriaustuku irasymas i faila", [&]() {
        IrasytiIFaila("Rezultatai10000000A.txt", Nuskriaustukai);
    });
        
    MatuotiLaika("Kietuoliu irasymas i faila", [&]() {
        IrasytiIFaila("Rezultatai10000000B.txt", Kietuoliai);
    });
}

template void VykdytiPrograma(vector<Studentas>&, vector<Studentas>&, vector<Studentas>&);
template void VykdytiPrograma(list<Studentas>&, list<Studentas>&, list<Studentas>&);
