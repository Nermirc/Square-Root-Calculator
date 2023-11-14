#include <stdio.h>
#include <stdlib.h>



    double karekokbul(double N)
    {
        double karekok;
        int i;
        if(N>0.0)
        {
            karekok=N/2;
            for(i=0;i<50;i++)
            {
                karekok=((karekok*karekok)+N)/(2*karekok);
            }
            return karekok;
        }
        else if(N==0)
        {
            return 0;
        }
        else
        {
            printf("Lutfen gecerli bir deger giriniz.\n");
        }
    }
int main()
{
    /*Kullanici tarafindan girilen bir pozitif tamsayinin karekokunun
    bulunmasýný saglayan(sqrt kullanmadan) bir C programi yaziniz.
    */
    /*
    K=A/2
    Karekok=Toplam 1'den 50'ye kadar K^2+A/2K */
    double sayi;//Sayi her sey olabilir karekokunu aldigimiz icin.
    printf("Karekoku bulunacak sayi\n");
    scanf("%lf",&sayi);
    printf("%lf karekoku = %.5lf \n",sayi,karekokbul(sayi));
}
