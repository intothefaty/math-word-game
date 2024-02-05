//
//  main.c
//  Arayüz
//
//  Created by Fatih Bayraktar on 24.12.2020.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#define randnum(min, max) ((rand() % (int) (((max) + 1) - (min))) + (min))


int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Turkish");
    int gamepref;
    printf("Merhaba, (oyunadi)'na hoşgeldiniz.\n\n");
    
    int repeat,repeatword,repeatmath,quit;
    /*
        repeat sayımız döngüde ilk menüde istediğimiz sayı tuşlanmazsa bize tekrar aynı menüyü getiriyor
     Aynı zamanda eğer kullanıcı oyunlardan birine girdiyse tekrardan ilk menüye dönmek istiyorsa yine bu
     değişkeni kullanarak üst menüye geçiş sağlayabiliyoruz
        repeatword kelime oyunu menüsünde yanlış tuşlama olursa bize tekrar kelime oyunu menüsünü veren değişken
        repeatmath kelime oyunundaki repeatword ile aynı işlevde
        quit bize bilgi menüsünde kullanıcıyı ekranda herhangi bir sayı girene kadar bekletmemize ve
     bir sonraki menünün hemen gelmesini engellemekte kullanılan değişkenimiz
    */
    do {
        repeat=0;
        printf("Oyunumuz Kelime oyunu ve Matematik oyunu olmak üzere ikiye ayrılıyor\n");
        printf("Kelime Oyununu Seçmek için (1) tuşlayınız.\nMatematik oyununu seçmek için (2) tuşlayınız.\n");
        printf("Oyundan çıkmak için (99) yuşlayınız\n");
        printf("Tuşladıktan sonra enter tuşuna basınız : ");
        scanf("%d",&gamepref);
        
        //Kelime Oyunu
        if (gamepref==1) {
            int wordgamemode;
            do {
                repeatword=0;
                printf("Kelime Oyunu\n\n");
                printf("Kelime oyununa başlamak için (1) tuşlayınız.\n");
                printf("Kelime oyunu hakkında bilgi almak için (2) tuşlayınız.\n");
                printf("Bir üst menüye dönmek için (9) tuşlayınız\n");
                printf("Tuşladıktan sonra enter tuşuna basınız : ");
                scanf("%d",&wordgamemode);
                //Kelime oyununa giriş
                if (wordgamemode==1) {
                    printf("\n");
                    void soru (int);
                    
                    int i;
                    for (i = 3; i<=8; i++) {
                        soru(i);
                    }
                    
                    printf("\n");
                    repeatword=1;
                }
                //Kelime oyunu hakkında bilgi
                else if (wordgamemode==2){
                    printf("\nKelime oyunumuz sizlere Türkçe bir şekilde kelimelerin anlamlarını verir.\nTürkçe anlamların karşılığı olarak sizden bu anlamı karşılayan ingilizce kelimeyi ister.\nPuan sistemi doğru bildiğiniz harf kadar puan alırsınız, yanlış bildiğiniz harf kadar puanınız silinir.\nHer kelime için istediğiniz kadar harf alabilirsiniz fakat unutmayın bildiğiniz harf kadar puan gelecektir.\n");
                    printf("Çıkmak için herhangi bir sayı tuşlayınız...\n");
                    scanf("%d",&quit);
                    repeatword=1;
                }
                //üst menü
                else if (wordgamemode==9){
                    printf("\n");
                    repeat=1;
                }
                //hatalı tuşlama
                else{
                    printf("Yanlış tuşlama yaptınız!! Lütfen tekrar tuşlayınız.\n\n");
                    repeatword=1;
                }
            } while (repeatword==1);
        }
        
        
        //Matematik oyunu
        else if (gamepref==2){
            int mathgamemode;
            do {
                repeatmath=0;
                printf("Matematik Oyunu\n\nBu oyunda zamanlı ve zamansız modlar bulunmakta.\n");
                printf("Zamanlı oyun modunu seçmek için (1) tuşlayınız.\nZamansız oyun modunu seçmek için (2) tuşlayınız\n");
                printf("Oyun modları hakkında bilgi almak için (3) tuşlayınız\n");
                printf("Bir üst menüye dönmek için (9) tuşlayınız\n");
                printf("Tuşladıktan sonra enter tuşuna basınız : ");
                scanf("%d",&mathgamemode);
                
                //Zamanlı Oyun
                if (mathgamemode==1) {
                    int mathgametimeon(void);
                    mathgametimeon();
                    repeatmath=1;
                }
                
                //Zamansız Oyun
                else if (mathgamemode==2){
                    void mathgame(void);
                    mathgame();
                    repeatmath=1;
                }
                
                //Modlar hakkında bilgi
                else if (mathgamemode==3){
                    
                    printf("\nMatematik Oyunu'nda faktoriyel, toplama, çıkarma ve çarpma gibi işlemler sorulur.\nSorularda bir kazanma serisi yakalamışsanız bu kazanma serinize göre zorluk artacaktır. Fakat zor soruların puanları daha yüksektir.\nZamanlı Matematik Oyunu'nda soruları ne kadar sürede yaptığınız da önemlidir.\nEğer soruyu 1 saniye veya altında çözmüşseniz puanınız 10 katına, 1 saniye ile 2 saniye aralığında çözmüşseniz 5 katına, 2 saniye ile 3 saniye arasında çözmüşseniz 2 katına çıkar.\n\n");//modlar için bilgi
                    printf("Çıkmak için herhangi bir sayı tuşlayınız...\n");
                    scanf("%d",&quit);
                    repeatmath=1;
                }
                
                //üst menü
                else if (mathgamemode==9){
                    printf("\n");
                    repeat=1;
                }
                
                //hatalı tuşlama
                else{
                    printf("Yanlış tuşlama yaptınız!! Lütfen tekrar tuşlayınız.\n\n");
                    repeatmath=1;
                }
                
                
            } while (repeatmath==1);
            
            
        }
        else if (gamepref==99){
            //oyunu bitirir
        }
        //hatalı tuşlama
        else {
            printf("Yanlış tuşlama yaptınız!! Lütfen tekrar tuşlayınız.,\n\n");
            repeat=1;
        }
    } while (repeat==1);
    return 0;
}








