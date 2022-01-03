#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

const string top = "<!doctype html>\n<html lang=\"en\">\n<head>\n<title>Puslapis</title>\n<meta charset=\"UTF-8\">\n<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n<style>\ntable {border-collapse: collapse;width: 100%;}\nth, td {text-align: left; padding: 8px;}\ntr:nth-child(even) { background-color: #D6EEEE;}\n* {\nbox-sizing: border-box;\n}\nbody {\n background-image:url(\"https://www.appmachine.com/wp-content/uploads/2016/02/No-Branding-Header-Background-1.jpg\");\nmargin: 0;\n}\n.header {padding: 8px;text-align: center;background-image: url(\"https://www.appmachine.com/wp-content/uploads/2016/02/No-Branding-Header-Background-1.jpg\");color: white}\n.header h1 {font-size: 40px;}\n.navbar {overflow: hidden;background-color: black;position: sticky;position: -webkit-sticky;top: 0;}\n.navbar a {float: left;display: block;color: white;text-align: center;padding: 14px 20px;text-decoration: none;}\n.row {  display: -ms-flexbox;display: flex;-ms-flex-wrap: wrap; flex-wrap: wrap;}\n.side {-ms-flex: 30%;flex: 30%; background-image:url(\"https://www.desktopbackground.org/p/2010/06/04/28104_2560x1600-light-blue-solid-color-background-jpg_2560x1600_h.jpg\"); padding: 20px;}\n.main {-ms-flex: 70%; flex: 70%;background-image:url(\"https://www.desktopbackground.org/p/2010/06/04/28104_2560x1600-light-blue-solid-color-background-jpg_2560x1600_h.jpg\");padding: 20px;}\n.footer {padding: 20px;text-align: center;background: #ddd;}\n@media screen and (max-width: 700px) {.row {flex-direction: column;}}\n@media screen and (max-width: 400px) {.navbar a {float: none; width: 100%;}}\n</style>\n</head>\n<body>";

const string bottom = "\n</body>\n</html>";

void header(ofstream &document){
    cout<<"Įrašykite puslapio pavadinimą"<<endl;
    string var;
    getline(cin, var);
    document<<"<div class=\"header\">\n<h1>"<<var<<"</h1>\n</div>";
}

void navigationBar(ofstream &document){
    cout<<"Ar norite pridėti papildomų nuorodų į puslapį?  y/n";
    string temp;
    getline(cin, temp);
    document<<"<div class=\"navbar\">\n<a href=\"#\" class=\"active\">Pagrindinis</a>\n";
    while(temp == "y"){
        cout<<"Įrašykite nuorodos pavadinimą"<<endl;
        getline(cin, temp);
        cout<<"Įrašykite šio puslapio adresą į kurį busite nuokreipti paspaudę [ https://www.........com ]"<<endl;
        string link;
        getline(cin, link);
        document<<"<a href=\""<<link<<"\">"<<temp<<"</a>\n";
        cout<<"Ar norite pridėti papildomų nuorodų? y/n"<<endl;
        getline(cin, temp);
    }
    document<<"</div>\n";
}

void puslapioInfo(ofstream &document){
    cout<<"Įrašykite šio puslapio tikslą"<<endl;
    string info;
    getline(cin, info);
    document<<"<div class=\"row\">\n<div class=\"side\">\n<h2>Tikslas:</h2>\n<p>"<<info<<"</p>\n";
    cout<<"Ar norite įrašyti plačiau? y/n"<<endl;
    string temp;
    getline(cin, temp);
    if (temp == "y"){
        cout<<"Kaip pavadinsite šią temą?"<<endl;
        string temp;
        getline(cin, temp);
        document<<"<h2>"<<temp<<"</h2>\n";
        cout<<"Įrašykite šios temos aprašymą"<<endl;
        getline(cin, info);
        document<<"<p>"<<info<<"</p>\n";
        cout<<"Ar norite įkelti aprašytos temos nuotrauką? y/n"<<endl;
        getline(cin, temp);
        if(temp == "y"){
            cout<<"Įrašykite norimą nuotraukos adresą [ URL, turi būti JPG] "<<endl;
            getline(cin, info);
            document<<"<img src=\""<<info<<"\" width=\"350\" height=\"350\">\n";
        }
    }
    document<<"</div>\n";
}


void papildomaInfo(ofstream &document){
    string temp;

    cout<<"Įrašykite sukurtos nuorodos temos pavadinimą"<<endl;
    getline(cin, temp);
    document<<"<div class=\"main\">\n<h2>"<<temp<<"</h2>\n";
    cout<<"Irašykite trumpa šios temos aprašymą"<<endl;
    getline(cin, temp);
    document<<"<h5>"<<temp<<"</h5>\n";
    cout<<"Papildoma šios temos informacija rašykite čia"<<endl;
    getline(cin, temp);
    document<<"<p>"<<temp<<"</p>";
    cout<<"Ar norite įkelti apraštos temos nuotrauką? y/n"<<endl;
    getline(cin, temp);
    if(temp == "y"){
        cout<<"Įrašykite norima nuotraukos adresą [ URL, turi būti JPG] "<<endl;
        getline(cin, temp);
        document<<"<img src=\""<<temp<<"\" width=\"350\" height=\"350\">\n";
    }
}

void removeFile(bool isNeedToRemove, const string &filename) {
    if (isNeedToRemove)
        remove(filename.c_str());
}

int main() {

    SetConsoleOutputCP(CP_UTF8);
    ofstream file;

    removeFile(true, "index.html");

    file.open("index.html", ios::app);
    file << top;

    header(file);
    navigationBar(file);
    puslapioInfo(file);
    papildomaInfo(file);

    file<<bottom;

    file.close();

    ShellExecute(nullptr, "open", "index.html", nullptr, nullptr, SW_SHOWNORMAL);

    return 0;
}