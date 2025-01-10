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


    // --- programmdurchfuehrung mit cout

    // --- benutzeraufforderung mit cout, cin

    // -- switch-case fuer einzelne func

    // -- void func am ende nach main




    //textfile aufrufen
    std::ifstream f("C:/Users/Admin/Desktop/Code/VSC/swt_projekt_playlist/playlist.txt");

    //prüfen, ob textfile geoeffnet werden konnte
    if(!f.is_open()) {
        cerr << "Datei konnte nicht geoeffnet werden";
        return 1;
    }

    string s;

    //zeile fuer zeile einlesen
    while(getline(f,s))
        cout << s << std::endl;

    //datei schliessen
    f.close();

    return 0;
}

//  void func

    void BibliothekEinlesen() {

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