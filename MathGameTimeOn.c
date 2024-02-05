//
//  MathGameTimeOn.c
//  Arayüz
//
//  Created by Fatih Bayraktar on 23.01.2021.
//

#include "MathGameTimeOn.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define randnum(min, max) ((rand() % (int) (((max) + 1) - (min))) + (min))


float puanyapici2(float difficultyFactor,int answer_time,int binary) {
    setlocale(LC_ALL, "Turkish");
    float point;
    
    if (binary == 1) {
        if (answer_time==1) {
            point = (float)difficultyFactor * 10;
        }
        else if (answer_time==2){
            point = (float)difficultyFactor * 5;
        }
        else if (answer_time==3){
            point = (float)difficultyFactor * 2;
        }
        else{
            point = (float)difficultyFactor;
        }
        
    }
    else {
        if (difficultyFactor < 15) {
            point = -5;
        }
        else if (difficultyFactor < 30) {
        point = -25 / (difficultyFactor/2);
        }
        else {
            point = -1;
        }
    }
    return point;
}


float soruyapici2(float difficultyFactor) {
    setlocale(LC_ALL, "Turkish");
    srand((unsigned int)time(NULL));
    int sayi1, sayi2, sayi3, islem_tipi;
    float sonuc;
    if (difficultyFactor < 5) {
        islem_tipi = 1;
        sayi1 = rand() % 8 + rand() % 5;;
        sayi2 = rand() % 8 + rand() % 5;;
        printf("%d + %d = ", sayi1, sayi2);
        sonuc = sayi1 + sayi2;
    }
    else if (difficultyFactor < 8) {
        islem_tipi = rand() % 2 + 1;

        if (islem_tipi == 1) {
            sayi1 = rand() % 15 + rand() % 8;
            sayi2 = rand() % 15 + rand() % 8;
            printf("%d + %d = ", sayi1, sayi2);
            sonuc = sayi1 + sayi2;
        }
        else if (islem_tipi == 2) {
            sayi1 = rand() % 15 + rand() % 8;
            sayi2 = rand() % 15 + rand() % 8;
            if (sayi1 > sayi2) {
                printf("%d - %d = ", sayi1, sayi2);
                sonuc = sayi1 - sayi2;
            }
            else {
                printf("%d - %d = ", sayi2, sayi1);
                sonuc = sayi2 - sayi1;
            }
        }

    }
    else if (difficultyFactor < 13) {
        islem_tipi = rand() % 3 + 1;

        if (islem_tipi == 1) {
            islem_tipi = rand() % 2 + 1;
            if (islem_tipi == 1) {
                sayi1 = rand() % 21 + rand() % 15;
                sayi2 = rand() % 21 + rand() % 15;
                printf("%d + %d = ", sayi1, sayi2);
                sonuc = sayi1 + sayi2;
            }
            else if (islem_tipi == 2) {
                sayi1 = rand() % 21 + rand() % 15;
                sayi2 = rand() % 21 + rand() % 15;
                sayi3 = rand() % 15 + rand() % 15;
                printf("%d + %d + %d = ", sayi1, sayi2, sayi3);
                sonuc = sayi1 + sayi2 + sayi3;
            }
        }
        else if (islem_tipi == 2) {
            sayi1 = rand() % 21 + rand() % 13;
            sayi2 = rand() % 21 + rand() % 13;
            if (sayi1 > sayi2) {
                printf("%d - %d = ", sayi1, sayi2);
                sonuc = sayi1 - sayi2;
            }
            else {
                printf("%d - %d = ", sayi2, sayi1);
                sonuc = sayi2 - sayi1;
            }
        }
        else if (islem_tipi == 3) {
            sayi1 = rand() % 8 + rand() % 5;
            sayi2 = rand() % 8 + rand() % 5;
                printf("%d * %d = ", sayi1, sayi2);
                sonuc = sayi1 * sayi2;
        }

    }
    else if (difficultyFactor < 21) {
        islem_tipi = rand() % 4 + 1;
        if (islem_tipi == 1) {
            islem_tipi = rand() % 2 + 1;
            if (islem_tipi == 1) {
                sayi1 = rand() % 34 + rand() % 21;
                sayi2 = rand() % 34 + rand() % 21;
                printf("%d + %d = ", sayi1, sayi2);
                sonuc = sayi1 + sayi2;
            }
            else if (islem_tipi == 2) {
                sayi1 = rand() % 34 + rand() % 21;
                sayi2 = rand() % 34 + rand() % 21;
                sayi3 = rand() % 21 + rand() % 15;
                printf("%d + %d + %d = ", sayi1, sayi2,sayi3);
                sonuc = sayi1 + sayi2 + sayi3;
            }

        }
        else if (islem_tipi == 2) {
            sayi1 = rand() % 34 + rand() % 21;
            sayi2 = rand() % 34 + rand() % 21;
            if (sayi1 > sayi2) {
                printf("%d - %d = ", sayi1, sayi2);
                sonuc = sayi1 - sayi2;
            }
            else {
                printf("%d - %d = ", sayi2, sayi1);
                sonuc = sayi2 - sayi1;
            }
        }
        else if (islem_tipi == 3) {
            sayi1 = rand() % 8 + rand() % 8;
            sayi2 = rand() % 8 + rand() % 8;
            printf("%d * %d = ", sayi1, sayi2);
            sonuc = sayi1 * sayi2;
        }
        else if (islem_tipi == 4) {
            int factoriel_sayi_1=1;
            int i = 1;
            sayi1 = rand() % 5 +2;
            sayi2 = rand() % 21 + rand() % 13;
            printf("%d! + %d = ", sayi1, sayi2);
            while (i <= sayi1) {
                factoriel_sayi_1 = i * factoriel_sayi_1;
                i++;
            }
            sonuc = factoriel_sayi_1 + sayi2;
        }
    }
    else if (difficultyFactor >= 21) {

        islem_tipi = rand() % 4 + 1;
        if (islem_tipi == 1) {

            islem_tipi = rand() % 2 + 1;
            if (islem_tipi == 1) {

                sayi1 = rand() % 55 + rand() % 34;
                sayi2 = rand() % 55 + rand() % 34;
                printf("%d + %d = ", sayi1, sayi2);
                sonuc = sayi1 + sayi2;
            }
            else if (islem_tipi == 2) {

                sayi1 = rand() % 55 + rand() % 34;
                sayi2 = rand() % 34 + rand() % 21;
                sayi3 = rand() % 34 + rand() % 21;
                printf("%d + %d + %d = ", sayi1, sayi2, sayi3);
                sonuc = sayi1 + sayi2 + sayi3;
            }

        }
        else if (islem_tipi == 2) {

            sayi1 = rand() % 55 + rand() % 34;
            sayi2 = rand() % 55 + rand() % 34;
            if (sayi1 > sayi2) {
                printf("%d - %d = ", sayi1, sayi2);
                sonuc = sayi1 - sayi2;
            }
            else {
                printf("%d - %d = ", sayi2, sayi1);
                sonuc = sayi2 - sayi1;
            }
        }
        else if (islem_tipi == 3) {
            sayi1 = rand() % 13 + rand() % 8;
            sayi2 = rand() % 13 + rand() % 8;
            printf("%d * %d = ", sayi1, sayi2);
            sonuc = sayi1 * sayi2;
        }
        else if (islem_tipi == 4) {
            int factoriel_sayi_1 = 1;
            int i = 1;
            sayi1 = rand() % 8 + 2;
            sayi2 = rand() % 34 + rand() % 21;
            printf("%d! + %d = ", sayi1, sayi2);
            while (i <= sayi1) {
                factoriel_sayi_1 = i * factoriel_sayi_1;
                i++;
            }
            sonuc = factoriel_sayi_1 + sayi2;
        }
    }
    return sonuc;
}



