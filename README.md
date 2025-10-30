# Objektinis-programavimas

### Testavimo sistemos parametrai
CPU: Apple M3 <br>
RAM: 16GB <br>
HDD: SSD 512GB <br>

#### Tyrimas su vector tipo konteineriu:
| Failas             | Failo kūrimas | Duomenų nuskaitymas | Studentų rūšiavimas | Duomenų skaidymas | Išvedimas į failus (<5) | Išvedimas į failus >=5) |
|:-------------------|:--------------|:--------------------|:--------------------|:------------------|:------------------------|:------------------------|
| stud1000.txt       | 0.00312262 s  | 0.003993 s          | 0.000933 s          | 0.000344 s        | 0.000894 s              | 0.001203 s              |
| stud10000.txt      | 0.02027300 s  | 0.040446 s          | 0.00702 s           | 0.003318 s        | 0.00839 s               | 0.011643 s              |
| stud100000.txt     | 0.19821500 s  | 0.404583 s          | 0.066723 s          | 0.033983 s        | 0.083657 s              | 0.112895 s              |
| stud1000000.txt    | 1.92257800 s  | 4.082662 s          | 0.660367 s          | 0.398755 s        | 0.802523 s              | 1.13977 s               |
| stud10000000.txt   | 21.7335800 s  | 33.01044 s          | 6.461424 s          | 3.008542 s        | 7.20668 s               | 12.74802 s              |

#### Tyrimas su list tipo konteineriu:
| Failas             | Failo kūrimas | Duomenų nuskaitymas | Studentų rūšiavimas | Duomenų skaidymas | Išvedimas į failus (<5) | Išvedimas į failus >=5) |
|:-------------------|:--------------|:--------------------|:--------------------|:------------------|:------------------------|:------------------------|
| stud1000.txt       | 0.003295 s    | 0.004071 s          | 0.000232 s          | 0.000333 s        | 0.001034 s              | 0.00119 s               |
| stud10000.txt      | 0.024072 s    | 0.040726 s          | 0.002842 s          | 0.003214 s        | 0.008733 s              | 0.012327 s              |
| stud100000.txt     | 0.201635 s    | 0.401682 s          | 0.034188 s          | 0.03426 s         | 0.080656 s              | 0.112906 s              |
| stud1000000.txt    | 1.887777 s    | 4.066808 s          | 0.64677 s           | 0.386003 s        | 0.806371 s              | 1.128836 s              |
| stud10000000.txt   | 21.74144 s    | 39.9816 s           | 6.05281 s           | 3.257018 s        | 7.20628 s               | 12.82822 s              |
