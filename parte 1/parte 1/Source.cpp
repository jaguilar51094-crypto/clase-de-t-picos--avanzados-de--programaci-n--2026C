#include <iostream> #include <string>
using namespace std;

void rvlunes(int dia) {
    if (dia == 0) {
        cout << "Es lunes" << endl;
    }
}
void rvjueves(int dia, int hora, int minuto) {
    if (dia == 3 && (hora < 12 || (hora == 11 && minuto <= 59))) {
        cout << "Es jueves antes del mediodía" << endl;
    }
}
void rvmartes(int dia, int hora, int minuto) {
    if (dia == 1) {
        cout << "Es martes" << endl;
    }
    else if (hora >= 12) {
        cout << "No es martes pero es después de las 12 PM" << endl;
    }
}
string rvdia(int dia) {
    switch (dia) {
    case 0:
        return "Lunes";
    case 1:
        return "Martes";
    case 2:
        return "Miercoles";
    case 3:
        return "Jueves";
    case 4:
        return "Viernes";
    case 5:
        return "Sabado";
    case 6:
        return "Domingo";
    default:
        return "Desconocido";
    }
}
int main() {
    int rvsemana = 6;
    int hora = 7;
    int minuto = 30;
    cout << "Hoy es " << rvdia(rvsemana) << " "
        << hora << ":" << (minuto < 10 ? "0" : "") << minuto << endl;
    rvlunes(rvsemana);
    rvjueves(rvsemana, hora, minuto);
    rvmartes(rvsemana, hora, minuto);
    for (int i = 0; i <= 6; i++) {
        if (i == rvsemana) {
            cout << "Hoy si es " << rvdia(i) << endl;
        }
        else {
            cout << "Hoy no es " << rvdia(i) << endl;
        }
    }

    return 0;
}
