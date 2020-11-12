# Automat
Projeyi çalıştırmak için gerekli program:
Energia
Proje için gerekli kart:
ARM® Cortex®-M4F Based MCU TM4C123G LaunchPad™ Evaluation Kit

Projeyi çalıştırmak için uygulanacak adımlar:

1)İlk olarak; bu kodların çalıştırılabilmesi için bilgisayarınızda Energia IDE'sinin bulunması gerekmektedir.

2)Eğer Energia yazılımını kullanacaksanız ilk olarak https://energia.nu/download/ giriniz.Bu site üzerinden
kurulum dosyasını edininiz.Edindiğiniz bu kurulum dosyasını kullanarak Energia'yı bilgisayarınıza kurunuz.

3)Programı çalıştırabilmek için Stellaris Arayüzünün yüklü olması gerekmektedir.http://www.ti.com/tool/STELLARIS_ICDI_DRIVERS bu bağlantı ile inidirebilirsiniz.
Aynı zamanda LiquidCrystal kütüphanesininde Energia da kurulu olması gerekmektedir.Kütüphaneyi kurmak için önce kütüphane doyalarını indiriyoruz ve rardan çıkartıyoruz.
Rardan çıkardığımız .c ve .h uzantılı dosyaları zip olarak sıkıştırıyoruz.Bu işlemi tamamladıktan sonra Energia da Sketch->Include Library->Add .zip library kısmından oluşturduğumuz
zip dosyasını seçiyoruz.
 

4)İlk olarak Energia idesini çalıştırın.
5)RAR dosyasını herhangibir yere çıkartın.
6)Ardından, "File" sekmesi üzerinden "Open" tuşuna tıklayın. 
7)Bu ekran üzerinden projeyi çıkardığınız yeri seçip çıkarttığınız klasörün içindeki sketch_apr07a.ino dosyasını seçiniz "OK" tuşuna basarak bu ekranı bitiriniz.
8)Tiva port bağlantılarınızı kontrol edin.Kodun üst kısmında pin numaraları verilmiştir.
9)Portları bağladıktan sonra Tiva yı bilgisayara bağlayın.Anahtarı açın.
10)Ardından sol üst köşedeki sağ ok işareti şeklindeki upload tuşuna basınız.
11)Tiva ya HOSGELDINIZ yazısı geldiğinde sağ üst köşeden serial monitorü açarak seri port bağlantısını kontrol edebilirsiniz.

Programın test edildiği işletim sistemleri:

-Bu program Windows 10 işletim sistemi üzerinde test edilmiş olup,herhangi bir problemle karşılaşılmamıştır.

Programın yazıldığı ortam:

-Bu program; Windows 10 üzerinde, Energia kullanılarak yazılmıştır.
