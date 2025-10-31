# Objektinis-programavimas
### Testavimo sistemos parametrai
CPU: Apple M3 <br>
RAM: 16GB <br>
HDD: SSD 512GB <br>
### Testavimo aprašymas
Programos testavimo metu buvo naudojami tokie failai:<br>
* 1000 studentų - stud1000.txt
* 10000 studentų - stud10000.txt
* 100000 studentų - stud100000.txt
* 1000000 studentų - stud1000000.txt
* 10000000 studentų - stud10000000.txt <br>

Testavimo failao sudetis - Vardas, Pavardė, 5 Namų darbų pažymiai ir egzamino pažymys.<br>
Testavimo laiko tikslumui, programa duomenis apdorojo penkis kartus, lentelėje yra pateikti testavimo laikų vidurkiai.
#### Tyrimas su vector tipo konteineriu:
| Failas             | Failo kūrimas | Duomenų nuskaitymas | Studentų rūšiavimas | Duomenų skaidymas | Išvedimas į failus (<5) | Išvedimas į failus >=5) |
|:-------------------|:--------------|:--------------------|:--------------------|:------------------|:------------------------|:------------------------|
| stud1000.txt       | 0.003123 s    | 0.003993 s          | 0.00093 s           | 0.000344 s        | 0.00089 s               | 0.00120 s               |
| stud10000.txt      | 0.020273 s    | 0.040446 s          | 0.00702 s           | 0.003318 s        | 0.00839 s               | 0.01164 s               |
| stud100000.txt     | 0.198215 s    | 0.404583 s          | 0.06672 s           | 0.033983 s        | 0.08366 s               | 0.11289 s               |
| stud1000000.txt    | 1.922578 s    | 4.082662 s          | 0.66037 s           | 0.398755 s        | 0.80252 s               | 1.13977 s               |
| stud10000000.txt   | 21.73358 s    | 33.01044 s          | 6.46142 s           | 3.008542 s        | 7.20668 s               | 12.7480 s               |

#### Tyrimas su list tipo konteineriu:
| Failas             | Failo kūrimas | Duomenų nuskaitymas | Studentų rūšiavimas | Duomenų skaidymas | Išvedimas į failus (<5) | Išvedimas į failus >=5) |
|:-------------------|:--------------|:--------------------|:--------------------|:------------------|:------------------------|:------------------------|
| stud1000.txt       | 0.003295 s    | 0.004071 s          | 0.00023 s           | 0.000333 s        | 0.00103 s               | 0.00119 s               |
| stud10000.txt      | 0.024072 s    | 0.040726 s          | 0.00284 s           | 0.003214 s        | 0.00873 s               | 0.01233 s               |
| stud100000.txt     | 0.201635 s    | 0.401682 s          | 0.03419 s           | 0.034260 s        | 0.08066 s               | 0.11291 s               |
| stud1000000.txt    | 1.887777 s    | 4.066808 s          | 0.64677 s           | 0.386003 s        | 0.80637 s               | 1.12884 s               |
| stud10000000.txt   | 21.74144 s    | 39.98160 s          | 6.05281 s           | 3.257018 s        | 7.20628 s               | 12.8282 s               |

### Rezultatų išvedimo pavyzdys 
<img width="524" height="126" alt="Screenshot 2025-10-30 at 19 15 48" src="https://github.com/user-attachments/assets/82c56d05-7f4d-4ebc-a4ea-948e3aa18886" />
<br>

### Tyrimo rezultatai

Tiriant konteinerių spartą su skirtingais duomenų kiekiais, rezultatai buvo labai panašūs.
