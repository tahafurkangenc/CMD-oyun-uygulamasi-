#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
void mainscreen (void)
{
    int secimekraninagitmedegiskeni=0;
    system("cls");
    printf("*********************\n");
    printf("*   O   Y   U   N   *\n");
    printf("*********************\n\n\n\n");
    printf("\n\n\n Secim ekranina gitmek icin herhangi bir tusa sonra enter'a basiniz");
    scanf("%d",&secimekraninagitmedegiskeni);
    printf("%d",secimekraninagitmedegiskeni);
}
int secimekrani(void)
{
    int oyunsecimi=0;
    system("cls");
    printf("    Bir oyun seciniz    \n\n\n");
    printf("        Tas Kagit Makas      =1\n\n");
    printf("        Seni Ne Kadar Seviyor=2\n\n");
    printf("        J A C K P O T        =3\n\n");
    printf("        X   O   X            =4\n\n");
    do
        scanf("%d",&oyunsecimi);
    while(oyunsecimi>4 || oyunsecimi<1);
    return oyunsecimi;
}
void oyunayraci (int oyunsecimi)
{
    switch (oyunsecimi)
    {
    case 1:
        taskagitmakas();
        break;
   case 2:
       seninekadarseviyor();
       break;
   case 3:
       jackpot();
       break;
   case 4:
       xox();
       break;
    }
}
int taskagitmakas (void)
{
    system("cls");
    printf("SECILEN OYUN : TAS KAGIT MAKAS");
    sleep (1);
    system("cls");
    int hamle=0;
    int hamledegiskeni=0;
    int puan=0;

    while(hamle!=4)
    {
          printf("\n\n Hamlenizi giriniz:");
          printf("\nTas : 1 \nKagit: 2 \n Makas:3\n\n Oyunu bitirmek icin:4\n\n");
          scanf("%d",&hamle);
          system("cls");
           hamledegiskeni=rand()%3;
          switch (hamledegiskeni)
          {
          case 0:
               printf("\nRAKIP TAS YAPTI\n\n");
               switch(hamle)
                  {
                 case 1:
                     printf("Berabere\n Puan=%d",puan);
                      break;
                 case 2:
                        puan=puan+5;
                         printf("Kazandin\n Puan=%d",puan);
                          break;
                 case 3:
                        puan=puan-5;
                         printf("Kaybettin\n Puan=%d",puan);
                          break;
                 case 4:
                       main();
                    break;
                   }
                   break;
            case 1:
               printf("\nRAKIP KAGIT YAPTI\n\n");
               switch(hamle)
                  {
                 case 2:
                     printf("Berabere\n Puan=%d",puan);
                      break;
                 case 3:
                        puan=puan+5;
                         printf("Kazandin\n Puan=%d",puan);
                          break;
                 case 1:
                        puan=puan-5;
                         printf("Kaybettin\n Puan=%d",puan);
                          break;
                 case 4:
                    main();
                    // return;
                    break;
                   }
             break;
            case 2:
               printf("\nRAKIP MAKAS YAPTI\n\n");
               switch(hamle)
                  {
                 case 3:
                     printf("Berabere\n Puan=%d",puan);
                      break;
                 case 1:
                        puan=puan+5;
                         printf("Kazandin\n Puan=%d",puan);
                          break;
                 case 2:
                        puan=puan-5;
                         printf("Kaybettin\n Puan=%d",puan);
                          break;
                 case 4:
                     main();
                    break;
                   }
             break;
            }
    }
}
int seninekadarseviyor(void)
{
    system("cls");
    printf("SECILEN OYUN:SENI NE KADAR SEVIYOR");
    sleep(2);
    system("cls");
    srand(time(NULL));
     int rastgelebekletme=0;
      int kullanicininadininharfsayisi=0;
       int karsitarafinadininharfsayisi=0;
        int benzerlikpuani=0;
         char karsitarafinadinindizisi[100];
          char kullanicininadinindizisi[100];
     printf ("Oncelikle adin kac harfli?:");
      scanf("%d",&kullanicininadininharfsayisi);
       system("cls");
       printf("\nLutfen adinizi giriniz:");
        scanf("%s",&kullanicininadinindizisi);
        system("cls");
         int rastgelesayi1=0;
          rastgelesayi1= rand()%3 ;
    switch(rastgelesayi1)
    {
    case 0:
        printf("\nhmm \n");
         sleep(1);
          printf("fena bir isim degil\n");
        break;
    case 1:
        printf("\nwow\n");
         sleep(1);
          printf("Bu guzel isim icin annene tesekkur et bence\n");
        break;
    case 2:
        printf("hmmm\n");
         sleep(1);
          printf("ok\n");
        break;
    }
    sleep(2);
    system("cls");
     printf ("\nkarsi tarafin adi kac harfli?:");
      scanf("%d",&karsitarafinadininharfsayisi);
      system("cls");
       printf("\nLutfen karsi tarafin adini giriniz:");
        scanf("%s",&karsitarafinadinindizisi);
        system("cls");
         int rastgelesayi2=0;
          rastgelesayi2=rand()%3;
    switch(rastgelesayi2)
    {
    case 0:
        printf("\nhmm \n");
         sleep(1);
          printf("fena bir isim degil\n");
        break;
    case 1:
        printf("\nwow\n");
         sleep(1);
          printf("mustakbel yengemizin de ismi ne guzelmis ustaa\n");
        break;
    case 2:
        printf("\nhmmm\n");
         sleep(1);
          printf("pek isinamadim bu isme\n");
        break;
    }
    if(karsitarafinadininharfsayisi>kullanicininadininharfsayisi)
    {
        for(int diziokuma1=0;diziokuma1<kullanicininadininharfsayisi;diziokuma1++)
        {
            if(kullanicininadinindizisi[diziokuma1]==karsitarafinadinindizisi[diziokuma1])
            {
                benzerlikpuani=benzerlikpuani+5;
            }
        }
    }
    else
    {
        for(int diziokuma2=0;diziokuma2<karsitarafinadininharfsayisi;diziokuma2++)
        {
            if(kullanicininadinindizisi[diziokuma2]==karsitarafinadinindizisi[diziokuma2])
            {
                benzerlikpuani=benzerlikpuani+5;
            }
        }
    }
    sleep(1);
      printf("Oyleyse sorular ile devam edelim mi?\devam etmek icin 1 yaz");
    int tamammidevammi=0;
      scanf("%d",&tamammidevammi);
      system("cls");
    if (tamammidevammi==1)
    {
        printf("ben de oyle dusunmustum");
    }
    else
    {
        sleep(1);
         printf("\nyoo\n");
          sleep(1);
           printf("burada secim yapabilecegini mi dusunuyorsun\n");
            sleep(2);
             printf("eger devam etmek istemiyorsan bu uygulamayi kapatabilirdin\n");
              sleep(2);
               printf("burada yardima ihtiyaci olan bir kisi var, O da ");
                sleep(1);
                 printf("sensin\n");
                  sleep(1);
                   printf("o yuzden kapa ceneni ve devam et");
    }
    sleep(2);
    system("cls");
    sleep(1);
     printf("simdi soyle bana");
      sleep(1);
      system("cls");
       printf(": diyelim ki sacma sapan bir espri yaptin");
        sleep(1);
         printf(" sence buna ragmen guler mi? \n evet:1 \n hayir:herhangi bir sayi");
    int evetmihayirmi1=0;
     scanf("%d",&evetmihayirmi1);
     system("cls");
    if(evetmihayirmi1==1)
    {
        printf("\nguzel güzeeel");
        benzerlikpuani=benzerlikpuani+15;
    }
    else
    {
        printf("\naga beeeee");
        benzerlikpuani=benzerlikpuani-10;
    }
    sleep(2);
    system("cls");
     printf("soru 2: diyelim ki yuz yuze guzelce sohbet ediyosunuz\n");
      sleep(1);
       printf(" istemsizce kendi saclariyla oynar mi? \n evet:1 \n hayir:herhangi bir sayi");
    int evetmihayirmi2=0;
    scanf("%d",&evetmihayirmi2);
    system("cls");
    if(evetmihayirmi2==1)
    {
        printf("guzel cok guzeeel");
        benzerlikpuani=benzerlikpuani+15;
    }
    else
    {
        printf("yak yakk");
        benzerlikpuani=benzerlikpuani-10;
    }
    sleep(2);
    system("cls");
   printf("\nsoru 3:Sen geldiginde kendini duzeltiyor mu?\n(sesini vb.) \n evet:1 \n hayir:herhangi bir sayi");
    int evetmihayirmi3=0;
     scanf("%d",&evetmihayirmi3);
     system("cls");
    if(evetmihayirmi3==1)
    {
        printf("Tamamdirrrr");;
        benzerlikpuani=benzerlikpuani+15;
    }
    else
    {
        printf(" olmadý bu :( ");
        benzerlikpuani=benzerlikpuani-10;
    }
    sleep(2);
    system("cls");
    printf("Simdi sonuclari hesaplama vaktiii");
    sleep(2);
    system("cls");
    printf("\nSonuclar hesaplaniyor");
    int rastgelesevgi=0;
      rastgelesevgi=rand()%(100-benzerlikpuani);
    int bukadarseviyor=0;
      bukadarseviyor=rastgelesevgi+benzerlikpuani;
    while (rastgelebekletme<100)
    {
        system("cls");
        printf("Yukleniyor:%d\n",rastgelebekletme);
        sleep(1);
        rastgelebekletme=rastgelebekletme+1+rand()%20;
    }
    system("cls");
    printf("Yuklendi");
    sleep(1);
    system("cls");
    if (bukadarseviyor<=15)
    {
        printf("\nAGA BEEEEE");
        sleep(1);
        printf("\olmazdi be zaten");
        sleep(1);
        printf(" sikma canini");
    }
    else if (bukadarseviyor>15 && bukadarseviyor<=30)
    {
        printf("\olmaz gibi be\n");
        sleep(1);
        printf("kusuruma bakma\n");
    }
    else if(bukadarseviyor>30 && bukadarseviyor<55)
    {
        printf("\n arada kaldim be");
        printf("\n olur gibi be");
    }
    else if(bukadarseviyor>=55 && bukadarseviyor<70)
    {
        printf("\nguzel guzel oluru var");
    }
    else if(bukadarseviyor>=70& bukadarseviyor<=90)
    {
        printf("\nKanka sana bi sey diyim mi:");
         sleep(1);
         printf("\nO L U R B E E E E E");
    }
    else if (bukadarseviyor>90)
    {
         printf("\nKinayiiii geeetiiiiirr aaaneeeyyy");
         sleep(1);
         printf("\n DUGUNU NE ZAMAN YAPALÝM?");
    }
    sleep(2);
    system("cls");
    printf("\nSENI YUZDE %d SEVIYOR\n\n",bukadarseviyor);
    sleep(3);
    system("cls");
    printf("\n\n Geri dönmek için bir tusa basip entera tiklayin\n");
    int gec;
    scanf("%d",&gec);
    system("cls");
    main();
}
int jackpot(void)
{
    system("cls");
    printf("SECILEN OYUN:JACKPOT");
    sleep(1);
    system("cls");
    int tahminedilecekkaraktersayisi=0;
    printf("Tahmin edilecek karakter sayisini giriniz:");
    scanf("%d",&tahminedilecekkaraktersayisi);
    printf("\nTahmininizi giriniz\n");
    int tahmin[tahminedilecekkaraktersayisi];
    int gercek[tahminedilecekkaraktersayisi];
    for(int i=0;i<tahminedilecekkaraktersayisi;i++)
    {
        system("cls");
        gercek[i]=rand()%10;
        printf("%d. rakami girin:",i+1);
        scanf("%d",&tahmin[i]);
    }
    for (int i=0;i<100;i++)
   {
       for (int j=0;j<tahminedilecekkaraktersayisi;j++)
       {
               printf("%d   ",rand()%10);
       }
       usleep(30000);
       system("cls");
   }
   printf("JACKPOT:\n");
   for (int i=0;i<tahminedilecekkaraktersayisi;i++)
   {
       printf("%d   ",gercek[i]);
   }
   int sayac=0;
   for (int i=0;i<tahminedilecekkaraktersayisi;i++)
   {
       if(tahmin[i]==gercek[i])
       {
           printf("%\n %d. sirayi bildin=%d",i+1,gercek[i]);
           sayac++;
       }
   }
   if (sayac==tahminedilecekkaraktersayisi)
        printf("\nTEBRIKLER HEPSINI BILDIN");
       else
       {
           printf("\n %d deger bildiniz",sayac);
           printf("\n Puaniniz=%d",sayac*5);
       }
       sleep(3);
       printf("\n\nANA MENUYE DONMEK ICIN HERHANGI BIR DEGER GIRIN");
       scanf("%d");
       system("cls");
       main();
}
int xox(void)
{
    system("cls");
    printf("oyundan cikmak icin satir ve sutunu 4 olarak girin");
    sleep(1);
    system("cls");
    char xox [ 3 ][ 3 ];
  int satir , sutun;
  int oyunbitti=0;
  for ( int i = 0 ; i < 3 ; i++ )
  {
      for ( int j = 0 ; j < 3 ; j++ )
      {
          xox [ i ][ j ] = 'B' ;
      }
  }
  while ( 1 )
  {
      if(oyunbitti==1)
      {
            for ( int i = 0 ; i < 3 ; i++ )
            {
                for ( int j = 0 ; j < 3 ; j++ )
                {
                    xox [ i ][ j ] = 'B' ;
                }
            }
            oyunbitti=0;
      }
        for ( int i = 0 ; i < 3 ; i++ )
        {
            for ( int j = 0 ; j < 3 ; j++ )
            {
                printf( "%c\t", xox [ i ][ j ] );
            }
            printf ( "\n\n\n" ) ;
        }
      printf ( "birinci oyuncu hamle girsin  (satir-sutun) " );
      scanf ( "%d %d" , &satir , &sutun) ;
      system ( "cls" ) ;
      if (satir==4 || sutun==4)
      {
          main();
      }
    if ( xox [ satir-1 ][ sutun-1 ] == 'B' )
      {
          xox [ satir-1 ][ sutun-1 ] = 'X';
      }
        if ( xox [ 0 ][ 0 ]  ==  'X'  &&  xox [ 1 ][ 0 ] == 'X'  &&  xox [ 2 ][ 0 ] == 'X' )
        {
            printf ( "\nbirinci oyuncu kazandi\n  ");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if( xox [ 0 ][ 1 ] == 'X' && xox [ 1 ][ 1 ] == 'X' && xox [ 2 ][ 1 ] == 'X')
        {
            printf ( "\nbirinci oyuncu kazandi\n " );
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if( xox [ 0 ][ 2 ] == 'X' && xox [ 1 ][ 2 ] == 'X' && xox [ 2 ][ 2 ] == 'X' )
        {
            printf ( "\nbirinci oyuncu kazandi\n" );
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if( xox [ 0 ][ 0 ] == 'O' && xox [ 1 ][ 0 ]  == 'O' && xox [ 2 ][ 0 ] == 'O' )
        {
            printf ( "\nikinci oyuncu kazandi\n" );
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if( xox [ 0 ][ 1 ] == 'O' && xox [ 1 ][ 1 ] == 'O' && xox [ 2 ][ 1 ] == 'O' )
        {
            printf ( "\nikinci oyuncu kazandi\n" );
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if( xox [ 0 ][ 2 ] == 'O' && xox [ 1 ][ 2 ] == 'O' && xox [ 2 ][ 2 ] == 'O' )
        {
            printf ( "\nikinci oyuncu kazandi\n" );
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if( xox [ 0 ][ 0 ] == 'X' && xox [ 0 ][ 1 ] == 'X' && xox [ 0 ][ 2 ] == 'X' )
        {
            printf ( "\nbirinci oyuncu kazandi\n" );
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if( xox [ 1 ][ 0 ] == 'X' && xox [ 1 ][ 1 ] == 'X' && xox [ 1 ][ 2 ] == 'X' )
        {
            printf ( "\nbirinci oyuncu kazandi\n" );
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if( xox [ 2 ][ 0 ] == 'X' && xox [ 2 ][ 1 ] == 'X' && xox [ 2 ][ 2 ] == 'X' )
        {
            printf ( "\nbirinci oyuncu kazandi\n" );
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if( xox [ 0 ][ 0 ] == 'O' && xox [ 0 ][ 1 ] == 'O' && xox [ 0 ][ 2 ] == 'O' )
        {
            printf("\nikinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }

        if(xox [ 1 ][ 0 ] == 'O' && xox [ 1 ][ 1 ] == 'O' && xox [ 1 ][ 2 ] == 'O')
        {
            printf("\nikinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }

        if(xox [ 2 ][ 0 ] == 'O' && xox [ 2 ][ 1 ] == 'O' && xox [ 2 ][ 2 ] == 'O')
        {
            printf("\nikinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }

        if(xox [ 0 ][ 2 ] == 'X' && xox [ 1 ][ 1 ] == 'X' && xox [ 2 ][ 0 ] == 'X')
        {
            printf("\nbirinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }

        if(xox [ 0 ][ 0 ] == 'X' && xox [ 1 ][ 1 ] == 'X' && xox [ 2 ][ 2 ] == 'X')
        {
            printf("\nbirinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }

        if(xox [ 0 ][ 2 ] == 'O' && xox [ 1 ][ 1 ] == 'O' && xox [ 2 ][ 0 ] == 'O')
        {
            printf("\nikinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }

        if(xox [ 0 ][ 0 ] == 'O' && xox [ 1 ][ 1 ] == 'O' && xox [ 2 ][ 2 ] == 'O')
        {
            printf("\nikinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        for ( int i = 0 ; i < 3 ; i++)
        {
            for ( int j = 0 ; j < 3 ; j++)
            {
                printf ( "%c\t", xox [ i ][ j ] );
            }
            printf( "\n\n\n" );
        }
      printf ( "ikinci oyuncu hamle girsin (satir-sutun)" );
      scanf ( "%d %d" , &satir , &sutun );
      system ("cls");
      if (satir==4 || sutun==4)
      {
          main();
      }
      if ( xox [ satir-1 ][ sutun-1 ] == 'B' )
      {
          xox [ satir-1 ][ sutun-1 ] = 'O';
      }
        if (xox [ 0 ][ 0 ] == 'X' && xox [ 1 ][ 0 ] == 'X' && xox [ 2 ][ 0 ] == 'X')
        {
            printf("\nbirinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if(xox [ 0 ][ 1 ] == 'X' && xox [ 1 ][ 1 ] == 'X' && xox [ 2 ][ 1 ] == 'X')
        {
            printf("\nbirinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if(xox [ 0 ][ 2 ] == 'X' && xox [ 1 ][ 2 ] == 'X' && xox [ 2 ][ 2 ] == 'X')
        {
            printf("\nbirinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if(xox [ 0 ][ 0 ] == 'O' && xox [ 1 ][ 0 ] == 'O' && xox [ 2 ][ 0 ] == 'O')
        {
            printf("\nikinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if(xox [ 0 ][ 1 ] == 'O' && xox [ 1 ][ 1 ] == 'O' && xox [ 2 ][ 1 ] == 'O')
        {
            printf("\nikinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if(xox [ 0 ][ 2 ] == 'O' && xox [ 1 ][ 2 ] == 'O' && xox [ 2 ][ 2 ] == 'O')
        {
            printf("\nikinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if(xox [ 0 ][ 0 ] == 'X' && xox [ 0 ][ 1 ] == 'X' && xox [ 0 ][ 2 ] == 'X')
        {
            printf("\nbirinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if(xox [ 1 ][ 0 ] == 'X' && xox [ 1 ][ 1 ] == 'X' && xox [ 1 ][ 2 ] == 'X')
        {
            printf("\nbirinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if(xox [ 2 ][ 0 ] == 'X' && xox [ 2 ][ 1 ] == 'X' && xox [ 2 ][ 2 ] == 'X')
        {
            printf("\nbirinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if(xox [ 0 ][ 0 ] == 'O' && xox [ 0 ][ 1 ] == 'O' && xox [ 0 ][ 2 ] == 'O')
        {
            printf("\nikinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if(xox [ 1 ][ 0 ] == 'O' && xox [ 1 ][ 1 ] == 'O' && xox [ 1 ][ 2 ] == 'O')
        {
            printf("\nikinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if(xox [ 2 ][ 0 ] == 'O' && xox [ 2 ][ 1 ] == 'O' && xox [ 2 ][ 2 ] == 'O')
        {
            printf("\nikinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if(xox [ 0 ][ 2 ] == 'X' && xox [ 1 ][ 1 ] == 'X' && xox [ 2 ][ 0 ] == 'X')
        {
            printf("\nbirinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if(xox [ 0 ][ 0 ] == 'X' && xox [ 1 ][ 1 ] == 'X' && xox [ 2 ][ 2 ] == 'X')
        {
            printf("\nbirinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
         if(xox [ 0 ][ 2 ] == 'O' && xox [ 1 ][ 1 ] == 'O' && xox [ 2 ][ 0 ] == 'O')
        {
            printf("\nikinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
        if(xox [ 0 ][ 0 ] == 'O' && xox [ 1 ][ 1 ] == 'O' && xox [ 2 ][ 2 ] == 'O')
        {
            printf("\nikinci oyuncu kazandi\n");
            oyunbitti=1;
            sleep(2);
            system("cls");
            continue;
        }
  }
}
int main()
{
    srand(time(NULL));
    mainscreen();
    int oyunsecimi;
    oyunsecimi=secimekrani();
    oyunayraci(oyunsecimi);// oyunayraci(secimekrani());
    return 0;
}
