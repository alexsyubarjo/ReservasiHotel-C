#include <iostream>
using namespace std;

int main ()
{
                char resepsionis[30], customer[30], alamat[50];
                int kamar, no_kamar, harga_kamar, ranjang;
                int total, lama, um, kurang;
                float diskon;
                string jwb, id_customer, id_resepsionis, jk, hp, checkin, checkout, fixkam ;
            	const int promo = 200000;
                int array [2] = {400000, 450000,};
                
                awal:
                cout<<endl;
                cout<<"\t\t             ==========================================================          "<<endl;
                cout<<"\t\t     =======================================================================     "<<endl;
                cout<<"\t\tWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW"<<endl<<endl;
                cout<<"\t\t                     SELAMAT DATANG DI HOTEL Puyer Bintang TUJUH                      "<<endl;
                cout<<"\t\t                      JL. Yang Datar, no 69 telp 083122444432                       "<<endl;
                cout<<"\t\t                   Desa Sinduharjo Kab.Sleman Kec.nganglik, Yogyakarta    "<<endl<<endl;
                cout<<"\t\tWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW"<<endl;
                cout<<"\t\t     =======================================================================     "<<endl;
 				cout<<"\t\t             ==========================================================          "<<endl<<endl<<endl<<endl;
               
                cout<<"\t\tSilahkan Isi Form Berikut ini"<<endl;
				cout<<"\t\t================================================================================="<<endl;
                cout<<"\t\tNama Resepsionis Yang Melayani : "; cin>>resepsionis;
                cout<<"\t\tID Resepsionis                 : "; cin>>id_resepsionis;
                cout<<"\t\tNama Pemesan                   : "; cin>>customer;
                cout<<"\t\tID Pemesan                     : "; cin>>id_customer;
                cout<<"\t\tJenis Kelamin [L/P]            : "; cin>>jk;
                cout<<"\t\tNomor Telepon/HP               : "; cin>>hp;
                cout<<"\t\tAlamat                         : "; cin>>alamat;
				cout<<"\t\t================================================================================="<<endl<<endl;
               	
               	cout<<"\t\t                               ***PROMO AWAL TAHUN***"<<endl;
               	cout<<"\t\t   TIPE STANDART RANJANG SINGLE,DOUBLE HARGA TETAP RP. 200.000"<<endl;
				cout<<"\t\t================================================================================="<<endl<<endl;
               	
                cout<<"\t\tSilahkan Pilih Tipe Kamar Yang Anda Inginkan"<<endl;
				cout<<"\t\t================================================================================="<<endl;
                cout<<"\t\t1. Standart	  "<<endl;
                cout<<"\t\t2. Premium	  "<<endl;
                cout<<"\t\t3. Deluxe	  "<<endl;
                cout<<"\t\t4. Suite       "<<endl;
                cout<<"\t\t5. Presidential"<<endl;
				cout<<"\t\t================================================================================="<<endl;
                cout<<"\t\tMasukan Pilihan : ";cin>>kamar;
            	cout<<endl<<endl;
            	
                cout<<"\t\tSilahkan Pilih Tipe Bed Yang Anda Inginkan"<<endl;
				cout<<"\t\t================================================================================="<<endl;
                cout<<"\t\t1. Single"<<endl;
                cout<<"\t\t2. Double"<<endl;
				cout<<"\t\t================================================================================="<<endl;
                cout<<"\t\tMasukan Pilihan : ";cin>>ranjang;
				cout<<endl;
				
				if(kamar==1 && ranjang==1)
                {
                    cout<<"\t\tAnda Memilih Kamar Tipe Standart Dengan Ranjang Single";
                    fixkam="Standart Dengan Single Bed";
                    harga_kamar= promo;
                }
              
                else if(kamar==1 && ranjang==2)
                {
                    cout<<"\t\tAnda Memilih Kamar Tipe Standart Dengan Ranjang Double";
                    fixkam="Standart Dengan Double Bed";
                    harga_kamar= promo;                  
                }
                else if(kamar==2 && ranjang==1)
                {
                    cout<<"\t\tAnda Memilih Kamar Tipe Premium Dengan Ranjang single";
                    fixkam="Premium  Dengan Single Bed";
                    harga_kamar= array[0];                  
                }
               
				else if(kamar==2 && ranjang==2)
                {
                    cout<<"\t\tAnda Memilih Kamar Tipe Premium Dengan Ranjang Double";
                    fixkam="Premium Dengan Double Bed";
                    harga_kamar= array[1];
                }
				else if(kamar==3 && ranjang==1)  
                {
                    cout<<"\t\tAnda Memilih Kamar Tipe Deluxe Dengan Ranjang single";
                    fixkam="Deluxe Dengan Single Bed";
                    harga_kamar=800000;                  
                }
                
				else if(kamar==3 && ranjang==2)
                {
                    cout<<"\t\tAnda Memilih Kamar Tipe Deluxe Dengan Ranjang Double";
                    fixkam="Deluxe Dengan Double Bed";
                                harga_kamar=1000000;                  
                }
                
                else if(kamar==4 && ranjang==1)
                {
                    cout<<"\t\tAnda Memilih Kamar Tipe Suite Dengan Ranjang single";
                    fixkam="Suite Dengan Single Bed";
                                harga_kamar=1700000;                
                }
               
				else if(kamar==4 && ranjang==2)
                {
                    cout<<"\t\tAnda Memilih Kamar Tipe Suite Dengan Ranjang Double";
                    fixkam="Suite Dengan Double Bed";
                                harga_kamar=2100000;                
                }
                else if(kamar==5 && ranjang==1)
                {
                    cout<<"\t\tAnda Memilih Kamar Tipe Presidential Dengan Ranjang single";
                    fixkam="Presidential Dengan Single Bed";
                                harga_kamar=2500000;                
                }
            
                else if(kamar==5 && ranjang==2)
                {
                    cout<<"\t\tAnda Memilih Kamar Tipe Presidential Dengan Ranjang Double";
                    fixkam="Presidential Dengan Double Bed";
                                harga_kamar=4000000;                
                }
                else
                {
		            cout<<"\t\tMaaf Pilihan Anda Tidak Tersedia"<<endl;
		            cout<<"\t\tUntuk Keamanan Silahkan Isi Data Dari Awal"<<endl;
		            cout<<"\t\tSilahkan ketik [Y] untuk Memulai Lagi ";cin>>jwb;
						do {
		            		goto awal;
						} while (jwb=="Y" || jwb=="y");
                }
                cout<<endl<<endl;
                cout<<"\t\tSilahkan Mengisi Form Berikut"<<endl;
				cout<<"\t\t================================================================================="<<endl;
                cout<<"\t\tPilih No. Kamar [1-100]     : "; cin>>no_kamar;
                cout<<endl;
                cout<<"\t\tMenginap lebih dari 5 Hari diskon 2% perhari, lebih dari 10 hari diskon 3% perhari"<<endl;
                cout<<"\t\tLama Menginap               : "; cin>>lama;
               
                if(lama>=10)
                {
                	diskon=0.3;
				}
				else if(lama>=5)
                {
                    diskon=0.2;
                } 
                else
                {
                	diskon=0;
                }
                cout<<"\t\tTanggal Check In [DDMMYY]   : ";cin>>checkin;
                cout<<"\t\tTanggal Check Out [DDMMYY]  : ";cin>>checkout;
    			cout<<"\t\t================================================================================="<<endl<<endl;
               
                cout<<"\t\tData Pemesanan Kamar"<<endl;
    			cout<<"\t\t================================================================================="<<endl;
                cout<<"\t\tNama Resepsionis : "<<resepsionis<<endl;
                cout<<"\t\tID Resepsionis   : "<<id_resepsionis<<endl;
                cout<<"\t\tNama Pemesan     : "<<customer<<endl;
                cout<<"\t\tID Pemesan       : "<<id_customer<<endl;
                cout<<"\t\tAlamat           : "<<alamat<<endl;
                cout<<"\t\tNo Telp/HP       : "<<hp<<endl;
                cout<<"\t\tTipe Kamar       : "<<fixkam<<endl;
                cout<<"\t\tNo. Kamar        : ";
                if(no_kamar >= 1 && no_kamar <= 100)
                {
                                cout<<no_kamar;
                }
                else
                {
                				cout<<endl;
                                cout<<"\t\t\t\t        Maaf Nomer Kamar Belum Tersedia"<<endl;
                                cout<<"\t\t\t\t        Silahkan Hubungi Resepsionis Untuk Pergantian Nomer";
                }
                cout<<endl;
                cout<<"\t\tLama Menginap    : "<<lama<<" Hari"<<endl;
                cout<<"\t\tTanggal Check in : "<<checkin<<endl;
                cout<<"\t\tTanggal Check out: "<<checkout<<endl;
                cout<<"\t\tHarga Perhari    : Rp. "<<harga_kamar<<endl;
                cout<<"\t\tHarga Kamar Total: Rp. "<<lama*harga_kamar<<endl;
                cout<<"\t\tDiskon           : Rp. "<<diskon*harga_kamar<<endl;
                total=harga_kamar*lama-(diskon*harga_kamar);
				cout<<"\t\t================================================================================="<<endl<<endl;
                cout<<"\t\tBiaya Total      : Rp. "<<total<<endl;
                cout<<"\t\tUang Muka        : Rp. ";cin>>um;
                kurang=total-um;
                if(total>=um)
                {
                                cout<<"\t\tKekurangan       : Rp. "<<kurang<<endl;
                }
                else
                {
                                cout<<"\t\tKembali          : Rp. "<<kurang*(-1)<<endl;
                }
				cout<<"\t\t================================================================================="<<endl<<endl;
               
                cout<<"\t\t           Terima Kasih Telah Memilih HOTEL Puyer Bintang Tujuh"<<endl;
                cout<<"\t\t                   Sebagai Tempat Peristirahatan Anda"<<endl;
                cout<<"\t\t================================================================================="<<endl<<endl;
                cout<<"\t\tApakah Anda Ingin Memesan Kamar Lagi ? [Y/N]";cin>>jwb;
            		while (jwb=="Y" || jwb=="y"){
            			goto awal;
						}
					cout<<"\t\t==========================Terima Kasih Atas Kunjungannya===========================";
            
                return 0;
}
