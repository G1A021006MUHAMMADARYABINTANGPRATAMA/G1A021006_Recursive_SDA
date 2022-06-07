//Muhammad Arya Bintang Pratama
//G1A021006
//Recursive
#include <iostream>
using namespace std;

void tampil(int jumlah)
{
    if (jumlah == 0)
        return;
    cout << "* ";
    tampil(jumlah - 1);
}
 
void segitiga(int n, int i){
    if (n == 0)
        return;
    tampil(i);
    cout << endl;
    segitiga(n - 1, i + 1);
}
int main()
{
    int n;
    cout << "\nNama : Muhammad Arya Bintang Pratama\n NPM : G1A021006\n" <<endl;
    cout<<"---------Membuat Segitiga---------"<<endl;
    cout<<"----------------------------------\n"<<endl;
    printf("Masukkan jumlah segitiga : ");
    cin>>n;
    segitiga(n, 1);
    return 0;
}