// visos vektoriaus funkcijos
#include "mylib.h"

void RusiuotiStudentus(vector<Studentas>& studentai, int kriterijus) {
    if (kriterijus == 1) { // Pagal pavardę
        std::sort(studentai.begin(), studentai.end(), [](const Studentas& a, const Studentas& b) {
            if (a.pav == b.pav)
                return a.var < b.var;
            return a.pav < b.pav;
        });
    }
    else if (kriterijus == 2) { // Pagal vardą
        std::sort(studentai.begin(), studentai.end(), [](const Studentas& a, const Studentas& b) {
            if (a.var == b.var)
                return a.pav < b.pav;
            return a.var < b.var;
        });
    }
    else if (kriterijus == 3) { // Pagal galutinį balą (vidurkį)
        std::sort(studentai.begin(), studentai.end(), [](const Studentas& a, const Studentas& b) {
            return a.gal > b.gal;
        });
    }
    else if (kriterijus == 4) { // Pagal medianą
        std::sort(studentai.begin(), studentai.end(), [](const Studentas& a, const Studentas& b) {
            return a.med > b.med;
        });
    }
    else {
        cout << "Nežinomas rūšiavimo kriterijus. Rūšiuojama pagal pavardę." << endl;
        std::sort(studentai.begin(), studentai.end(), [](const Studentas& a, const Studentas& b) {
            if (a.pav == b.pav)
                return a.var < b.var;
            return a.pav < b.pav;
        });
    }
}

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

void IrasytiIFaila(const string& failoVardas, const vector<Studentas>& Grupe){
    std::ofstream fr(failoVardas);
    fr << "Studento informacija: " << endl;
    fr << setw(15) << left << "Pavarde" << setw(15) << "Vardas"
    << setw(20) << "Galutinis  (Vid.)"
    << setw(20) << "Galutinis (Med.)" << endl;
    for (auto Past : Grupe) {
        fr << setw(15) << left << Past.pav
        << setw(15) << Past.var
        << setw(20) << std::fixed << std::setprecision(2) << Past.gal
        << setw(20) << std::fixed << std::setprecision(2) << Past.med <<endl;
    }
    fr.close();
}
