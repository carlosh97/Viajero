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

//Funcion principal
int main() {
    
    //Declaracion de variables
    vector<string> sVector;
    vector<vector<int>> iVector;
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
    
    desplegarVector(sVector);
    
    return 0;
}
