#include <iostream>
#include "ObjektuSarasas.h"
#include "SpalvosPaketas.h"
#include <vector>


using namespace std;

int main() {
    auto *Mokykla = new ObjektuSarasas("Sakiu Ziburio gimnazija");

    auto *Mokytojai = new ObjektuSarasas("Mokyklos mokytojai");
    auto *Mokiniai= new ObjektuSarasas("Mokyklos mokiniai");
    auto *Tvarkarastis = new ObjektuSarasas("Pamoku tvarkarastis");
    auto *Ekskursijos = new ObjektuSarasas("Ekskursijos");
    auto *MokyklosPatalpos = new ObjektuSarasas("Mokyklos patalpos ir nauji darbai");

    Mokykla->PildytiVardusPavadinimus(Mokytojai);
    Mokykla->PildytiVardusPavadinimus(Mokiniai);
    Mokykla->PildytiVardusPavadinimus(Tvarkarastis);
    Mokykla->PildytiSarasa(Ekskursijos);
    Mokykla->PildytiSarasa(MokyklosPatalpos);

    auto *Mokytojas = new KonkretusObjektai("Lietuviu kalbos mokytojas. Petras Sedlauskas.");
    auto *Mokytojas1 = new KonkretusObjektai("Fizikos mokytojas. Tadas Lukasevicius. ");
    auto *Mokytojas2 = new KonkretusObjektai("Kuno kultoros mokytojas. Tomas Ambrasas.");
    auto *Mokytojas3 = new KonkretusObjektai("Matematikos mokytoja. Jolanta Urbiene.");
    auto *Mokytojas4 = new KonkretusObjektai("Geografijos mokytoja. Sandra Zematiene.");
    auto *Mokytojas5 = new KonkretusObjektai("Chemijos mokytoja. Simona Ambrasaitiene.");

    auto *Mokinys = new KonkretusObjektai("Juozas Dramblevicius");
    auto *Mokinys1 = new KonkretusObjektai("Benediktas Vanagas");
    auto *Mokinys2 = new KonkretusObjektai("Alfonsas Miskinis");
    auto *Mokinys3 = new KonkretusObjektai("Aida Butkute");
    auto *Mokinys4 = new KonkretusObjektai("Alvyda Simkute");
    auto *Mokinys5 = new KonkretusObjektai("Sabina Savicke");
    auto *Mokinys6 = new KonkretusObjektai("Benas Kalinauskas");
    auto *Mokinys7 = new KonkretusObjektai("Audrius Palionis");
    auto *Mokinys8= new KonkretusObjektai("Daumantas Masionis");
    auto *Mokinys9 = new KonkretusObjektai("Egle Sakalauskaite");
    auto *Mokinys10 = new KonkretusObjektai("Gabija Rudokaite");
    auto *Mokinys11 = new KonkretusObjektai("Indre Vasiliauskaite");
    auto *Mokinys12 = new KonkretusObjektai("Laisve Bendoraite");
    auto *Mokinys13 = new KonkretusObjektai("Gintas Naujokas");
    auto *Mokinys14 = new KonkretusObjektai("Naglis Vaitkus");
    auto *Mokinys15 = new KonkretusObjektai("Orestas Rutkauskas");
    auto *Mokinys16 = new KonkretusObjektai("Skirmantas Mikalauskas");

    auto *Pirmadienis = new KonkretusObjektai("Pirmadienis."
                                              " 1. Lietiuviu kalba."
                                              " 2. Lietuviu kalba."
                                              " 3. Matematika."
                                              " 4. Istorija."
                                              " 5. Kuno kultura.");

    auto *Antradienis = new KonkretusObjektai("Antradienis."
                                              " 1.  Geografija."
                                              " 2.  Chemija."
                                              " 3.  Lietuviu kalba."
                                              " 4.  Anglu kalba."
                                              " 5.  Daile.");
    auto *Treciadienis = new KonkretusObjektai("Treciadienis."
                                               " 1. Lietukiu kalba."
                                               " 2. Lietuviu kalba."
                                               " 3. Biologija."
                                               " 4. Rusu/Vokieciu kalba."
                                               " 5. Anglu kalba."
                                               " 6. Etika. ");
    auto *Ketvirtadienis = new KonkretusObjektai("Ketvirtadienis."
                                                 " 1. Muzika."
                                                 " 2. Daile."
                                                 " 3. Daile."
                                                 " 4. Matematika."
                                                 " 5. Chemija."
                                                 " 6. Geografija.");
    auto *Penktadienis = new KonkretusObjektai ("Penktadienis."
                                                " 1. Etika/Tikyba."
                                                " 2. Technologijos."
                                                " 3. Technologijos."
                                                " 4. Informacines technologijos."
                                                " 5. Fizika.   ");

    auto *PirmaEkskursija = new KonkretusObjektai("Kauno karo muziejus. Ekskursijos kaina", 150.99);
    auto *AntraEkskursija = new KonkretusObjektai("Vilnius oro uostas. Ekskursijos kaina", 55.85);

    auto *AktuSale = new KonkretusObjektai("Aktu sale.  Verte",12000);
    auto *Stadionas = new KonkretusObjektai("Stadionas.  Verte", 8900);
    auto *KKambinetas = new KonkretusObjektai("Kompiuteriu kabinetas.  Verte", 88000);
    auto *SSale = new KonkretusObjektai("Sporto sale.  Verte", 99000);


    Mokytojai->PildytiVardusPavadinimus(Mokytojas);
    Mokytojai->PildytiVardusPavadinimus(Mokytojas1);
    Mokytojai->PildytiVardusPavadinimus(Mokytojas2);
    Mokytojai->PildytiVardusPavadinimus(Mokytojas3);
    Mokytojai->PildytiVardusPavadinimus(Mokytojas4);
    Mokytojai->PildytiVardusPavadinimus(Mokytojas5);
    Mokiniai->PildytiVardusPavadinimus(Mokinys);
    Mokiniai->PildytiVardusPavadinimus(Mokinys1);
    Mokiniai->PildytiVardusPavadinimus(Mokinys2);
    Mokiniai->PildytiVardusPavadinimus(Mokinys3);
    Mokiniai->PildytiVardusPavadinimus(Mokinys4);
    Mokiniai->PildytiVardusPavadinimus(Mokinys5);
    Mokiniai->PildytiVardusPavadinimus(Mokinys6);
    Mokiniai->PildytiVardusPavadinimus(Mokinys7);
    Mokiniai->PildytiVardusPavadinimus(Mokinys8);
    Mokiniai->PildytiVardusPavadinimus(Mokinys9);
    Mokiniai->PildytiVardusPavadinimus(Mokinys10);
    Mokiniai->PildytiVardusPavadinimus(Mokinys11);
    Mokiniai->PildytiVardusPavadinimus(Mokinys12);
    Mokiniai->PildytiVardusPavadinimus(Mokinys13);
    Mokiniai->PildytiVardusPavadinimus(Mokinys14);
    Mokiniai->PildytiVardusPavadinimus(Mokinys15);
    Mokiniai->PildytiVardusPavadinimus(Mokinys16);

    Tvarkarastis->PildytiVardusPavadinimus(Pirmadienis);
    Tvarkarastis->PildytiVardusPavadinimus(Antradienis);
    Tvarkarastis->PildytiVardusPavadinimus(Treciadienis);
    Tvarkarastis->PildytiVardusPavadinimus(Ketvirtadienis);
    Tvarkarastis->PildytiVardusPavadinimus(Penktadienis);

    Ekskursijos->PildytiSarasa(PirmaEkskursija);
    Ekskursijos->PildytiSarasa(AntraEkskursija);

    MokyklosPatalpos->PildytiSarasa(AktuSale);
    MokyklosPatalpos->PildytiSarasa(Stadionas);
    MokyklosPatalpos->PildytiSarasa(KKambinetas);
    MokyklosPatalpos->PildytiSarasa(SSale);

    Mokykla->Gautikaina();


    int pasirinkimas = 1;
    while (pasirinkimas != 0) {
        SpalvosPaketas::KeistiSpalva(12);
        cout << "+++++++++++++++++++++++++++++++++++++++++++++++" << endl;
        cout << "                    MENIU                      " << endl;
        cout << "+++++++++++++++++++++++++++++++++++++++++++++++" << endl;
        cout << "1. Mokyklos apzvalga." << endl;
        cout << "2. Mokytoju sarasas." << endl;
        cout << "3. Mokiniu sarasas." << endl;
        cout << "4. Dabartinis tvarkarastis." << endl;
        cout << "5. Numatytos ekskursijos." << endl;
        cout << "6. Mokyklos patalpos bei ju verte." << endl;
        cout << "7. Naujo pastato statyba mokykloje ir kaina." << endl;
        cout << "8. Visos mokyklos verte." << endl;
        cout << "9. Prideti nauju mokytoju is saraso." << endl;
        cout << "10. Prideti nauju mokiniu is saraso." << endl;
        cout << "0. Iseiti." << endl;


        SpalvosPaketas::KeistiSpalva(14);
        cout << "Pasirinkite MENIU numeri: ";
        cin >> pasirinkimas;

        switch(pasirinkimas){
            case 1:
                Mokykla->GautivardusArPav();
                Mokykla->Gautipavadinimus();

                break;
            case 2:
                Mokytojai->GautivardusArPav();

                break;
            case 3:
                Mokiniai->GautivardusArPav();

                break;
            case 4:
                Tvarkarastis->GautivardusArPav();

                break;
            case 5:
                Ekskursijos->Gautipavadinimus();

                break;
            case 6:
                MokyklosPatalpos->Gautipavadinimus();
                cout << "Bendra verte: " << Mokykla->Gautikaina() << endl;

                break;
            case 7: {
                cout << "Pradedamas statymas..." << endl;

                string kategorija;
                cout << "Iveskite kategorijos pavadinima:";
                cin.ignore();
                getline(cin, kategorija);

                auto * pastatas = new ObjektuSarasas(kategorija);

                string pavadinimas;
                double kaina;
                cout << "Iveskite pastato pavadinimas: ";
                getline(cin, pavadinimas);
                cout << "Iveskite suma kiek kainuos pastato statyba: ";
                cin >> kaina;

                auto *sarasas = new KonkretusObjektai(pavadinimas, kaina);
                pastatas->PildytiSarasa(sarasas);
                Mokykla->PildytiSarasa(pastatas);

                break;
            }

            case 8:
               cout  << "Mokyklos verte yra: " << Mokykla->Gautikaina() << endl;
               break;

            case 9:{

                vector<KonkretusObjektai> mokytojuSarasas{
                    KonkretusObjektai("Lietuviu mokytoja. Audrone Pikciulingine"),
                    KonkretusObjektai("Geografijos Mokytoja. Aldona Navickiene")
                };

                for (int i = 0; i < mokytojuSarasas.size(); ++i) {
                    cout << (i+1) << ". " << mokytojuSarasas[i].getVardasArPavadinimas() << endl;
                    
                }
                cout << "Issirinkite norima mokytoja: ";
                int parinktis;
                cin >> parinktis;
                auto *Mokytojai6 = new KonkretusObjektai(mokytojuSarasas[parinktis-1].getVardasArPavadinimas());
                Mokytojai->PildytiVardusPavadinimus(Mokytojai6);

                break;
            }

            case 10:{

                vector<KonkretusObjektai> mokiniuSarasas{
                        KonkretusObjektai("Jonas Zemaitaitis"),
                        KonkretusObjektai("Tomas Venslauskas"),
                        KonkretusObjektai("Greta Zemaityte"),
                        KonkretusObjektai("Toma Butkute"),
                        KonkretusObjektai("Arminas Narkunas")
                };

                for (int i = 0; i < mokiniuSarasas.size(); ++i) {
                    cout << (i+1) << ". " << mokiniuSarasas[i].getVardasArPavadinimas() << endl;

                }
                cout << "Issirinkite norima mokini: ";
                int parinktis1;
                cin >> parinktis1;
                auto *Mokiniai18 = new KonkretusObjektai(mokiniuSarasas[parinktis1-1].getVardasArPavadinimas());
                Mokiniai->PildytiVardusPavadinimus(Mokiniai18);

                break;
            }

            default:
                cout << "Tokio pasirinkimo nera ! ! !" << endl;
                break;
    }
        }





    return 0;
}