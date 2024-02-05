//
//  WordLib.c
//  Arayüz
//
//  Created by Fatih Bayraktar on 21.01.2021.
//

#include "WordLib.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#define randnum(min, max) ((rand() % (int) (((max) + 1) - (min))) + (min))

//3 harfliler
char* wordsthree(int wordnum){
    setlocale(LC_ALL, "Turkish");
    static char word[4];
    char word1[4]="dry";
    char word2[4]="wet";
    char word3[4]="out";
    char word4[4]="set";
    char word5[4]="cow";
    char word6[4]="***";
    if (wordnum==1) {
        printf("nem veya sıvı içermeyen; ıslak veya nemli olmayan\n");
        strcpy(word, word1);
    }
    else if (wordnum==2){
        printf("su veya başka bir sıvı ile kaplı olmak\n");
        strcpy(word, word2);
    }
    else if (wordnum==3){
        printf("belirli bir yerden, özellikle kapalı  bir yerden uzaklaşıyormuş gibi görünme\n");
        strcpy(word, word3);
    }
    else if (wordnum==4){
        printf("(bir şeyi) belirli bir yere veya konuma koymak, yatırmak\n");
        strcpy(word, word4);
    }
    else if (wordnum==5){
        printf("süt veya sığır eti üretmek için tutulan öküz türünden, büyümüş dişi bir hayvan\n");
        strcpy(word, word5);
    }
    else{
        strcpy(word, word6);
    }
    return word;
}




//4 harfliler
char* wordsfour(int wordnum){
    setlocale(LC_ALL, "Turkish");
    static char word[5];
    char word1[5]="cake";
    char word2[5]="lake";
    char word3[5]="late";
    char word4[5]="food";
    char word5[5]="safe";
    char word6[5]="****";
    if (wordnum==1) {
        printf("un, yağ, yumurta, şeker ve diğer malzemelerin karışımından yapılmış, fırınlanmış veya dekore edilmiş yumuşak tatlı yiyecek\n");
        strcpy(word, word1);
    }
    else if (wordnum==2){
        printf("kara ile çevrili geniş bir su alanı\n");
        strcpy(word, word2);
    }
    else if (wordnum==3){
        printf("beklenen, uygun veya olağan zamandan geçtikten sonra bir şeyi gerçekleştirmek\n");
        strcpy(word, word3);
    }
    else if (wordnum==4){
        printf("insanların veya hayvanların yediği veya içtiği veya bitkilerin yaşam ve büyümeyi sürdürmek için emdiği besleyici maddeler\n");
        strcpy(word, word4);
    }
    else if (wordnum==5){
        printf("tehlike veya riskten korunmak veya maruz kalmamak\n");
        strcpy(word, word5);
    }
    else{
        strcpy(word, word6);
    }
    return word;
}


//5 harfliler
char* wordsfive(int wordnum){
    setlocale(LC_ALL, "Turkish");
    static char word[6];
    char word1[6]="avoid";
    char word2[6]="curve";
    char word3[6]="alive";
    char word4[6]="sword";
    char word5[6]="jewel";
    char word6[6]="*****";
    if (wordnum==1) {
        printf("(bir şey) yapılmasını önlemek, engellemek.\n");
        strcpy(word, word1);
    }
    else if (wordnum==2){
        printf("Uzunluğunun bir kısmı veya tamamı boyunca düzlükten yavaş yavaş sapan bir çizgi veya ana hat.Eğri\n");
        strcpy(word, word2);
    }
    else if (wordnum==3){
        printf("bir canlının yaşaması, ölmemesi durumu.\n");
        strcpy(word, word3);
    }
    else if (wordnum==4){
        printf("Uzun, düz veya eğri, ucu sivri, bir veya her iki yüzü keskin, kın içinde bele takılan, çelikten silah.\n");
        strcpy(word, word4);
    }
    else if (wordnum==5){
        printf("değerli bir taş, mücevher\n");
        strcpy(word, word5);
    }
    else{
        strcpy(word, word6);
    }
    return word;
}


