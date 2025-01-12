// bei änderungen: git status ->  git commit -am "update [beschreibung]" ->  git push u origin main

// git status | git add . | git commit -(a)m "" (programm, ansonsten nur -m) | (git pull) | git push

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream> //header zum einlesen von datei die songs containen
#include <iomanip> //header zum implementieren einer formatierten Tabelle der Playlist hier: setw

//befehl fuer lesbarkeit
using namespace std;

    //void functions fuer die funktionen des programms 

    void BibliothekEinlesen();
    void LiedHinzufuegen();
    void LiedLoeschen();
    void BibliothekAnzeigen();
    void BibliothekSpeichern();
    void SongDataAendern();

    //struct Song implementieren
typedef struct {
    string artist;
    string songname;
    string genre;
    int duration;
} Lied;

string playlist = "C:/Users/Admin/Desktop/Code/VSC/swt_projekt_playlist/playlist.csv";

//  void func

    void BibliothekEinlesen(const string playlist) {

        //vektor "lieder" wird deklariert und speichert Lied-Objekte
        vector<Lied> lieder;
        ifstream datei(playlist);

        //prüfen, ob textfile geoeffnet werden konnte
        if(!datei.is_open()) {
            cerr << "!!Datei konnte nicht geoeffnet werden!!" <<endl;
            return;
        }
        //variable zeile einbauen und einlesefkt
        string line;
        getline(datei,line);

        //zeile fuer zeile einlesen
        while(getline(datei,line)){

        //erweiterung um .csv-datei richtig einzulesen
            //aufteilung in zeilen
            stringstream stream(line);

            //Songstruktur mit hilfsvariabel fuer dauer des einzelnen Lieds
            Lied lied;
            string duration_string;

            //aufgeteile felder auslesen
            getline(stream, lied.artist, ';');
            getline(stream, lied.songname, ';');
            getline(stream, lied.genre, ';');
            getline(stream, duration_string, ';');
            lied.duration = stoi(duration_string); //konvertieren string to integer
            lieder.push_back(lied); //fuegt integer zeile fuer zeile hinzu
            }
        datei.close();

        //festlegen der breite der Kategorien (const int, da nur int nicht global wäre)
        const int widthArtist = 30;
        const int widthSong = 40;
        const int widthGenre = 30;
        const int widthDuration = 20;

        //tabellenueberschrift ("left", damit die ausgabe linksbuendig ist)
        cout <<left 
        <<setw(widthArtist) << "Kuenstler"
        <<setw(widthSong) << "Titel"
        <<setw(widthGenre) << "Genre"
        <<setw(widthDuration) << "Dauer (sek)" 
        <<endl;

        cout << string(widthArtist+widthSong+widthGenre+widthDuration,'-')<<endl;

        //ausgeben des inhalts, jetzt schrittweise einzelne spalten der tabellierung
        for(const auto& lied :lieder) {
            cout << left
            <<setw(widthArtist) << lied.artist
            <<setw(widthSong) << lied.songname
            <<setw(widthGenre) << lied.genre
            <<setw(widthDuration) << lied.duration 
            <<endl;
            }

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

int main() {

    int auswahl;

    //programmdurchfuehrung des users mit cout

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
            case 1: {
                //string playlist = "C:/Users/Admin/Desktop/Code/VSC/swt_projekt_playlist/playlist.csv";
                BibliothekEinlesen(playlist);
                break; }
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