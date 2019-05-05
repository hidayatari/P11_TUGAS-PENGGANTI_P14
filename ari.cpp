#include<iostream>
#include<stdlib.h>

using namespace::std;
main()

    {
        int hb[10],jb[10],n,t[10],jt=0,i,p[10],ni;
        string kartu,nb[10],nd,nb,nama[5]={"Bayu","Irvan","Susiati","Diana","Roni"};
        string code[5]={"A001","A002","A003","A007","A008"},kartu;
        bool s=false;

            cout<<"<<<<<<<<<<<<<<< SELAMAT DATANG DI MINI MARKET MAJU MUNDUR >>>>>>>>>>>>>>>>> : "<<endl<<endl;
            cout<<"Apakah Anda Member (Ya/Tidak) = ";
            cin>>kartu;

        if(kartu=="TIDAK"||"TIDAK"||"tidak")
        {
            cout<<"Nama Lengkap = ";cin>>nd>>nb;
        }
        else if(kartu=="ya"||"Ya"||"YA")
        {
            cout<<"Nomor Identitas Member = ";
            cin>>ni;
        for(int b=1; b<=n; i++)
        {
        if(ni==code[b])

            {
            s=true;
            nama++;
            p[nama]=1;
            }
        }
        if(s)
        {
            cout<<"Nama Lengkap"<<nama;
        }
        else
            cout<<"Nama Tidak Ditemukan ";
        }
            cout<<"Berapa Banyak Barang Yang Dibeli = ";
            cin>>n;
        for(int a=1; a<=n; a++)
        {
            cout<<"Nama Barang = ";
            cin>>nb[a];
            cout<<"Harga Barang = Rp. ";
            cin>>hb[a];
            cout<<"Jumlah Barang = ";
            cin>>jb[a];
            t[a]=hb[a]*jb[a];
            jt=t[a]+jt;
        }
            cout<<"Total Harga "<<jt;
    }
