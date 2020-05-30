#include <iostream>
#include <sales_data.h>

int main()
{
  //teht1_20
/*    Sales_data kampe;

    double hinta = 0.0;
    while(std::cin >> kampe.tuoteNro >> kampe.myytyMaara >> hinta)
    {
        kampe.tulos = kampe.myytyMaara * hinta;
        std::cout << kampe.tuoteNro << " " << kampe.myytyMaara << " " << kampe.tulos << std::endl;
    }
  */

    //teht1_21
 /*   Sales_data kampe1, kampe2;
    double hinta = 0;
    if(std::cin >> kampe1.tuoteNro >> kampe1.myytyMaara >> hinta)
    {
        kampe1.tulos = kampe1.myytyMaara * hinta;

    if(std::cin >> kampe2.tuoteNro >> kampe2.myytyMaara >> hinta)
    {
        kampe2.tulos = kampe2.myytyMaara * hinta;

    if(kampe1.tuoteNro == kampe2.tuoteNro)
    {
        int kokMyynti = kampe1.myytyMaara + kampe2.myytyMaara;
        int kokonaisTulos = kampe1.tulos + kampe2.tulos;
        std::cout << kampe1.tuoteNro << " " << kokMyynti << " " << kokonaisTulos << " ";

        if(kokMyynti != 0)
        {
          std::cout << kokonaisTulos / kokMyynti << std::endl;

        }else {
            std::cout << "ei myyntia" << std::endl;
        }

    }else {
        std::cout << "tuotenumerot eivat tasmaa";
    }
   }else{
        std::cout << "ei annettu dataa kampe2:selle";
    }
  }else{
        std::cout << "ei annettu dataa kampe1:selle.";
    }*/

    //teht1_22
/*    Sales_data kokMaara, myyja;

    double hinta = 0;
    if(std::cin >> kokMaara.tuoteNro >> kokMaara.myytyMaara >> hinta)
    {
        kokMaara.tulos = kokMaara.myytyMaara * hinta;
        while(std::cin >> myyja.tuoteNro >> myyja.myytyMaara >> hinta)
        {
            myyja.tulos = myyja.myytyMaara * hinta;
            kokMaara.tulos += myyja.tulos;
        }
        if(kokMaara.tuoteNro == myyja.tuoteNro)
        {
         kokMaara.myytyMaara += myyja.myytyMaara;
         kokMaara.tulos += myyja.tulos;
        }
    else{
        std::cout << kokMaara.tuoteNro << " " << kokMaara.myytyMaara << " " << kokMaara.tulos << " ";
        if(kokMaara.myytyMaara != 0)
        {
            std::cout << kokMaara.tulos / kokMaara.myytyMaara << std::endl;
        }else{
            std::cout << " ei myyntia" << std::endl;
            kokMaara.tuoteNro = myyja.tulos;
            kokMaara.myytyMaara = myyja.myytyMaara;
            kokMaara.tulos = myyja.tulos;
        }

    }
    std::cout << kokMaara.tuoteNro << " " << kokMaara.myytyMaara << " " << kokMaara.tulos << " ";
    if(kokMaara.myytyMaara != 0)
    {
        std::cout << kokMaara.tulos / kokMaara.myytyMaara << std::endl;

    }else {
        std::cout << "ei myyntia" << std::endl;
    }

}else {
        std::cout << "ei annettu dataa" << std::endl;
    }*/

    //teht1_23
 /*   Sales_data kokMaara, myyja;

    double hinta = 0;
    if(std::cin >> kokMaara.tuoteNro >> kokMaara.myytyMaara >> hinta)
    {
        int laskuri = 0;
        while(std::cin >> myyja.tuoteNro >>myyja.myytyMaara >> hinta)
        {
            if(kokMaara.tuoteNro == myyja.tuoteNro){
                laskuri++;
            }else{
                std::cout << kokMaara.tuoteNro << " " << laskuri << std::endl;
                kokMaara.tuoteNro = myyja.tuoteNro;
                kokMaara.myytyMaara = myyja.myytyMaara;
                laskuri = 1;
            }
        }
        std::cout << kokMaara.tuoteNro << " " << laskuri << std::endl;

    }else{
        std::cout << "ei annettu dataa" << std::endl;
    }*/



    return 0;
}
