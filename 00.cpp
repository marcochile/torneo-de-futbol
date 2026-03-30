#include <iomanip>
#include <iostream>
using namespace std;

const int VICTORIA = 3;
const int EMPATE = 1;
const int DERROTA = 0;
const int NUMERO_DE_EQUIPOS = 3;

// registro de equipos
string a_nombre;
int a_PJ;
int a_PG;
int a_PE;
int a_PP;
int a_GF;
int a_GC;
int a_puntos;

string b_nombre;
int b_PJ;
int b_PG;
int b_PE;
int b_PP;
int b_GF;
int b_GC;
int b_puntos;

string c_nombre;
int c_PJ;
int c_PG;
int c_PE;
int c_PP;
int c_GF;
int c_GC;
int c_puntos;

string d_nombre;
int d_PJ;
int d_PG;
int d_PE;
int d_PP;
int d_GF;
int d_GC;
int d_puntos;

int main() {

  int opcion;
  do {
    cout << "=== SIMULADOR DE TORNEO DE FUTBOL ===" << endl;
    cout << "1. Registro partido" << endl;
    cout << "2. Mostrar tabla de posiciones" << endl;
    cout << "3. Buscar equipo" << endl;
    cout << "4. Equipo CAMPEON" << endl;
    cout << "0. SALIR" << endl;
    cout << "=====================================" << endl;
    cout << "ELIGA UNA OPCION" << endl;
    cin >> opcion;

    switch (opcion) {
      // registrar equipos
    case 1: {
      cout << " REGISTRO DE PARTIDOS " << endl;
      int opcion;
      string equipo_1, equipo_2;

      do {
        cout << "1. REGISTRAR PARTIDO 1" << endl;
        cout << "2. REGISTRAR PARTIDO 2" << endl;
        cout << "3. REGISTRAR PARTIDO 3" << endl;
        cout << "4. REGISTRAR PARTIDO 4" << endl;
        cout << "5. REGISTRAR PARTIDO 5" << endl;
        cout << "6. REGISTRAR PARTIDO 6" << endl;
        cout << "0. Salir" << endl;
        cin >> opcion;

        switch (opcion) {
        case 1: {
          string equipo_1, equipo_2;
          int a_gf, b_gf;

          cout << "INGRESE EQUIPO A" << endl;
          cin >> equipo_1;
          a_nombre = equipo_1;
          cout << "GOLES A FAVOR " << endl;
          cin >> a_gf;

          cout << "INGRESE EQUIPO B" << endl;
          cin >> equipo_2;
          b_nombre = equipo_2;
          cout << "GOLES A FAVOR " << endl;
          cin >> b_gf;

          if (a_gf > b_gf) {
            a_PG += 1;
            b_PP += 1;
            a_puntos += VICTORIA;
          } else if (a_gf < b_gf) {
            b_PG += 1;
            a_PP += 1;
            b_puntos += VICTORIA;
          } else {
            a_PE += 1;
            b_PE += 1;
            a_puntos += EMPATE;
            b_puntos += EMPATE;
          }

          a_GF += a_gf;
          b_GF += b_gf;

          a_GC += b_gf;
          b_GC += a_gf;

          a_PJ += 1;
          b_PJ += 1;

        } break;

        case 2: {
          string equipo_1, equipo_2;
          int b_gf, c_gf;

          cout << "INGRESE EQUIPO B" << endl;
          cin >> equipo_1;
          b_nombre = equipo_1;
          cout << "GOLES A FAVOR " << endl;
          cin >> b_gf;

          cout << "INGRESE EQUIPO C" << endl;
          cin >> equipo_2;
          c_nombre = equipo_2;
          cout << "GOLES A FAVOR " << endl;
          cin >> c_gf;

          if (b_gf > c_gf) {
            b_PG += 1;
            c_PP += 1;
            b_puntos += VICTORIA;
          } else if (b_gf < c_gf) {
            c_PG += 1;
            b_PP += 1;
            c_puntos += VICTORIA;
          } else {
            b_PE += 1;
            c_PE += 1;
            b_puntos += EMPATE;
            c_puntos += EMPATE;
          }

          b_GF += b_gf;
          c_GF += c_gf;

          b_GC += c_gf;
          c_GC += b_gf;

          b_PJ += 1;
          c_PJ += 1;
        } break;

        case 3: {
          string equipo_1, equipo_2;
          int a_gf, d_gf;

          cout << "INGRESE EQUIPO A" << endl;
          cin >> equipo_1;
          a_nombre = equipo_1;
          cout << "GOLES A FAVOR " << endl;
          cin >> a_gf;

          cout << "INGRESE EQUIPO D" << endl;
          cin >> equipo_2;
          d_nombre = equipo_2;

          cout << "GOLES A FAVOR " << endl;
          cin >> d_gf;

          if (a_gf > d_gf) {
            a_PG += 1;
            d_PP += 1;
            a_puntos += VICTORIA;
          } else if (a_gf < d_gf) {
            d_PG += 1;
            a_PP += 1;
            d_puntos += VICTORIA;
          } else {
            a_PE += 1;
            d_PE += 1;
            a_puntos += EMPATE;
            d_puntos += EMPATE;
          }

          a_GF += a_gf;
          d_GF += d_gf;

          a_GC += d_gf;
          d_GC += a_gf;

          a_PJ += 1;
          d_PJ += 1;

        } break;
        case 4: {
          string equipo_1, equipo_2;
          int c_gf, d_gf;

          cout << "INGRESE EQUIPO C" << endl;
          cin >> equipo_1;
          c_nombre = equipo_1;

          cout << "GOLES A FAVOR " << endl;
          cin >> c_gf;

          cout << "INGRESE EQUIPO D" << endl;
          cin >> equipo_2;
          d_nombre = equipo_2;

          cout << "GOLES A FAVOR " << endl;
          cin >> d_gf;

          if (c_gf > d_gf) {
            c_PG += 1;
            d_PP += 1;
            c_puntos += VICTORIA;
          } else if (c_gf < d_gf) {
            d_PG += 1;
            c_PP += 1;
            d_puntos += VICTORIA;
          } else {
            c_PE += 1;
            d_PE += 1;
            c_puntos += EMPATE;
            d_puntos += EMPATE;
          }

          c_GF += c_gf;
          d_GF += d_gf;

          c_GC += d_gf;
          d_GC += c_gf;

          c_PJ += 1;
          d_PJ += 1;

        } break;
        case 5: {

          string equipo_1, equipo_2;
          int a_gf, c_gf;

          cout << "INGRESE EQUIPO A" << endl;
          cin >> equipo_1;
          a_nombre = equipo_1;
          cout << "GOLES A FAVOR " << endl;
          cin >> a_gf;

          cout << "INGRESE EQUIPO C" << endl;
          cin >> equipo_2;
          c_nombre = equipo_2;

          cout << "GOLES A FAVOR " << endl;
          cin >> c_gf;

          if (a_gf > c_gf) {
            a_PG += 1;
            c_PP += 1;
            a_puntos += VICTORIA;
          } else if (a_gf < c_gf) {
            c_PG += 1;
            a_PP += 1;
            c_puntos += VICTORIA;
          } else {
            a_PE += 1;
            c_PE += 1;
            a_puntos += EMPATE;
            c_puntos += EMPATE;
          }

          a_GF += a_gf;
          c_GF += c_gf;

          a_GC += c_gf;
          c_GC += a_gf;

          a_PJ += 1;
          c_PJ += 1;
        } break;
        case 6: {
          string equipo_1, equipo_2;
          int b_gf, d_gf;

          cout << "INGRESE EQUIPO B" << endl;
          cin >> equipo_1;
          b_nombre = equipo_1;
          cout << "GOLES A FAVOR " << endl;
          cin >> b_gf;

          cout << "INGRESE EQUIPO D" << endl;
          cin >> equipo_2;
          d_nombre = equipo_2;
          cout << "GOLES A FAVOR " << endl;
          cin >> d_gf;

          if (b_gf > d_gf) {
            b_PG += 1;
            d_PP += 1;
            b_puntos += VICTORIA;
          } else if (b_gf < d_gf) {
            d_PG += 1;
            b_PP += 1;
            d_puntos += VICTORIA;
          } else {
            b_PE += 1;
            d_PE += 1;
            b_puntos += EMPATE;
            d_puntos += EMPATE;
          }

          b_GF += b_gf;
          d_GF += d_gf;

          b_GC += d_gf;
          d_GC += b_gf;

          b_PJ += 1;
          d_PJ += 1;
        } break;
        default:

          break;
        }

      } while (opcion != 0);

    } break;

    case 2: {
      int opcion;
      do {
        cout << "1. MOSTRAR TABLA DE POCISIONES" << endl;
        cout << "0. SALIR" << endl;
        cin >> opcion;
        switch (opcion) {
        case 1: {
          int a, b, c, d, primer_puesto;
          a = a_puntos;
          b = b_puntos;
          c = c_puntos;
          d = d_puntos;

          primer_puesto = a;

          if (b > primer_puesto) {
            primer_puesto = b;
          }

          if (c > primer_puesto) {
            primer_puesto = c;
          }

          if (d > primer_puesto) {
            primer_puesto = d;
          }

          cout << left << setw(10) << "Equipos" << setw(4) << "PJ" << setw(4)
               << "PG" << setw(4) << "PE" << setw(4) << "PP" << setw(4) << "GF"
               << setw(4) << "GC" << setw(10) << "Puntos" << endl;

          for (int i = primer_puesto; i >= 0; i--) {
            if (i == a_puntos) {
              cout << left << setw(10) << a_nombre << setw(4) << a_PJ << setw(4)
                   << a_PG << setw(4) << a_PE << setw(4) << a_PP << setw(4)
                   << a_GF << setw(4) << a_GC << setw(10) << a_puntos << endl;
            }

            if (i == b_puntos) {
              cout << left << setw(10) << b_nombre << setw(4) << b_PJ << setw(4)
                   << b_PG << setw(4) << b_PE << setw(4) << b_PP << setw(4)
                   << b_GF << setw(4) << b_GC << setw(10) << b_puntos << endl;
            }

            if (i == c_puntos) {
              cout << left << setw(10) << c_nombre << setw(4) << c_PJ << setw(4)
                   << c_PG << setw(4) << c_PE << setw(4) << c_PP << setw(4)
                   << c_GF << setw(4) << c_GC << setw(10) << c_puntos << endl;
            }

            if (i == d_puntos) {
              cout << left << setw(10) << d_nombre << setw(4) << d_PJ << setw(4)
                   << d_PG << setw(4) << d_PE << setw(4) << d_PP << setw(4)
                   << d_GF << setw(4) << d_GC << setw(10) << d_puntos << endl;
            }
          }

        } break;
        default:
          break;
        }
      } while (opcion != 0);
    } break;

    case 3: {
      cout << "Buscar equipo: " << endl;
      string buscar;
      cin >> buscar;

      cout << left << setw(10) << "Equipos" << setw(4) << "PJ" << setw(4)
           << "PG" << setw(4) << "PE" << setw(4) << "PP" << setw(4) << "GF"
           << setw(4) << "GC" << setw(10) << "Puntos" << endl;
      if (buscar == a_nombre) {
        cout << left << setw(10) << a_nombre << setw(4) << a_PJ << setw(4)
             << a_PG << setw(4) << a_PE << setw(4) << a_PP << setw(4) << a_GF
             << setw(4) << a_GC << setw(10) << a_puntos << endl;
      }

      if (buscar == b_nombre) {
        cout << left << setw(10) << b_nombre << setw(4) << b_PJ << setw(4)
             << b_PG << setw(4) << b_PE << setw(4) << b_PP << setw(4) << b_GF
             << setw(4) << b_GC << setw(10) << b_puntos << endl;
      }

      if (buscar == c_nombre) {
        cout << left << setw(10) << c_nombre << setw(4) << c_PJ << setw(4)
             << c_PG << setw(4) << c_PE << setw(4) << c_PP << setw(4) << c_GF
             << setw(4) << c_GC << setw(10) << c_puntos << endl;
      }

      if (buscar == d_nombre) {
        cout << left << setw(10) << d_nombre << setw(4) << d_PJ << setw(4)
             << d_PG << setw(4) << d_PE << setw(4) << d_PP << setw(4) << d_GF
             << setw(4) << d_GC << setw(10) << d_puntos << endl;
      }
    } break;

    case 4: {
      cout << "MOSTRAR EQUIPO CAMPEON" << endl;

      int campeon = a_puntos;
      int opcion = 1;

      if (b_puntos > campeon) {
        campeon = b_puntos;
        opcion = 2;
      }

      if (c_puntos > campeon) {
        campeon = c_puntos;
        opcion = 3;
      }

      if (d_puntos > campeon) {
        campeon = d_puntos;
        opcion = 4;
      }

      cout << left << setw(10) << "Equipos" << setw(4) << "PJ" << setw(4)
           << "PG" << setw(4) << "PE" << setw(4) << "PP" << setw(4) << "GF"
           << setw(4) << "GC" << setw(10) << "Puntos" << endl;

      switch (opcion) {
      case 1: {
        cout << left << setw(10) << a_nombre << setw(4) << a_PJ << setw(4)
             << a_PG << setw(4) << a_PE << setw(4) << a_PP << setw(4) << a_GF
             << setw(4) << a_GC << setw(10) << a_puntos << endl;
      } break;
      case 2: {
        cout << left << setw(10) << b_nombre << setw(4) << b_PJ << setw(4)
             << b_PG << setw(4) << b_PE << setw(4) << b_PP << setw(4) << b_GF
             << setw(4) << b_GC << setw(10) << b_puntos << endl;
      } break;
      case 3: {
        cout << left << setw(10) << c_nombre << setw(4) << c_PJ << setw(4)
             << c_PG << setw(4) << c_PE << setw(4) << c_PP << setw(4) << c_GF
             << setw(4) << c_GC << setw(10) << c_puntos << endl;
      } break;
      case 4: {
        cout << left << setw(10) << d_nombre << setw(4) << d_PJ << setw(4)
             << d_PG << setw(4) << d_PE << setw(4) << d_PP << setw(4) << d_GF
             << setw(4) << d_GC << setw(10) << d_puntos << endl;
      } break;
      default:
        break;
      }

    } break;

    default:
      cout << " OPCION NO VALIDA " << endl;
      break;
    }
  } while (opcion != 0);

  return 0;
}
