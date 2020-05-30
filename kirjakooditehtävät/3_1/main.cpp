#include <iostream>
#include <C:\testi\kirjakooditehtävät\sales_item.h>
#include <sales_data.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    //1.9
/*    int arvo = 50;
    while(arvo <= 100)
    {
        cout << arvo << endl;
        arvo++;
    }*/

    //1.10//

 /*   int arvo = 10;
    while(arvo >= 0)
    {
        cout << arvo << endl;
        arvo--;
    }*/

    //1.11//

  /*  int arvo1=0;
    int arvo2 = 0;

    cin >> arvo1 >> arvo2;

    while(arvo1 <= arvo2)
    {
        cout << arvo1;
        arvo1++;

    }*/

    //teht1_20
  /*    Sales_data kampe;

      double hinta = 0.0;
      while(cin >> kampe.tuoteNro >> kampe.myytyMaara >> hinta)
      {
          kampe.tulos = kampe.myytyMaara * hinta;
          cout << kampe.tuoteNro << " " << kampe.myytyMaara << " " << kampe.tulos << endl;
      }
    */

      //teht1_21
   /*   Sales_data kampe1, kampe2;
      double hinta = 0;
      if(cin >> kampe1.tuoteNro >> kampe1.myytyMaara >> hinta)
      {
          kampe1.tulos = kampe1.myytyMaara * hinta;

      if(cin >> kampe2.tuoteNro >> kampe2.myytyMaara >> hinta)
      {
          kampe2.tulos = kampe2.myytyMaara * hinta;

      if(kampe1.tuoteNro == kampe2.tuoteNro)
      {
          int kokMyynti = kampe1.myytyMaara + kampe2.myytyMaara;
          int kokonaisTulos = kampe1.tulos + kampe2.tulos;
          cout << kampe1.tuoteNro << " " << kokMyynti << " " << kokonaisTulos << " ";

          if(kokMyynti != 0)
          {
            cout << kokonaisTulos / kokMyynti << endl;

          }else {
              cout << "ei myyntia" << endl;
          }

      }else {
          cout << "tuotenumerot eivat tasmaa";
      }
     }else{
          cout << "ei annettu dataa kampe2:selle";
      }
    }else{
          cout << "ei annettu dataa kampe1:selle.";
      }*/

      //teht1_22
  /*    Sales_data kokMaara, myyja;

      double hinta = 0;
      if(cin >> kokMaara.tuoteNro >> kokMaara.myytyMaara >> hinta)
      {
          kokMaara.tulos = kokMaara.myytyMaara * hinta;
          while(cin >> myyja.tuoteNro >> myyja.myytyMaara >> hinta)
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
          cout << kokMaara.tuoteNro << " " << kokMaara.myytyMaara << " " << kokMaara.tulos << " ";
          if(kokMaara.myytyMaara != 0)
          {
              cout << kokMaara.tulos / kokMaara.myytyMaara << std::endl;
          }else{
              cout << " ei myyntia" << std::endl;
              kokMaara.tuoteNro = myyja.tulos;
              kokMaara.myytyMaara = myyja.myytyMaara;
              kokMaara.tulos = myyja.tulos;
          }

      }
      cout << kokMaara.tuoteNro << " " << kokMaara.myytyMaara << " " << kokMaara.tulos << " ";
      if(kokMaara.myytyMaara != 0)
      {
         cout << kokMaara.tulos / kokMaara.myytyMaara << std::endl;

      }else {
          cout << "ei myyntia" << std::endl;
      }

  }else {
          cout << "ei annettu dataa" << std::endl;
      }*/

      //teht1_23
   /*   Sales_data kokMaara, myyja;

      double hinta = 0;
      if(cin >> kokMaara.tuoteNro >> kokMaara.myytyMaara >> hinta)
      {
          int laskuri = 0;
          while(cin >> myyja.tuoteNro >>myyja.myytyMaara >> hinta)
          {
              if(kokMaara.tuoteNro == myyja.tuoteNro){
                  laskuri++;
              }else{
                  cout << kokMaara.tuoteNro << " " << laskuri << std::endl;
                  kokMaara.tuoteNro = myyja.tuoteNro;
                  kokMaara.myytyMaara = myyja.myytyMaara;
                  laskuri = 1;
              }
          }
          cout << kokMaara.tuoteNro << " " << laskuri << endl;

      }else{
          cout << "ei annettu dataa" << endl;
      }*/




    return 0;
}
