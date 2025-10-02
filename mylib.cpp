#include "mylib.h"

void SkaitytiIsFailo(const string& failoVardas, vector<Studentas>& Grupe) {
    std::ifstream fd(failoVardas);
    if (!fd.is_open()) {
        cout << "Nepavyko atidaryti failo!" << endl;
        return;
    }

    string eilute;
    getline(fd, eilute);

    while (getline(fd, eilute)) {
        std::istringstream iss(eilute);
        Studentas st;
        iss >> st.pav >> st.var;

        int paz;
        int sum = 0;
        while (iss >> paz) {
            st.paz.push_back(paz);
        }

        st.egz = st.paz.back();
        st.paz.pop_back();

        for (int x : st.paz) sum += x;
        if (!st.paz.empty())
            st.gal = (double)sum / st.paz.size() * 0.4 + st.egz * 0.6;
        else
            st.gal = st.egz * 0.6;

        st.paz.push_back(st.egz);
        sort(st.paz.begin(), st.paz.end());
        if (st.paz.size() % 2 != 0) {
            st.med = st.paz[st.paz.size() / 2];
        }
        else {
            st.med = (st.paz[st.paz.size() / 2] + st.paz[st.paz.size() / 2 - 1]) / 2.0;
        }
        if(st.gal < 5){
            st.gr = "nuskriaustukai";
        }
        else if (st.gal >= 5){
            st.gr = "kietuoliai";
        }

        Grupe.push_back(st);
    }
    fd.close();
}

void SkaidytiStudentus(const vector<Studentas>& Grupe, vector<Studentas>& Nuskriaustukai, vector<Studentas>& Kietuoliai) {
    for (const auto& studentas : Grupe) {
        if (studentas.gr == "nuskriaustukai") {
            Nuskriaustukai.push_back(studentas);
        } else if (studentas.gr == "kietuoliai") {
            Kietuoliai.push_back(studentas);
        }
    }
}

void IrasytiIFaila(const string& failoVardas, vector<Studentas>& Grupe){
    std::ofstream fr(failoVardas);
    fr << "Studento informacija: " << endl;
    fr << setw(15) << left << "Pavarde" << setw(15) << "Vardas"
    << setw(20) << "Galutinis  (Vid.)"
    << setw(20) << "Galutinis (Med.)" << endl;
    for (auto Past : Grupe) {
        fr << setw(15) << left << Past.var
        << setw(15) << Past.pav
        << setw(20) << Past.gal
        << setw(20) << std::setprecision(2) << Past.med << setw(20) << Past.gr << endl;
    }
    fr.close();
}

void StudentuSarG(){
    std::ofstream fr("stud10000000.txt");
    int n, m;
    cout << "Kiek studentu norite? ";
    cin >> n;
    cout << "Kiek namu darbu pazymiu? ";
    cin >> m;
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
