#include <cstdlib>
#include <iostream>

using namespace std;
//struct tanggal
typedef struct{
   int tgl;
   int bln;
   int thn;
}struct_tanggal;

//struct jadwal
typedef struct{
   struct_tanggal st;
   char tujuan[21];
   char paket[11];
}struct_jadwal;

//prosedur input jadwal
void input_jadwal(struct_jadwal sj[2]){
   int i;
   for(i=0;i<2;i++){
   system("cls");
   cout<<"Masukkan kota "<<i+1<<" : ";
   fflush(stdin);cin.get(sj[i].tujuan, 20);
   cout<<"Masukkan paket "<<i+1<<" : ";
   fflush(stdin);cin.get(sj[i].paket, 20);
   cout<<"Masukkan tanggal "<<i+1<<" : ";
   cin>>sj[i].st.tgl;
   cout<<"Masukkan bulan "<<i+1<<" : ";
   cin>>sj[i].st.bln;
   cout<<"Masukkan tahun "<<i+1<<" : ";
   cin>>sj[i].st.thn;
   }
}

//prosedur output jadwal
void output_jadwal(struct_jadwal sj[2]){
   int i;
   for(i=0;i<2;i++){
   cout<<i+1<<" "<<sj[i].tujuan<<" "<<sj[i].paket<<" ";
   cout<<sj[i].st.tgl<<"/"<<sj[i].st.bln<<"/"<<sj[i].st.thn<<endl;
   }
}

//fungsi utama
int main(int argc, char *argv[])
{
    struct_jadwal sj[2];
    input_jadwal(sj);
    system("cls");
    cout<<"Jadwal Keberangkatan"<<endl<<endl;
    output_jadwal(sj);
    cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
