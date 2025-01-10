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
    void Bibliothek();
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
        cout<<"1."<<endl;
        cout<<"2."<<endl;
        cout<<"3."<<endl;
        cout<<"4."<<endl;
        cout<<"5."<<endl;
        cout<<"6."<<endl;
        cout<<"7. Programm beenden"<<endl;
    

    //Benutzeraufforderung 

    cout << "Wähle eine Aktion aus (1-7):";
    cin >> auswahl;

    
    //switch-case fuer einzelne func

        switch(auswahl) {
            case 1:
                //func1
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;

            case 7:
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

    void Bibliothek() {

    }

    void BibliothekAnzeigen() {

    }

    void BibliothekSpeichern() {

    }

    void SongDataAendern() {

    }