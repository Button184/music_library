// bei änderungen: git status ->  git commit -am "update [beschreibung]" ->  git push u origin main

// git status | git add . | git commit -(a)m "" (programm, ansonsten nur -m) | (git pull) | git push

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream> //header zum einlesen von datei die songs containen

//befehl fuer lesbarkeit
using namespace std;

    //void functions fuer die funktionen des programms 

    void BibliothekEinlesen();
    void LiedHinzufuegen();
    void LiedLoeschen();
    void BibliothekAnzeigen();
    void BibliothekSpeichern();
    void SongDataAendern();


int main() {

    int auswahl;

    // --- programmdurchfuehrung mit cout

    do {
        cout<<"**************************"<<endl;
        cout<<"Willkommen im Music Player"<<endl;
        cout<<"**************************"<<endl;
        cout<<"1. Bibliothek einlesen"<<endl;
        cout<<"2. Ein Lied hinzufuegen"<<endl;
        cout<<"3. Ein Lied aus Playlist entfernen"<<endl;
        cout<<"4. Bibliothek anzeigen lassen"<<endl;
        cout<<"5. Bibliothek speichern"<<endl;
        cout<<"6. Liedinformationen aendern"<<endl;
        cout<<"7. Programm beenden"<<endl;
    

    //Benutzeraufforderung 

    cout << "Wähle eine Aktion aus (1-7):";
    cin >> auswahl;

    
    //switch-case fuer einzelne func

        switch(auswahl) {
            case 1:
                BibliothekEinlesen();
                break;
            case 2:
                LiedHinzufuegen();
                break;
            case 3:
                LiedLoeschen();
                break;
            case 4:
                BibliothekAnzeigen();
                break;
            case 5:
                BibliothekSpeichern();
                break;
            case 6:
                SongDataAendern();
                break;
            case 7:
                cout<<"Programm wird beendet.";
                break;

            default:
            cout<<"Falsche Eingabe! Wähle eine Auswahl von 1-7."<<endl;
        }

    }   while(auswahl !=7);

    return 0;
}

//  void func

    void BibliothekEinlesen() {

        ifstream str("C:/Users/Admin/Desktop/Code/VSC/swt_projekt_playlist/playlist.csv");

        //prüfen, ob textfile geoeffnet werden konnte
        if(!str.is_open()) {
            cerr << "Datei konnte nicht geoeffnet werden";    
            return; 
        }

        string line;

        //zeile fuer zeile einlesen
        while(getline(str,line)){
        //erweiterung um .csv-datei richtig einzulesen
            stringstream stream(line);
            string cell;
            vector<std::string> result;

            while(getline(stream,cell,';')) {

                result.push_back(cell);
            }
            //ausgeben des inhalts
            for(const auto& item:result) {
                cout << item <<"";
            }

            cout << line << std::endl;

        }

        //datei schliessen
        str.close();

    }

    void LiedHinzufuegen() {
        cout<<"function not yet build"<<endl;
    }

    void LiedLoeschen() {
        cout<<"function not yet build"<<endl;

    }

    void BibliothekAnzeigen() {
        cout<<"function not yet build"<<endl;

    }

    void BibliothekSpeichern() {
        cout<<"function not yet build"<<endl;

    }

    void SongDataAendern() {
        cout<<"function not yet build"<<endl;

    }