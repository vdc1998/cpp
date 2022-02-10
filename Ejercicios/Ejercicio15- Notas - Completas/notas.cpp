#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int nota = 0;

    cout <<"Ingrese la nota que obtuvo: ";
    cin >> nota;

    if (nota > 100 || nota < 0){
        cout << "Ingrese una nota entre 0 - 100";
        return 0;
    }
    
    if (nota >= 100){
        cout << "Obtuviste una A++";
     } else {
        if (nota >=94 && nota <= 95){
        cout << "Obtuviste una A+";
             } else {
                if (nota >=90 && nota <= 94){
                cout << "Obtuviste una A";
                } else {
                    if (nota >=85 && nota <= 89){
                    cout << "Obtuviste una A-";
                    } else {
                        if (nota >=80 && nota <= 84){
                        cout << "Obtuviste una B+";
                        } else {
                            if (nota >=75 && nota <= 79){
                            cout << "Obtuviste una B";
                            } else {
                                if (nota >=70 && nota <= 74){
                                cout << "Obtuviste una B-";
                            } else {
                                if(nota >=70 && nota <= 69){
                                cout << "Obtuviste una B-";
                                } else{
                                    if (nota >= 60 && nota <= 69){
                                    cout << "Obtuviste una C";
                                    } else {
                                       if (nota >= 55 && nota <= 59){
                                        cout << " Obtuviste una C-";
                                       } else {
                                           if (nota >= 50 && nota <= 54){
                                            cout << "Obtuviste una D+";
                                           } else{
                                               if (nota >= 45 && nota <= 49){
                                                   cout << "Obtuviste una D";
                                               } else {
                                                   if (nota >= 40 && nota <= 44){
                                                       cout << "Obtuviste una D-";
                                                   } else {
                                                       if (nota >= 40 && nota <= 44){  
                                                           cout << "Obtuviste una E+";
                                                       } else {
                                                           if (nota >= 35 && nota <= 39 ){
                                                            cout << "Obtuviste una E";
                                                           } else {
                                                               if (nota >= 30 && nota <= 34 ){
                                                                cout << "Obtuviste una E-";
                                                               } else {
                                                                   if (nota >=20  && nota <= 29 ){
                                                                    cout << "Obtuviste una F+";
                                                                   } else {
                                                                    if (nota >=10  && nota <= 19 ){
                                                                    cout << "Obtuviste una F";
                                                                    } else{
                                                                        if (nota >=1  && nota <= 9 ){
                                                                         cout << "Obtuviste una F-"; 
                                                                        }else{
                                                                            if (nota ==0 ){
                                                                            cout << "Obtuviste una F--";
                                                                            }
                                                                        }
                                                                    }
                                                                   }
                                                               }
                                                           }
                                                       } 

                                                   }
                                               }
                                           }

                                       }
                                    } 
                                }
                            }
                        }
                    }
                }
            }
       }
    }                     
    return 0;
}
