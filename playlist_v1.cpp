// bei änderungen: git status ->  git commit -am "update [beschreibung]" ->  git push u origin main

#include <iostream>
#include <string>
#include <vector>
#include <fstream> //header zum einlesen von textdatei die songs contained

//struct fuer liedinfo
struct song {

    std::string artist; 
    std::string title; 
    std::string genre;
    int duration;

};

int main() {

    //textfile aufrufen
    std::ifstream f("C:/Users/Admin/Desktop/Code/VSC/swt_projekt_playlist/playlist.txt");

    //prüfen, ob textfile geoeffnet werden konnte
    if(!f.is_open()) {
        std::cerr << "Datei konnte nicht geoeffnet werden";
        return 1;
    }

    std::string s;

    //zeile fuer zeile einlesen
    while(getline(f,s))
        std::cout << s << std::endl;

    //datei schliessen
    f.close();

    return 0;
}