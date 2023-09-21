//Buat program untuk menjumlahkan  5 bilangan dalam array dimana setiap bilangan diinput oleh user

#include <iostream>
using namespace std;

int main(){
    int bilangan[5]; //deklarasi array untuk simpan 5 bilangan
    int hasil=0; //deklarasi variablel untuk simpan penjumlahan

    cout<<"Masukan 5 bilangan: \n";
    for (int i=0; i<5;i++){
    cout<<"Input bilangan ke-"<<i+1<<endl;
    cin>>bilangan[i];
    hasil = hasil + bilangan[i]; }//hasil+= bilagan [i]

    cout<<" Hasil penjumlahan 5 bilangan = "<<hasil;
    return 0;
}