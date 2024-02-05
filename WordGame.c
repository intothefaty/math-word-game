//
//  WordGame.c
//  Arayüz
//
//  Created by Fatih Bayraktar on 21.01.2021.
//

#include "WordGame.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#define randnum(min, max) ((rand() % (int) (((max) + 1) - (min))) + (min))

int wordpoint=0;

void soru (int harf){
    setlocale(LC_ALL, "Turkish");
    srand( (unsigned int) time(NULL) );
    //kelimelerin kütüphane tanımlamaları
    char* wordsthree(int);
    char* wordsfive(int);
    char* wordsfour(int);
    char* wordsfive(int);
    char* wordssix(int);
    char* wordsseven(int);
    char* wordseight(int);
    
    int karakter=harf+1;
    int choise; // cevap vermek için veya harf almak için istenen girdi
    int repeat,repeatgive;
    /* Repeat: yanlış tuşlama yapılırsa veya harf alındıktan sonra tekrardan soruyu vermek için
        RepeatGive : Eğer harf alındığında önceki verdiği harflerden biri geldiyse tekrar harf vermek için döngüyü devam ettirir
     */
    int i;
    char answer[karakter]; // Kullanıcının cevabı
    char question[karakter]; //random sayının seçtiği sorunun kelimesi
    i=1; //her harf sayısındaki sorulardan 2şer tane sormak için döngü sayacı
    int dontrepeatsame=0; //randnumdan gelen sayı ile sorular gelirken aynı soru gelmesin diye
    
    while (i<=2) {   //her sayıdaki harften 2şer soru
        char star3[4]="***";         //harf alındığında değişecek olan ve en başta görünecek olan
        char star4[5]="****";        //birnevi kapalı cevap
        char star5[6]="*****";
        char star6[7]="******";
        char star7[8]="*******";
        char star8[9]="********";
        char star[karakter];
        if (harf==3) {
            strcpy(star, star3); //fonksiyonda tek star kullanmak için seçilen
        }                        //star3 star4 gibi önceden tanımlıları star stringine eşitler
        else if (harf==4){
            strcpy(star, star4);
        }
        else if (harf==5){
            strcpy(star, star5);
        }
        else if (harf==6){
            strcpy(star, star6);
        }
        else if (harf==7){
            strcpy(star, star7);
        }
        else if (harf==8){
            strcpy(star, star8);
        }
        
        int chooseword=randnum(1, 5);        //önceden 0 tanımladığımız dontrepeatsame integerının
        while (dontrepeatsame==chooseword) { //chooseworde eşit olması durumunda aynı soru
            chooseword=randnum(1, 5);        //gelmemesi için dontrepeatsame ile chooseword
        }                                    //eşitlenir eğer aynıysa while döngüsünde bir kez daha
        dontrepeatsame=chooseword;           //belirlenir.farklı olduğunda çıkabilir
        
        
        
        if (harf==3) {
            strcpy(question, wordsthree(chooseword)); //sorunun anlamını fonksiyon yazdırır
        }                                             //ardından cevabı question değişkenine atar
        else if (harf==4){
            strcpy(question, wordsfour(chooseword));
        }
        else if (harf==5){
            strcpy(question, wordsfive(chooseword));
        }
        else if (harf==6){
            strcpy(question, wordssix(chooseword));
        }
        else if (harf==7){
            strcpy(question, wordsseven(chooseword));
        }
        else if (harf==8){
            strcpy(question, wordseight(chooseword));
        }
        
        do {
            repeat=0;
            printf("%s\n",star);
            printf("cevaplamak için 1 harf almak için 2 giriniz : ");
            scanf("%d",&choise); //kullanıcıdan cevaplamak ya da harf almak için girdi ister
            printf("\n");
            if (choise==1) {
                scanf("%s",answer); //kullanıcıdan alınacak cevap girdisi
                if (strcmp(answer, question)==0) { //girdi cevabımıza eşit ise
                    printf("doğru\n");
                    int loop=0;
                    while (loop<karakter) {
                        /*karakter sayısı kadar döngü döndürür
                        harf sayısından bir fazla olmasının nedeni ise
                         C dilinde 3 harfli bi stringin sonunda bitiş karakteri bulunur
                         */
                        if (star[loop]==answer[loop]) {
                            /*
                             harf aldığımızda karakterlerin bazıları aynı olacağı için
                             star stringinde açılan her karakter için puan eksiltmesi yapılır
                             böylece alınan harfler için de artı puan alınmaz
                             */
                            wordpoint -=1;//    \0
                        }
                        loop++;
                    }
                    wordpoint += karakter;
                    /*
                     karakter sayısı kadar artırmamızın nedeni önceki döngüde bitiş karakterimiz
                     ne olursa olsun aynı olacağı için bir fazladan azaltacak puanımızı
                     bu nedenle bir fazladan da puan vererek dengelendi
                     */
                    
                }
                else{
                    /*
                     yukarıdaki gibi bitiş karakteri aynı olmasından dolayı yanlış yapıldığında
                     açılan harfler yanlış olarak kabul edilmez bunun sonucunda yine burada
                     yanlıştaki - puan bir fazla olması için karakter değişkeni kullanılmıştır
                     */
                    printf("yanlış\n");
                    printf("doğru cevap : %s\n",question);
                    int loop=0;
                    while (loop<karakter) {
                        if (star[loop]==answer[loop]) {
                            wordpoint +=1;
                        }
                        loop++;
                    }
                    wordpoint -= karakter;
                }
            }
            
            //harf alma
            else if (choise==2){
                do {
                    repeatgive=0;
                    int open=randnum(0, harf-1);
                    /*
                     eğer açılacak olan harf aynı olursa kullanıcı birden fazla harf aldığında
                     randnum aynı sayıyı verirse hiçbir harf açılmaz bundan dolayı
                     eğer dontrepeatopen open değişkenine eşitse tekrardan open değişkenine
                     random bir sayı daha atanır ilk harf alımında hata vermemesinin sebebi
                     while döngüsüne girdikten sonra dontrepeatopen ile open değişkeninin eşitlenmesi
                     */
                    if (question[open]==star[open]) {
                        repeatgive=1;
                    }
                    else{
                        star[open]=question[open];
                        repeat=1;
                    }
                    //kelimenin tüm harfleri alınırsa
                    if (strcmp(star, question)==0) {
                        repeat=0;
                        printf("Doğru cevap : %s\n",question);
                    }
                } while (repeatgive==1);
            }
            
            else {
                printf("yanlış tuşlama yaptınız\n");
                repeat=1;
            }
            
        } while (repeat==1);
        
        
        
        printf("puanınız : %d\n\n",wordpoint);
        i++;
    }
    
    
    
    
    
    
    //8 harfli 2. soru sorulmuşsa global tanımlanmış olan puanı sıfırla
    if (harf==8 && i==3) {
        
        wordpoint=0;
    }
}
