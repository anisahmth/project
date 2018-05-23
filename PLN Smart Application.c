#include <stdio.h>   
#include <conio.h>
#include <stdlib.h> 

  
int main()  
{
char choice;
char units; 
char bantuan;
char FAQ;
	int i; 
	int menu;
  
    float total_bill;
	float pemakaian;
	
 awal:
	system("cls"); 
	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|          -----------------------------        |\n");
	printf("\t\t|              PLN SMART APPLICATION            |\n");
	printf("\t\t|          -----------------------------        |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                  DESIGNED BY:                 |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|              M. Iqbal Syarifuddin             |\n");
	printf("\t\t|                 Anisah Muthiah                |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                   Kelompok 15                 |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");
		
	    
	printf(" \n Press any key to continue:");
	
	getch();	
    system("cls");
	printf("\n==========================================================================\n");
	printf("\t\t\tPLN SMART APPLICATION");
	printf("\n==========================================================================\n\n");
 	printf("\n[a] Perhitungan Biaya Pemakaian");
 	printf("\n--------------------------------------------------------------------------");
 	printf("\n[b] Perhitungan Biaya Pemasangan Sambungan Rumah Tangga Baru (DKI Jakarta)");
 	printf("\n--------------------------------------------------------------------------");
 	printf("\n[c] Bantuan");
 	printf("\n--------------------------------------------------------------------------");
 	printf("\n[d] Exit");
 	printf("\n--------------------------------------------------------------------------");
 	printf("\n\n\nTentukan pilihan anda:");
 awal2 :
 scanf("%s",&choice);
   
 switch (choice)
 {
     case 'a':
	 system("cls"); 
     printf("\n\n\t\t\t\t   SELAMAT DATANG \n\n");  
  
    printf("\t\t\tPERHITUNGAN PEMAKAIAN LISTRIK RUMAHAN \n\n");   	
 	for(i=0;i<78;i++)
		printf("=");
    printf("\n\t[1] R-1/450VA .............................. 	=Rp. 415/kWh        |\n\n");  
  
    printf("\t[2] R-1/900VA .............................. 	=Rp. 568/kWh        |\n\n");  
  
    printf("\t[3] R-1/900VA RTM .......................... 	=Rp. 1352/kWh       |\n\n");  
    
    printf("\t[4] R-1/1300VA ............................. 	=Rp. 1467.28/kWh    |\n\n");  
  
    printf("\t[5] R-1/2200VA ............................. 	=Rp. 1467.28/kWh    |\n\n");  
  
    printf("\t[6] R-1/3500VA, 4400VA, 55000VA ............ 	=Rp. 1467.28/kWh    |\n\n");  
  
    printf("\t[7] R-1/6600VA ke atas ..................... 	=Rp. 1467.28/kWh    |\n\n");  
	for(i=0;i<78;i++)
		printf("=");  
   
    printf("\nMasukkan golongan tarif atau daya : \n\n");  
    scanf("%s", & units); 
    
    switch(units)
	{
	case '1':
	{
    printf("\nMasukkan total pemakaian (kWh) : ");
    scanf("%f", & pemakaian);
	total_bill = pemakaian * 415;  
    printf("Total tagihan listrik anda adalah Rp. %f\n", total_bill) ;
    getch();
	}
	break;
    case '2':  
    {
	printf("\nMasukkan total pemakaian (kWh) : ");
    scanf("%f", & pemakaian);
	total_bill =  pemakaian * 568;  
    printf("Total tagihan listrik anda adalah Rp. %f\n", total_bill) ;
    getch();
	}
	break;
    case '3':  
  	{
  	printf("\nMasukkan total pemakaian (kWh) : ");
    scanf("%f", & pemakaian);
    total_bill = pemakaian*1352;  
    printf("Total tagihan listrik anda adalah Rp. %f\n", total_bill) ;
    getch();
	}
	break;
    case '4':  
  	{
  	printf("\nMasukkan total pemakaian (kWh) : ");
    scanf("%f", & pemakaian);
    total_bill = pemakaian * 1467.28;  
    printf("Total tagihan listrik anda adalah Rp. %f\n", total_bill) ;
    getch();
	}
	break;
    case '5':  
	{ 
	printf("\nMasukkan total pemakaian (kWh) : ");
    scanf("%f", & pemakaian);
    total_bill = pemakaian * 1467.28;  
    printf("Total tagihan listrik anda adalah Rp. %f\n", total_bill) ;
    getch();
	}
	break;
    case '6':  
 	{ 
 	printf("\nMasukkan total pemakaian (kWh) : ");
    scanf("%f", & pemakaian);
    total_bill = pemakaian * 1467.28;  
    printf("Total tagihan listrik anda adalah Rp. %f\n", total_bill) ;
    getch();
	}
	break;
    case '7':
    { 
 	printf("\nMasukkan total pemakaian (kWh) : ");
    scanf("%f", & pemakaian);
    total_bill = pemakaian * 1467.28;  
    printf("Total tagihan listrik anda adalah Rp. %f\n", total_bill) ;
    getch();
	}
	break;
	default:
    {
	printf("Pilihan yang anda masukan salah\n");  
	printf("Klik Enter untuk melanjutkan:");
    getch();
	}
	break;
	}
     
	
	goto awal;
          break;
    case'b':
    	{
char pilihan;
char token;
int daya;
int jenisdaya;
int token_perdana;
int materai;
int totalbiaya;

	sambungan:
	system("cls");
	printf("\n==============================================================================\n\n");
	printf("\tPERHITUNGAN PEMASANGAN SAMBUNGAN RUMAH TANGGA BARU DKI JAKARTA \n\n");
	printf("==============================================================================\n\n\n");
	printf("Pilihan Jenis Daya :");
	printf("\n--------------------------------------------------------------------------\n");
	printf("[a] 450");
	printf("\n--------------------------------------------------------------------------\n");
	printf("[b] 900");
	printf("\n--------------------------------------------------------------------------\n");
	printf("[c] 1300");
	printf("\n--------------------------------------------------------------------------\n");
	printf("[d] 2200");
	printf("\n--------------------------------------------------------------------------\n");
	printf("[e] 3500");
	printf("\n--------------------------------------------------------------------------\n");
	printf("\nTentukan pilihan:");
	scanf("%s", &pilihan);
	
	switch(pilihan)
	{
		case 'a':
			daya=421000;
			materai=3000;
			jenisdaya=450;
			break;
		case 'b':
			daya=843000;
			materai=3000;
			jenisdaya=900;
			break;
		case 'c':
			daya=1218000;
			materai:6000;
			jenisdaya=1300;
			break;
		case 'd':
			daya=2062000;
			materai=6000;
			jenisdaya=2200;
			break;
		case 'e':
			daya=3391500;
			materai=6000;
			jenisdaya=3500;
			break;
		default:
			printf("\nPilihan yang anda masukan salah");
			getch();
			goto sambungan;
			break;
	}
	token:
	system("cls");
	printf("\n==========================================================================\n\n");
	printf("\tPERHITUNGAN PEMASANGAN SAMBUNGAN RUMAH TANGGA BARU DKI JAKARTA\n");
	printf("\n==========================================================================\n\n\n");
	printf("Pilihan Rp Beli Token Perdana:");
	printf("\n--------------------------------------------------------------------------\n");
	printf("[a] 5000");
	printf("\n--------------------------------------------------------------------------\n");
	printf("[b] 20000");
	printf("\n--------------------------------------------------------------------------\n");
	printf("[c] 40000");
	printf("\n--------------------------------------------------------------------------\n");
	printf("[d] 50000");
	printf("\n--------------------------------------------------------------------------\n");
	printf("[e] 100000");
	printf("\n--------------------------------------------------------------------------\n");
	printf("\nTentukan pilihan :");
	scanf("%s", &token);
	switch(token)
	{
		case 'a':
			token_perdana=5000;
			break;
		case 'b':
			token_perdana=20000;
			break;
		case 'c':
			token_perdana=40000;
			break;
		case 'd':
			token_perdana=50000;
			break;
		case'e':
			token_perdana=100000;
			break;
		default:
			printf("\nPilihan yang anda masukan salah");
			getch();
			goto token;
			break;
	}
	system("cls");
	printf("================\tSIMULASI PASANG BARU\t==============\n\n");
	printf("Peruntukan\t\t\t:\tRUMAH TANGGA\n");
	printf("Jenis Daya\t\t\t:\t%d", jenisdaya);
	printf("\n\nDetil Biaya:\n\n");
	printf("\na. Rupiah Biaya Penyambungan:\t\tRp\t%d", daya);
	printf("\nb. Rupiah Beli Token Perdana:\t\tRp\t%d", token_perdana);
	printf("\nc. Rupiah Materai:\t\t\tRp\t%d", materai);
	totalbiaya=(daya+token_perdana+materai);
	printf("\n\n\nTotal Biaya yang Harus Dibayar:\t\tRp\t%d\n", totalbiaya);
	printf("==============================================================");
	getch();
	goto awal;
}
	 break;
	 
    case 'c' :
	 bantuan :
	 system("cls");
	 printf("\t--------------------------------------------\n");
	 printf("\t\tSelamat Datang di Menu Bantuan\n");
	 printf("\t--------------------------------------------\n");
     printf("\n\nSilahkan pilih bantuan yang anda inginkan\n");
     printf("\na. Instruksi penggunaan aplikasi");
     printf("\nb. Frequently Asked Questions");
     printf("\nc. Call center");
     printf("\nd. Kembali ke menu awal");
     printf("\n\nMasukkan pilihan anda:");
     
     scanf("%s", &bantuan);
	 
	 	switch(bantuan)
	{
		case 'a':
		 system ("cls");
		 printf("\t--------------------------------------------\n");
		 printf("\t\tInstruksi Penggunan Aplikasi\n");
		 printf("\t--------------------------------------------\n\n");
     	 printf("1. Tekan tombol apa saja pada home untuk melanjutkan ke menu berikutnya\n");
     	 printf("2. Pilih jenis layanan yang diinginkan:\n");
     	 printf("\t- Pilih opsi perhitungan biaya pemakaian\n");
     	 printf("\t\ta. Pilih golongan tarif atau daya\n");
     	 printf("\t\tb. Masukkan total pemakaian (kWh)\n");
     	 printf("\t\tc. Pada aplikasi akan muncul total tagihan listrik\n");
     	 printf("\t- Pilih opsi pemasangan sambungan baru\n");
     	 printf("\t\ta. Pilih jenis daya\n");
     	 printf("\t\tb. Total biaya pemasangan akan ditampilkan di layar\n");
     	 printf("\n\nTekan tombol apa saja untuk kembali ke menu bantuan \n\n");
     	 getch();
     	 goto bantuan;
		 break;
	 	
	 	case 'b':
     	
     	FAQ : 
     	
    	system("cls");
     	printf("\t--------------------------------------------\n");
	 	printf("\t\tFrequently Asked Questions (FAQ)\n");
	 	printf("\t--------------------------------------------\n\n");
	 	printf("1. Bagaimana cara menghitung kWh?\n");
	 	printf("2. Bagaimana cara menghitung total tagihan listrik secara manual?\n");
	 	printf("3. Tentang Kami\n");
     	printf("4. Kembali ke menu bantuan utama\n");
     	printf("\n\nMasukkan pilihan anda:");
     	scanf("%s" , &FAQ);
     	
     	switch(FAQ)
     	
     	{
     		case '1':
     		 system("cls");
     		 printf("\t====================================================\n");
     		 printf("\t\t\tCara Menghitung kWh\n");
     		 printf("\t====================================================\n\n");
     		 printf("1. Ketahui jumlah daya terlebih dahulu\n");
     		 printf("2. Ketahui durasi penggunaan (dalam jam)\n");
     		 printf("3. Kalikan antara jumlah daya dengan durasi waktu dalam jam\n");
     		 printf("4. Hasilnya merupakan total kWh\n");
     		 printf("\n\n\t Tekan tombol apa saja untuk kembali ke menu FAQ \n\n");
     		 getch();
     		 goto FAQ;
     		 break;
			
			case'2':
		 	 system("cls");
		 	 printf("\t====================================================\n");
		 	 printf("\tCara Mengitung Total Tagihan Listrik Secara Manual\n");
		 	 printf("\t====================================================\n");
		 	 printf("1. Ketahui jumlah kWh\n");
		 	 printf("2. Ketahui klasifikasi tarif atau golongan\n");
		 	 printf("3. Kalikan antara jumlah kWh dengan klasifikasi tarif atau golongan\n");
		 	 printf("4. Hasilnya merupakan total tagihan listrik\n");
		 	 printf("\n\n\t Tekan tombol apa saja untuk kembali ke menu FAQ \n\n");
     		 getch();
     		 goto FAQ;
     		 break;
     		
     		case '3':
     		 system("cls");
     		 printf("\t\t=================================================\n");
			 printf("\t\t|                                               |\n");
			 printf("\t\t|          -----------------------------        |\n");
			 printf("\t\t|              PLN SMART APPLICATION            |\n");
			 printf("\t\t|          -----------------------------        |\n");
			 printf("\t\t|                                               |\n");
			 printf("\t\t=================================================\n\n\n");
			 printf("\n\n\n");
			 printf("PLN SMART APPLICATION adalah sebuah aplikasi yang memberikan layanan");
			 printf("\nkemudahan kepada konsumen untuk menghitung secara mandiri total biaya\n");
			 printf("pemakaian dan biaya sambungan baru pada suatu rumah di daerah DKI Jakarta.");
			 printf("\n\n\n================================================================================\n");
			 printf("\n\n\n\n\n\t\t Tekan tombol apa saja untuk kembali ke menu FAQ" );
			 getch();
			 goto FAQ;
			 break;
			
     		case '4':
     		 goto bantuan;
     		 break;
     		
     		default:
			 printf("\nPilihan yang anda masukan salah. Tekan enter untuk masukan ulang");
			 getch();
			 goto FAQ;
			 break;
		}
		
	 	case 'c':
	 	 system("cls");
	 	 printf("\t=====================================================\n");
	 	 printf("\t Selamat Datang di Call Center PLN Smart Application\n");
	 	 printf("\t=====================================================\n\n\n");
	 	 printf("Kontak kami pada beberapa pilihan berikut:\n\n");
	 	 printf("1. Telepon = 123\n");
	 	 printf("2. Twitter = @pln_123\n");
	 	 printf("3. Facebook = PLN 123\n");
	 	 printf("4. Email = pln123@pln.co.id\n");
	 	 printf("\n\n\t Tekan tombol apa saja untuk kembali ke menu bantuan \n\n");
     	 getch();
     	 goto bantuan;
     	 break;
     	
     	case 'd':
     	 goto awal;
     	 break;
     	
     	default:
     	 printf("\nPilihan yang anda masukan salah. Tekan enter untuk masukan ulang");
		 getch();
		 goto bantuan;
		 break;
	 }
     	
    case 'd':
     system("cls");
     printf("\n\n\n\n\n");
     printf("\t===========================================================\n");
	 printf("\t\tTerima kasih telah mengunjungi aplikasi kami\n");
	 printf("\t===========================================================\n\n\n");
     break;
     	
    default: {
	 printf("Pilihan salah. Tekan enter untuk masukan ulang\n");
	 getch();
	 goto awal;
	 break;
	 }
 } 

 }
  