//6 harfliler
char* wordssix(int wordnum){
    setlocale(LC_ALL, "Turkish");
    static char word[7];
    char word1[7]="cactus";
    char word2[7]="access";
    char word3[7]="finish";
    char word4[7]="garlic";
    char word5[7]="laptop";
    char word6[7]="******";
    if (wordnum==1) {
        printf("Tipik olarak dikenleri olan, yaprakları olmayan ve parlak renkli çiçekleri olan, kalın etli gövdeli etli bitki\n");
        strcpy(word, word1);
    }
    else if (wordnum==2){
        printf("Bir yere yaklaşma veya bir yere girme yolu veya fırsatı, erişme. \n");
        strcpy(word, word2);
    }
    else if (wordnum==3){
        printf("(Bir görevi veya etkinliği) sona erdirmek; tamamlamak, bitirmek.\n");
        strcpy(word, word3);
    }
    else if (wordnum==4){
        printf("Yemek pişirmede ve bitkisel ilaçlarda tatlandırıcı olarak kullanılan güçlü kokulu keskin tadı olan bir yiyecek, sarımsak.\n");
        strcpy(word, word4);
    }
    else if (wordnum==5){
        printf("Taşınabilir ve seyahat sırasında kullanıma uygun bir bilgisayar.\n");
        strcpy(word, word5);
    }
    else{
        strcpy(word, word6);
    }
    return word;
}

//7 harfliler
char* wordsseven(int wordnum){
    setlocale(LC_ALL, "Turkish");
    static char word[8];
    char word1[8]="vehicle";
    char word2[8]="passion";
    char word3[8]="quality";
    char word4[8]="teacher";
    char word5[8]="vampire";
    char word6[8]="*******";
    if (wordnum==1) {
        printf("Özellikle araba, kamyon veya araba gibi karada insanları veya malları taşımak için kullanılan bir araç.\n");
        strcpy(word, word1);
    }
    else if (wordnum==2){
        printf("Güçlü ve zar zor kontrol edilebilir duygu, tutku.\n");
        strcpy(word, word2);
    }
    else if (wordnum==3){
        printf("Bir ürünün bilinen en iyi özellikleri bünyesinde taşıması durumu, kalite. \n");
        strcpy(word, word3);
    }
    else if (wordnum==4){
        printf("Özellikle bir okulda öğretmenlik yapan bir kişi.\n");
        strcpy(word, word4);
    }
    else if (wordnum==5){
        printf("Kan içmek için uzun köpek dişleri olan mitolojik canlı. \n");
        strcpy(word, word5);
    }
    else{
        strcpy(word, word6);
    }
    return word;
}

//8 harfliler
char* wordseight(int wordnum){
    setlocale(LC_ALL, "Turkish");
    static char word[9];
    char word1[9]="daughter";
    char word2[9]="hospital";
    char word3[9]="language";
    char word4[9]="elephant";
    char word5[9]="mountain";
    char word6[9]="********";
    if (wordnum==1) {
        printf("Kız evlat, çocuk.\n");
        strcpy(word, word1);
    }
    else if (wordnum==2){
        printf("hasta veya yaralılara tıbbi ve cerrahi tedavi ve hemşirelik bakımı sağlayan bir kurum.\n");
        strcpy(word, word2);
    }
    else if (wordnum==3){
        printf("Yapılandırılmış ve geleneksel bir şekilde kullanılan ve konuşma, yazı veya jestle iletilen sözcüklerden oluşan temel insan iletişim yöntemi, dil\n");
        strcpy(word, word3);
    }
    else if (wordnum==4){
        printf("Bir şeyleri toplayabileceği bir gövdesi ( uzun burnu) olan çok büyük gri bir memeli.\n");
        strcpy(word, word4);
    }
    else if (wordnum==5){
        printf("Bir tepeden çok daha büyük olan, üst kısmı karla kaplı olabilecek, dünya yüzeyinin yükseltilmiş kısmı, dağ\n");
        strcpy(word, word5);
    }
    else{
        strcpy(word, word6);
    }
    return word;
}
