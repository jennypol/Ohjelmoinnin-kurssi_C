#include <iostream>
#include <string>
#include <ifstream>
using namespace std;



 

    void paaValikko() {
        int valinta = 0;

        try {
            cout << "Tervetuloa!\n";
            cout << "Valitse vaihtoehto:"
                + "1) Yksinpeli "
                + "2) Ohjeet "
                + "3) Lopeta\n";
            do {
                cin >> valinta;
            } while (valinta > 4 || valinta < 1);
        }
        catch (...) {
            cout << "Tarkista että syötteesi on 1,2,3, tai 4\n";
            paaValikko();
        } if (valinta == 1) {//Siirtyy pelaamaan yksinpeliä
            yksinPeli();

        }
        else if (valinta == 2) {//Siirtyy ohjeisiin
            int valmis;

            try {
                string teksti
                ifstream MyReadFile("tiedosto.txt");
                while (getline(MyReadFile, mytext)) {
                    cout << teksti;
                }
            }
        }
        else if (valinta == 4) { //poistutaan pelistä
            cout << "Näkemiin \n";
        }
    };

    void yksinPeli() {
        string sana = arvattavaSana();
        string sanaTuloste = "";
        int kierrosLaskuri = 0;
        int hirsipuuTila = 0;

        for (int i = 0; < sana.length(); i++) {
            sanaTuloste += "_";
        }
        while (hirsipuunTila <= 9) {
            char arvattuKirjain;
            hirsipuunTulostus(hirsipuunTila);
            kierrosLaskuri += 1;
            cout << sanaTuloste;
            cout << "Arvaa kirjain: \n";
            cin >> arvattuKirjain[0];//uusi lukija tähän
            int valikkoon = 0;

            try {
                sanaTuloste = paljastaKirjaimet(sana, sanaTuloste, arvattuKirjain);
                if (onkoKirjainSanassa(sana, arvattuKirjain) == false) {
                    hirsipuunTila += 1;
                    if (hirsipuunTila == 9) {
                        hirsipuunTulostus(hirsipuunTila);
                        cout << "Hävisit!\n";
                        do {
                            cout << "Syötä 1 palataksesi päävalikkoon: \n";
                            cin >> valikkoon;
                        } while (valikkoon != 1);
                        if (valikkoon == 1) {
                            paaValikko();
                            break;
                        }
                        break;
                    }
                }
                if (onkoKirjainSanassa(sana, arvattuKirjain) == true) {
                    cout << sanaTuloste;

                    if (sanaTuloste::equal(sana)) {
                        cout << "Olet arvannut koko sanan oikein!\n";
                        kirjoitaTulokset(sana, kierrosLaskuri);
                        do {
                            cout << "Syötä 1 palataksesi päävalikkoon\n";
                            cin >> valikkoon;
                        } while (valikkoon != 1);
                        if (valikkoon == 1) {
                            paaValikko();
                            break;
                        }
                    }
                    else {
                        cout << "Oikein, haluatko arvata sanaa? 1) KYLLÄ 2) EI\n";
                        int arvaatko;
                        string sanaArvaus = "";
                        try {
                            do {
                                cin >> arvaatko;
                                if (arvaatko == 1) {
                                    cout << "Kirjoita sana: \n";
                                    //uusi lukija joka lukee sanan
                                    //toinen lukija perään
                                    if (sanaArvaus::equal(sana)) {
                                        cout << "Voitit!\n";
                                        kirjoitaTulokset(sana, kierrosLaskuri);
                                        do {
                                            cout << "Syötä 1 palatakseski päävalikkoon: \n";
                                            cin >> valikkoon;
                                        } while (valikkoon != 1);
                                        if (valikkoon == 1) {
                                            paaValikko();
                                            break;
                                        }
                                        break;
                                    }
                                }
                                if (arvaatko == 2) {
                                    break;
                                }
                            } while (arvaatko != 1 && arvaatko != 2);
                        }
                        catch (Exception e) {
                            cout << "Syötteessäsi havaittu virhe\n";
                            paaValikko();
                        }
                        if (valikkoon == 1) {
                            break;
                        }
                    }
                }
            }
            catch (Exception e) {
                cout << "Virhe, palataan päävalikkoon.\n";
                paaValikko();
            }
        }
    }
    void hirsipuunTulostus(int hirsipuunTila) {
        if (hirsipuunTila == 0) {
            cout << "____________ \n";
            cout << "|          | \n";
            cout << "|          | \n";
            cout << "|          | \n";
            cout << "|          | \n";
            cout << "|          | \n";
            cout << "|          | \n";
            cout << "____________ \n";
        } if (hirsipuunTila == 1) {
            cout << "____________ \n";
            cout << "|          | \n";
            cout << "|          | \n";
            cout << "|          | \n";
            cout << "|          | \n";
            cout << "|  ____    | \n";
            cout << "| |    |   | \n";
            cout << "____________ \n";
        } if (hirsipuunTila == 2) {
            cout << "____________ \n";
            cout << "|          | \n";
            cout << "|   |      | \n";
            cout << "|   |      | \n";
            cout << "|   |      | \n";
            cout << "|  _|__    | \n";
            cout << "| |    |   | \n";
            cout << "____________ \n";
        } if (hirsipuunTila == 3) {
            cout << "____________ \n";
            cout << "|   _____  | \n";
            cout << "|   |/     | \n";
            cout << "|   |      | \n";
            cout << "|   |      | \n";
            cout << "|  _|__    | \n";
            cout << "| |    |   | \n";
            cout << "____________ \n";
        } if (hirsipuunTila == 4) {
            cout << "____________ \n";
            cout << "|   _____  | \n";
            cout << "|   |/  |  | \n";
            cout << "|   |   o  | \n";
            cout << "|   |      | \n";
            cout << "|  _|__    | \n";
            cout << "| |    |   | \n";
            cout << "____________ \n";
        } if (hirsipuunTila == 5) {
            cout << "____________ \n";
            cout << "|   _____  | \n";
            cout << "|   |/  |  | \n";
            cout << "|   |   o  | \n";
            cout << "|   |   |  | \n";
            cout << "|  _|__    | \n";
            cout << "| |    |   | \n";
            cout << "____________ \n";
        } if (hirsipuunTila == 6) {
            cout << "____________ \n";
            cout << "|   _____  | \n";
            cout << "|   |/  |  | \n";
            cout << "|   |   o  | \n";
            cout << "|   |  /|  | \n";
            cout << "|  _|__    | \n";
            cout << "| |    |   | \n";
            cout << "____________ \n";
        } if (hirsipuunTila == 7) {
            cout << "____________ \n";
            cout << "|   _____  | \n";
            cout << "|   |/  |  | \n";
            cout << "|   |   o  | \n";
            cout << "|   |  /|\ | \n";
            cout << "|  _|__    | \n";
            cout << "| |    |   | \n";
            cout << "____________ \n";
        } if (hirsipuunTila == 8) {
            cout << "____________ \n";
            cout << "|   _____  | \n";
            cout << "|   |/  |  | \n";
            cout << "|   |   o  | \n";
            cout << "|   |  /|\ | \n";
            cout << "|  _|__/   | \n";
            cout << "| |    |   | \n";
            cout << "____________ \n";
        } if (hirsipuunTila == 9) {
            cout << "____________ \n";
            cout << "|   _____  | \n";
            cout << "|   |/  |  | \n";
            cout << "|   |   o  | \n";
            cout << "|   |  /|\ | \n";
            cout << "|  _|__/ \ | \n";
            cout << "| |    |   | \n";
            cout << "____________ \n";
        }

    }
    bool onkoKirjainSanassa(string sana, char arvattuKirjain) {
        bool löytyy = false;

        for (int i = 0; i < sana.length(); i++) {
            if (sana[i] == arvattuKirjain) {
                löytyy = true;
            }
        }
        return löytyy;
    }
    int main{

        paaValikko();
        return 0;
    }
