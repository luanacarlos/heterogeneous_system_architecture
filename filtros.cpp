#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){

    ofstream nova_imagem;
    ifstream image;
    nova_imagem.open("nova_imagem.ppm");
    image.open("imagem.ppm");
    
    while(!image.eof()){
        string text;
        getline(image, text);
        nova_imagem << text << endl;
    }

/*
    if (image.is_open()){
        image << "P3" << endl;
        image << "250 250" << endl;
        image << "255" << endl;
    }
    int r, g, b = 0;

    for(int i = 0; i < 250; i++){
        for (int j = 0; j < 250; j++){

            if (i <= 124){
                if (j <= 124){
                    r = 255;
                    g = 0;
                    b = 0;
                }
                else{
                    r = 0;
                    g = 255;
                    b = 0;
                }
            }

            if (i > 124){
                if (j <= 124){
                    r = 0;
                    g = 0;
                    b = 255;

                }
                else{
                    r = 255;
                    b = 0; 
                    g = 255; 
                }
            }
            image << r << " " << g << " " << b << endl;
        }
    }
*/

// IMAGE HEADER


// PURE IMAGE BITS
    nova_imagem.close();
    image.close();
    return 0;
    
}
