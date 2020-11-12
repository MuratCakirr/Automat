170202007 Kutay ERTEN
160202054 Murat ÇAKIR

Proje Baþlýðý:	En Az Sayýda Para Verme Problemi


Projeyi çalýþtýrmak için gerekli program:
Energia
Proje için gerekli kart:
ARM® Cortex®-M4F Based MCU TM4C123G LaunchPad™ Evaluation Kit

Projeyi çalýþtýrmak için uygulanacak adýmlar:

1)Ýlk olarak; bu kodlarýn çalýþtýrýlabilmesi için bilgisayarýnýzda Energia IDE'sinin bulunmasý gerekmektedir.

2)Eðer Energia yazýlýmýný kullanacaksanýz ilk olarak https://energia.nu/download/ giriniz.Bu site üzerinden
kurulum dosyasýný edininiz.Edindiðiniz bu kurulum dosyasýný kullanarak Energia'yý bilgisayarýnýza kurunuz.

3)Programý çalýþtýrabilmek için Stellaris Arayüzünün yüklü olmasý gerekmektedir.http://www.ti.com/tool/STELLARIS_ICDI_DRIVERS bu baðlantý ile inidirebilirsiniz.
Ayný zamanda LiquidCrystal kütüphanesininde Energia da kurulu olmasý gerekmektedir.Kütüphaneyi kurmak için önce kütüphane doyalarýný indiriyoruz ve rardan çýkartýyoruz.
Rardan çýkardýðýmýz .c ve .h uzantýlý dosyalarý zip olarak sýkýþtýrýyoruz.Bu iþlemi tamamladýktan sonra Energia da Sketch->Include Library->Add .zip library kýsmýndan oluþturduðumuz
zip dosyasýný seçiyoruz.
 

4)Ýlk olarak Energia idesini çalýþtýrýn.
5)RAR dosyasýný herhangibir yere çýkartýn.
6)Ardýndan, "File" sekmesi üzerinden "Open" tuþuna týklayýn. 
7)Bu ekran üzerinden projeyi çýkardýðýnýz yeri seçip çýkarttýðýnýz klasörün içindeki sketch_apr07a.ino dosyasýný seçiniz "OK" tuþuna basarak bu ekraný bitiriniz.
8)Tiva port baðlantýlarýnýzý kontrol edin.Kodun üst kýsmýnda pin numaralarý verilmiþtir.
9)Portlarý baðladýktan sonra Tiva yý bilgisayara baðlayýn.Anahtarý açýn.
10)Ardýndan sol üst köþedeki sað ok iþareti þeklindeki upload tuþuna basýnýz.
11)Tiva ya HOSGELDINIZ yazýsý geldiðinde sað üst köþeden serial monitorü açarak seri port baðlantýsýný kontrol edebilirsiniz.

Programýn test edildiði iþletim sistemleri:

-Bu program Windows 10 iþletim sistemi üzerinde test edilmiþ olup,herhangi bir problemle karþýlaþýlmamýþtýr.

Programýn yazýldýðý ortam:

-Bu program; Windows 10 üzerinde, Energia kullanýlarak yazýlmýþtýr.
