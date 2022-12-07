#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include<windows.h>
#include<time.h>
/*
0000 1010
//-------
0000 0000 >>8
0000 0000 >>7
0000 0000 >>6
0000 0000 >>5
0000 1000 >>4
0000 1000 >>3
0000 1010 >>2
0000 0000 >>1
*/
//------------------------------------------------------------------Decimal-Binary-Converter-------------------------------------------------------------

int binfonk(int yolla) {
    int binary, i;

    //int b=7;
    for (i = 7; i >= 0; i--)
    {

        binary = yolla >> i;

        if (binary & 1)
        {
            printf("*");
        }
        else {
            printf(" ");
        }
        //  b--;
    }
}

//-------------------------------------------------------------------------For-Döngüsü--------------------------------------------------------------------

void kordinat(int x, int y)
{
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

char donbaba01(int a1[8])
{
    int caw = 10;
    for (int i = 0; i < 8; i++)
    {
        kordinat(41, caw);
        binfonk(a1[i]);
        printf("\n");
        caw++;
    }
}
char donbaba02(int a1[8])
{
    int caw = 10;
    for (int i = 0; i < 8; i++)
    {
        kordinat(71, caw);
        binfonk(a1[i]);
        printf("\n");
        caw++;
    }
}
char donbaba(int a1[8])
{
    int caw = 10;

    for (int i = 0; i < 8; i++)
    {
        kordinat(20, caw);
        binfonk(a1[i]);
        printf("\n");
        caw++;
    }
}
char donbaba1(int a1[8])
{
    int caw = 10;
    for (int i = 0; i < 8; i++)
    {
        kordinat(30, caw);
        binfonk(a1[i]);
        printf("\n");
        caw++;
    }
}
char donbaba2(int a1[8])
{
    int caw = 10;
    for (int i = 0; i < 8; i++)
    {
        kordinat(50, caw);
        binfonk(a1[i]);
        printf("\n");
        caw++;
    }
}
char donbaba3(int a1[8])
{
    int caw = 10;
    for (int i = 0; i < 8; i++)
    {
        kordinat(60, caw);
        binfonk(a1[i]);
        printf("\n");
        caw++;
    }
}
char donbaba4(int a1[8])
{
    int caw = 10;
    for (int i = 0; i < 8; i++)
    {
        kordinat(80, caw);
        binfonk(a1[i]);
        printf("\n");
        caw++;
    }
}
char donbaba5(int a1[8])
{
    int caw = 10;
    for (int i = 0; i < 8; i++)
    {
        kordinat(90, caw);
        binfonk(a1[i]);
        printf("\n");
        caw++;
    }
}
//-------------------------------------------------------------------------------Kordinat-----------------------------------------------------------------------------

int main()
{
    while (1)
{

    


    time_t simdi;  // Time.h kütüphanesinden time_t zımbırtısından yeni bir "simdi" adlı değişken
    simdi = time(0); // Bu time'ı simdiye atadım 0 yerine NULL da yazabilirdim

    struct tm zaman;  // tm structından zaman adlı bir değişken oluşturdum

    zaman = *localtime(&simdi); // Çorlanmış bir pointer :)

    char simdi_saat[10];    // burası asıl mevzu çünkü saat dakika saniye karakterlerini tek tek kontrol edebiliyorum

    strftime(simdi_saat, sizeof(simdi_saat), "%H.%M.%S", &zaman); // istedimiz gibi düzenleme yapmayı sağlar

//--------------------------Font-----------------------------

    int ikinok[] = { 0,24,24,0,0,24,24,0};
    int sifir[] = { 127,65,65,65,65,65,65,127};
    int bir[] = {8,24,40,72,8,8,8,127};
    int iki[] = {28,34,66,4,8,16,32,127};
    int uc[] = {124,2,1,2,126,1,2,124};
    int dort[] = {1,2,4,8,17,33,127,1};
    int bes[] = {127,64,64,64,126,1,2,124};
    int alti[] = {31,32,64,94,65,65,33,30};
    int yedi[] = {127,1,2,4,62,16,32,64};
    int sekiz[] = {62,65,65,65,62,65,65,62};
    int dokuz[] = {62,65,65,65,63,1,1,63};

    //-----------------------------------------------------------------------------------------------------------------------------------------------------------
 // #region
        if (simdi_saat[0] == '0')
            simdi_saat[0] = donbaba(sifir);

        if (simdi_saat[0] == '1')
            simdi_saat[0] = donbaba(bir);

        if (simdi_saat[0] == '2')
            simdi_saat[0] = donbaba(iki);

        if (simdi_saat[0] == '3')
            simdi_saat[0] = donbaba(uc);

        if (simdi_saat[0] == '4')
            simdi_saat[0] = donbaba(dort);

        if (simdi_saat[0] == '5')
            simdi_saat[0] = donbaba(bes);

        if (simdi_saat[0] == '6')
            simdi_saat[0] = donbaba(alti);

        if (simdi_saat[0] == '7')
            simdi_saat[0] = donbaba(yedi);

        if (simdi_saat[0] == '8')
            simdi_saat[0] = donbaba(sekiz);

        if (simdi_saat[0] == '9')
            simdi_saat[0] = donbaba(dokuz);


        if (simdi_saat[1] == '0')
            simdi_saat[1] = donbaba1(sifir);

        if (simdi_saat[1] == '1')
            simdi_saat[1] = donbaba1(bir);

        if (simdi_saat[1] == '2')
            simdi_saat[1] = donbaba1(iki);

        if (simdi_saat[1] == '3')
            simdi_saat[1] = donbaba1(uc);

        if (simdi_saat[1] == '4')
            simdi_saat[1] = donbaba1(dort);

        if (simdi_saat[1] == '5')
            simdi_saat[1] = donbaba1(bes);

        if (simdi_saat[1] == '6')
            simdi_saat[1] = donbaba1(alti);

        if (simdi_saat[1] == '7')
            simdi_saat[1] = donbaba1(yedi);

        if (simdi_saat[1] == '8')
            simdi_saat[1] = donbaba1(sekiz);

        if (simdi_saat[1] == '9')
            simdi_saat[1] = donbaba1(dokuz);



        if (simdi_saat[2] == '.')
            simdi_saat[2] = donbaba01(ikinok);
        simdi_saat[5] = donbaba02(ikinok);




        if (simdi_saat[3] == '0')
            simdi_saat[3] = donbaba2(sifir);

        if (simdi_saat[3] == '1')
            simdi_saat[3] = donbaba2(bir);

        if (simdi_saat[3] == '2')
            simdi_saat[3] = donbaba2(iki);

        if (simdi_saat[3] == '3')
            simdi_saat[3] = donbaba2(uc);

        if (simdi_saat[3] == '4')
            simdi_saat[3] = donbaba2(dort);

        if (simdi_saat[3] == '5')
            simdi_saat[3] = donbaba2(bes);

        if (simdi_saat[3] == '6')
            simdi_saat[3] = donbaba2(alti);

        if (simdi_saat[3] == '7')
            simdi_saat[3] = donbaba2(yedi);

        if (simdi_saat[3] == '8')
            simdi_saat[3] = donbaba2(sekiz);

        if (simdi_saat[3] == '9')
            simdi_saat[3] = donbaba2(dokuz);

        if (simdi_saat[4] == '0')
            simdi_saat[4] = donbaba3(sifir);

        if (simdi_saat[4] == '1')
            simdi_saat[4] = donbaba3(bir);

        if (simdi_saat[4] == '2')
            simdi_saat[4] = donbaba3(iki);

        if (simdi_saat[4] == '3')
            simdi_saat[4] = donbaba3(uc);

        if (simdi_saat[4] == '4')
            simdi_saat[4] = donbaba3(dort);

        if (simdi_saat[4] == '5')
            simdi_saat[4] = donbaba3(bes);

        if (simdi_saat[4] == '6')
            simdi_saat[4] = donbaba3(alti);

        if (simdi_saat[4] == '7')
            simdi_saat[4] = donbaba3(yedi);

        if (simdi_saat[4] == '8')
            simdi_saat[4] = donbaba3(sekiz);

        if (simdi_saat[4] == '9')
            simdi_saat[4] = donbaba3(dokuz);


        if (simdi_saat[6] == '0')
            simdi_saat[6] = donbaba4(sifir);

        if (simdi_saat[6] == '1')
            simdi_saat[6] = donbaba4(bir);

        if (simdi_saat[6] == '2')
            simdi_saat[6] = donbaba4(iki);

        if (simdi_saat[6] == '3')
            simdi_saat[6] = donbaba4(uc);

        if (simdi_saat[6] == '4')
            simdi_saat[6] = donbaba4(dort);

        if (simdi_saat[6] == '5')
            simdi_saat[6] = donbaba4(bes);

        if (simdi_saat[6] == '6')
            simdi_saat[6] = donbaba4(alti);

        if (simdi_saat[6] == '7')
            simdi_saat[6] = donbaba4(yedi);

        if (simdi_saat[6] == '8')
            simdi_saat[6] = donbaba4(sekiz);

        if (simdi_saat[6] == '9')
            simdi_saat[6] = donbaba4(dokuz);


        if (simdi_saat[7] == '0')
            simdi_saat[7] = donbaba5(sifir);

        if (simdi_saat[7] == '1')
            simdi_saat[7] = donbaba5(bir);

        if (simdi_saat[7] == '2')
            simdi_saat[7] = donbaba5(iki);

        if (simdi_saat[7] == '3')
            simdi_saat[7] = donbaba5(uc);

        if (simdi_saat[7] == '4')
            simdi_saat[7] = donbaba5(dort);

        if (simdi_saat[7] == '5')
            simdi_saat[7] = donbaba5(bes);

        if (simdi_saat[7] == '6')
            simdi_saat[7] = donbaba5(alti);

        if (simdi_saat[7] == '7')
            simdi_saat[7] = donbaba5(yedi);

        if (simdi_saat[7] == '8')
            simdi_saat[7] = donbaba5(sekiz);

        if (simdi_saat[7] == '9')
            simdi_saat[7] = donbaba5(dokuz);
        
    //    #endregion

    
    
    Sleep(500);
    system("cls");
    }
    getchar();

    getchar();

    return 0;
}



   

