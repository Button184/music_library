// bei änderungen: git status ->  git commit -am "update [beschreibung]" ->  git push u origin main

// git status | git add . | git commit -(a)m "" (programm, ansonsten nur -m) | (git pull) | git push

#include <iostream>
#include <string>
#include <vector>
#include <fstream> //header zum einlesen von textdatei die songs containen

//befehl fuer lesbarkeit
using namespace std;

    //void functions fuer die funktionen des programms 

    void BibliothekEinlesen();
    void LiedHinzufügen();
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
                void BibliothekEinlesen();
                break;
            case 2:
                void LiedHinzufügen();
                break;
            case 3:
                void LiedLoeschen();
                break;
            case 4:
                void BibliothekAnzeigen();
                break;
            case 5:
                void BibliothekSpeichern();
                break;
            case 6:
                void SongDataAendern();
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

        ifstream f("C:/Users/Admin/Desktop/Code/VSC/swt_projekt_playlist/playlist.txt");

        //prüfen, ob textfile geoeffnet werden konnte
        if(!f.is_open()) {
            cerr << "Datei konnte nicht geoeffnet werden";      
        }

        string s;

        //zeile fuer zeile einlesen
        while(getline(f,s))
            cout << s << std::endl;

        //datei schliessen
        f.close();


    }

    void LiedHinzufügen() {

    }

    void LiedLoeschen() {

    }

    void BibliothekAnzeigen() {

    }

    void BibliothekSpeichern() {

    }

    void SongDataAendern() {

    }