void mathgametimeon() {
    setlocale(LC_ALL, "Turkish");
    float puanyapici2(float,int,int);
    float soruyapici2(float);
    long zorlukyapici(int,int);
    time_t start,stop;
    srand((unsigned int)time(NULL));
    int level = 1;
    int correct = 0;
    int wrong = 0;
    int streak = 0;
    int wrong_limit = 3;
    float total_point=0;
    
    while (level < 20 && wrong<wrong_limit) {

        printf("Level %d\n", level);
        printf("Yanlış hakkınız : %d\n\n",wrong_limit);

        while (correct < 4 && wrong < wrong_limit) {
                
                
            int alinan_deger;
            float zorluk = zorlukyapici(level, streak);
            float sonuc = soruyapici2(zorluk);
            start=time(NULL);
            scanf("%d", &alinan_deger);
            stop=time(NULL);
            int answer_time=difftime(stop, start);
            if (alinan_deger == sonuc) {
                printf("\nDoğru cevap\n");
                float point = puanyapici2(zorluk, answer_time,1);
                total_point = total_point + point;
                correct++;
                streak++;
            }
            else {
                printf("\nYanlış cevap\n");
                float point = puanyapici2(zorluk,answer_time,0);
                total_point = total_point + point;
                wrong++;
                streak = 0;
            }
            printf("Gecen süre (saniye): %d saniye\n", answer_time);
            printf("\nStreak:%d\n", streak);
            printf("\nDoğru : %d     Yanlış : %d\nPuanınız : %2.f\n\n", correct, wrong,total_point);

        }


        //level artış azalış koşulları
        if (correct == 4) {
            level += 1;
            if (level != 20) {
                printf("Seviye Yükseldiniz!\n\n");
            }
            else {
                printf("Tebrikler! Oyunumuz bitti, puanınız: %.2f", total_point);
            }
        }
        if (wrong == wrong_limit) {
            printf("Kaybettiniz\n");
            printf("Puanınız: %.2f\n", total_point);
        }
        else if (level % 5 == 0) {
            wrong_limit = wrong_limit + 1;
                
        }
        
        correct = 0;
            
    }
}



