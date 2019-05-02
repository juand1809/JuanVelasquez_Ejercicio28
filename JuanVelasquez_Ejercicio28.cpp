#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    ofstream outfile;
    int k = 200;
    int c = 900;
    int ro = 2700;
    float delta_x = 0.01;
    float delta_t = 0.5;
    int i,j;
    int N = 201;
    const float n = (delta_t*k)/((delta_x*delta_x)*c*ro);
    float barra_viejo[N];
    float barra_nuevo[N];
    
    for (i = 0; i < N; i++){
        if(i >= 80 && i <= 120){
            barra_viejo[i] = 500.0;
        }
        else{
            barra_viejo[i] = 300.0;
        }
    }
    
    barra_nuevo[0] = 300.0;
    
    
    
    for (j = 0; j < 100; j++){
        for (i = 1; i < N; i++){
            barra_nuevo[i] = barra_viejo[i] + n*(barra_viejo[i+1] + barra_viejo[i-1]-2*barra_viejo[i]);   
        }
        for (i = 1; i < N; i++){
            barra_viejo[i] = barra_nuevo[i];   
        }        
        
       
    outfile.open("data.dat");
    for (j = 0; j < N; j++){ 
        outfile << j << " " << j << " " << barra_viejo[j] << " " << barra_nuevo[j] << endl;  
    }
    
    outfile.close();
    return 0; 
    
    
}