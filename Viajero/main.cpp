//
//  main.cpp
//  Desktop
//  A00817359
//  Created by Carlos González on 9/1/17.
//  Copyright © 2017 Carlos. All rights reserved.
//

#include <iostream>
#include <vector>
#define for1(i,a,b) for(int iK=(a);iK!=(b);iK =(a)<(b)? iK+1: iK-1)1:i-1)
using namespace std;


//Función que despliega los valores del vector
void desplegarVector(vector<string> vector) {
    
    for (int iK = 0; iK < vector.size(); iK++) {
        
        cout<<vector[iK]<<endl;
    }
}

//Funcion que lee las ciudades y sus conexiones con otras
void leerCiudades(vector<string> &sVector, int iR ) {
    
    //Declaracion de variables
    string sCity = " ";
    string sValor = " ";
    string sCity_2 = " ";
    bool bAux = true;
    bool bAux_2 = true;
    
    for (int iK = 0; iK < iR; iK++) {
        
        cin >> sCity >> sValor >> sCity_2;
        
        for (int iJ = 0; iJ < sVector.size(); iJ++) {
            
            if (sVector[iK] == sCity && bAux == true) {
                
                bAux = false;
            }
            
            if (sVector[iK] == sCity_2 && bAux_2 == true) {
                
                bAux_2 = false;
            }
        }
        
        if (bAux == true) {
            
            sVector.push_back(sCity);
        }
        else if (bAux_2 == true) {
            
            sVector.push_back(sCity_2);
        }
        
        bAux = true;
        bAux_2 = true;
        
    }
}


//Funcion principal
int main() {
    
    //Declaracion de variables
    vector<string> sVector;
    vector< vector<int> > iVector;
    string sFrase = " ";
    int iLocation = 0; //N
    int iCar = 0; //C
    int iRoad = 0; //R
    
    cout<<"--Empieza el problema--"<<endl;
    cin >> iLocation >> iCar >> iRoad;
    
    for (int iK = 0; iK <= iCar; iK++) {
        
        cin >> sFrase;
        sVector.push_back(sFrase);
    }
    
    leerCiudades(sVector, iRoad);
    desplegarVector(sVector);
    
    return 0;
}
