//Wienczyslaw Wlodyga
#include<iostream>

using namespace std;

int main() {
    int l, sila1, sila2, wynikA = 0, wynikB = 0, wynikC = 0, wynikD = 0, remisA = 0, remisB = 0, remisC = 0, remisD = 0,
    i = 0, gryA = 0, gryB = 0, gryC = 0, gryD = 0, przegraneA= 0, przegraneB= 0, przegraneC= 0, przegraneD= 0;
    char wybor1, wybor2, gracz1, gracz2;
    cout << "Podaj liczbe gier: " << endl;
    cin >> l;
    while (i < l) {
        cin >> gracz1 >> wybor1 >> sila1 >> gracz2 >> wybor2 >> sila2;
        i++;
        //J
        if (wybor1 == 'J' && wybor2 == 'P') {
            //wygrane gdy wygrywa 1
            if (gracz1 == 'A') {wynikA++; gryA++;}
            if (gracz1 == 'B') {wynikB++; gryB++;}
            if (gracz1 == 'C') {wynikC++; gryC++;}
            if (gracz1 == 'D') {wynikD++; gryD++;}
            //przegrane gdy wygrywa 1
            if (gracz2 == 'A') gryA++;
            if (gracz2 == 'B') gryB++;
            if (gracz2 == 'C') gryC++;
            if (gracz2 == 'D') gryD++;
        }
        if (wybor1 == 'P' && wybor2 == 'J') {
            //wygrane gdy wygrywa 2
            if (gracz2 == 'A') {wynikA++; gryA++;}
            if (gracz2 == 'B') {wynikB++; gryB++;}
            if (gracz2 == 'C') {wynikC++; gryC++;}
            if (gracz2 == 'D') {wynikD++; gryD++;}
            //przegrane gdy wygrywa 2
            if (gracz1 == 'A') gryA++;
            if (gracz1 == 'B') gryB++;
            if (gracz1 == 'C') gryC++;
            if (gracz1 == 'D') gryD++;

        }
        if (wybor1 == 'J' && wybor2 == 'S') {

            if (gracz1 == 'A') {wynikA++; gryA++;}
            if (gracz1 == 'B') {wynikB++; gryB++;}
            if (gracz1 == 'C') {wynikC++; gryC++;}
            if (gracz1 == 'D') {wynikD++; gryD++;}

            if (gracz2 == 'A') gryA++;
            if (gracz2 == 'B') gryB++;
            if (gracz2 == 'C') gryC++;
            if (gracz2 == 'D') gryD++;

        }
        if (wybor1 == 'S' && wybor2 == 'J') {

            if (gracz2 == 'A') {wynikA++; gryA++;}
            if (gracz2 == 'B') {wynikB++; gryB++;}
            if (gracz2 == 'C') {wynikC++; gryC++;}
            if (gracz2 == 'D') {wynikD++; gryD++;}

            if (gracz1 == 'A') gryA++;
            if (gracz1 == 'B') gryB++;
            if (gracz1 == 'C') gryC++;
            if (gracz1 == 'D') gryD++;
        }
        //J



        //K
        if (wybor1 == 'K' && wybor2 == 'J') {
            if (gracz1 == 'A') {wynikA++; gryA++;}
            if (gracz1 == 'B') {wynikB++; gryB++;}
            if (gracz1 == 'C') {wynikC++; gryC++;}
            if (gracz1 == 'D') {wynikD++; gryD++;}

            if (gracz2 == 'A') gryA++;
            if (gracz2 == 'B') gryB++;
            if (gracz2 == 'C') gryC++;
            if (gracz2 == 'D') gryD++;
        }
        if (wybor1 == 'J' && wybor2 == 'K') {

            if (gracz2 == 'A') {wynikA++; gryA++;}
            if (gracz2 == 'B') {wynikB++; gryB++;}
            if (gracz2 == 'C') {wynikC++; gryC++;}
            if (gracz2 == 'D') {wynikD++; gryD++;}

            if (gracz1 == 'A') gryA++;
            if (gracz1 == 'B') gryB++;
            if (gracz1 == 'C') gryC++;
            if (gracz1 == 'D') gryD++;
        }
        if (wybor1 == 'K' && wybor2 == 'N'){
            if (gracz1 == 'A') {wynikA++; gryA++;}
            if (gracz1 == 'B') {wynikB++; gryB++;}
            if (gracz1 == 'C') {wynikC++; gryC++;}
            if (gracz1 == 'D') {wynikD++; gryD++;}

            if (gracz2 == 'A') gryA++;
            if (gracz2 == 'B') gryB++;
            if (gracz2 == 'C') gryC++;
            if (gracz2 == 'D') gryD++;
        }
        if (wybor1 == 'N' && wybor2 == 'K') {
            if (gracz2 == 'A') {wynikA++; gryA++;}
            if (gracz2 == 'B') {wynikB++; gryB++;}
            if (gracz2 == 'C') {wynikC++; gryC++;}
            if (gracz2 == 'D') {wynikD++; gryD++;}

            if (gracz1 == 'A') gryA++;
            if (gracz1 == 'B') gryB++;
            if (gracz1 == 'C') gryC++;
            if (gracz1 == 'D') gryD++;
        }
        //K



        //N
        if (wybor1 == 'N' && wybor2 == 'J') {
            if (gracz1 == 'A') {wynikA++; gryA++;}
            if (gracz1 == 'B') {wynikB++; gryB++;}
            if (gracz1 == 'C') {wynikC++; gryC++;}
            if (gracz1 == 'D') {wynikD++; gryD++;}

            if (gracz2 == 'A') gryA++;
            if (gracz2 == 'B') gryB++;
            if (gracz2 == 'C') gryC++;
            if (gracz2 == 'D') gryD++;
        }
        if (wybor1 == 'J' && wybor2 == 'N') {
            if (gracz2 == 'A') {wynikA++; gryA++;}
            if (gracz2 == 'B') {wynikB++; gryB++;}
            if (gracz2 == 'C') {wynikC++; gryC++;}
            if (gracz2 == 'D') {wynikD++; gryD++;}

            if (gracz1 == 'A') gryA++;
            if (gracz1 == 'B') gryB++;
            if (gracz1 == 'C') gryC++;
            if (gracz1 == 'D') gryD++;
        }
        if (wybor1 == 'N' && wybor2 == 'P'){
            if (gracz1 == 'A') {wynikA++; gryA++;}
            if (gracz1 == 'B') {wynikB++; gryB++;}
            if (gracz1 == 'C') {wynikC++; gryC++;}
            if (gracz1 == 'D') {wynikD++; gryD++;}

            if (gracz2 == 'A') gryA++;
            if (gracz2 == 'B') gryB++;
            if (gracz2 == 'C') gryC++;
            if (gracz2 == 'D') gryD++;
        }
        if (wybor1 == 'P' && wybor2 == 'N'){
            if (gracz2 == 'A') {wynikA++; gryA++;}
            if (gracz2 == 'B') {wynikB++; gryB++;}
            if (gracz2 == 'C') {wynikC++; gryC++;}
            if (gracz2 == 'D') {wynikD++; gryD++;}

            if (gracz1 == 'A') gryA++;
            if (gracz1 == 'B') gryB++;
            if (gracz1 == 'C') gryC++;
            if (gracz1 == 'D') gryD++;
        }
        //N



        //P
        if (wybor1 == 'P' && wybor2 == 'K'){
            if (gracz1 == 'A') {wynikA++; gryA++;}
            if (gracz1 == 'B') {wynikB++; gryB++;}
            if (gracz1 == 'C') {wynikC++; gryC++;}
            if (gracz1 == 'D') {wynikD++; gryD++;}

            if (gracz2 == 'A') gryA++;
            if (gracz2 == 'B') gryB++;
            if (gracz2 == 'C') gryC++;
            if (gracz2 == 'D') gryD++;
        }
        if (wybor1 == 'K' && wybor2 == 'P'){
            if (gracz2 == 'A') {wynikA++; gryA++;}
            if (gracz2 == 'B') {wynikB++; gryB++;}
            if (gracz2 == 'C') {wynikC++; gryC++;}
            if (gracz2 == 'D') {wynikD++; gryD++;}

            if (gracz1 == 'A') gryA++;
            if (gracz1 == 'B') gryB++;
            if (gracz1 == 'C') gryC++;
            if (gracz1 == 'D') gryD++;
        }
        if (wybor1 == 'P' && wybor2 == 'S'){
            if (gracz1 == 'A') {wynikA++; gryA++;}
            if (gracz1 == 'B') {wynikB++; gryB++;}
            if (gracz1 == 'C') {wynikC++; gryC++;}
            if (gracz1 == 'D') {wynikD++; gryD++;}

            if (gracz2 == 'A') gryA++;
            if (gracz2 == 'B') gryB++;
            if (gracz2 == 'C') gryC++;
            if (gracz2 == 'D') gryD++;
        }
        if (wybor1 == 'S' && wybor2 == 'P'){
            if (gracz2 == 'A') {wynikA++; gryA++;}
            if (gracz2 == 'B') {wynikB++; gryB++;}
            if (gracz2 == 'C') {wynikC++; gryC++;}
            if (gracz2 == 'D') {wynikD++; gryD++;}

            if (gracz1 == 'A') gryA++;
            if (gracz1 == 'B') gryB++;
            if (gracz1 == 'C') gryC++;
            if (gracz1 == 'D') gryD++;
        }
        //P



        //S
        if (wybor1 == 'S' && wybor2 == 'K'){
            if (gracz1 == 'A') {wynikA++; gryA++;}
            if (gracz1 == 'B') {wynikB++; gryB++;}
            if (gracz1 == 'C') {wynikC++; gryC++;}
            if (gracz1 == 'D') {wynikD++; gryD++;}

            if (gracz2 == 'A') gryA++;
            if (gracz2 == 'B') gryB++;
            if (gracz2 == 'C') gryC++;
            if (gracz2 == 'D') gryD++;
        }
        if (wybor1 =='K' && wybor2 == 'S'){
            if (gracz2 == 'A') {wynikA++; gryA++;}
            if (gracz2 == 'B') {wynikB++; gryB++;}
            if (gracz2 == 'C') {wynikC++; gryC++;}
            if (gracz2 == 'D') {wynikD++; gryD++;}

            if (gracz1 == 'A') gryA++;
            if (gracz1 == 'B') gryB++;
            if (gracz1 == 'C') gryC++;
            if (gracz1 == 'D') gryD++;
        }
        if (wybor1 == 'S' && wybor2 == 'N'){
            if (gracz1 == 'A') {wynikA++; gryA++;}
            if (gracz1 == 'B') {wynikB++; gryB++;}
            if (gracz1 == 'C') {wynikC++; gryC++;}
            if (gracz1 == 'D') {wynikD++; gryD++;}

            if (gracz2 == 'A') gryA++;
            if (gracz2 == 'B') gryB++;
            if (gracz2 == 'C') gryC++;
            if (gracz2 == 'D') gryD++;
        }
        if (wybor1 == 'N' && wybor2 == 'S'){
            if (gracz2 == 'A') {wynikA++; gryA++;}
            if (gracz2 == 'B') {wynikB++; gryB++;}
            if (gracz2 == 'C') {wynikC++; gryC++;}
            if (gracz2 == 'D') {wynikD++; gryD++;}

            if (gracz1 == 'A') gryA++;
            if (gracz1 == 'B') gryB++;
            if (gracz1 == 'C') gryC++;
            if (gracz1 == 'D') gryD++;
        }
        //S

        //TE SAME WYBORY I REMISY
        if (wybor1 == wybor2 && sila1 > sila2) {
            if (gracz1 == 'A') {wynikA++; gryA++;}      // DODAC INT PRZEGRANE A B C D ORAZ REMISY A B C D !!!!!
            if (gracz1 == 'B') {wynikB++; gryB++;}
            if (gracz1 == 'C') {wynikC++; gryC++;}
            if (gracz1 == 'D') {wynikD++; gryD++;}

            if (gracz2 == 'A') gryA++;
            if (gracz2 == 'B') gryB++;
            if (gracz2 == 'C') gryC++;
            if (gracz2 == 'D') gryD++;

        }
        if (wybor1 == wybor2 && sila2 > sila1){
            if (gracz2 == 'A') {wynikA++; gryA++;}
            if (gracz2 == 'B') {wynikB++; gryB++;}
            if (gracz2 == 'C') {wynikC++; gryC++;}
            if (gracz2 == 'D') {wynikD++; gryD++;}

            if (gracz1 == 'A') gryA++;
            if (gracz1 == 'B') gryB++;
            if (gracz1 == 'C') gryC++;
            if (gracz1 == 'D') gryD++;
    }
        if (wybor1 == wybor2 && sila1 == sila2) {
            if (gracz2 == 'A') gryA++;
            if (gracz2 == 'B') gryB++;
            if (gracz2 == 'C') gryC++;
            if (gracz2 == 'D') gryD++;

            if (gracz1 == 'A') gryA++;
            if (gracz1 == 'B') gryB++;
            if (gracz1 == 'C') gryC++;
            if (gracz1 == 'D') gryD++;
        }
        cout << gracz1 << " " << wybor1 << " " << sila1 << " " << gracz2 << " " << wybor2 << " " << sila2 << endl;
    }





    return 0;


    }





