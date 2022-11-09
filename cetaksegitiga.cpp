// PROGRAM PERULANGAN UNTUK MENCETAK SEGITIGA - 'ALFEUS MARTINUS'
#include <iostream>
using namespace std;

// int main ()
// {
//    int n;
//     cout << "Masukan Panjang baris ke : ";
//     cin >> n;
//     cout << "POLA 1\n";

//     for (int i = 1; i <= n; i++)
//     {
//         for (int x = 1; x <= i ; x++)
//         {
//             cout << "*";    
//         }
//         cout<<endl; 
//     }
    
//     cout << "POLA 2\n";

//     for (int i = 1; i <= n; i++)
//     {
//         for (int x = n; x >= i ; x--)
//         {
//             cout << "*";    
//         }
//         cout<<endl; 
//     }
    
//     cout << "POLA 3\n";

//     for (int i = 1; i <= n; i++)
//     {
//         //SPASI
//         for (int x = 1; x < i ; x++)
//         {
//             cout << " ";    
//         }
//         //BINTANG
//         for (int k = n; k >= i; k--)
//         {
//             cout<<"*";
//         }
//         cout<<endl; 
//     }

//     cout << "POLA 4\n";

//     for (int i = 1; i <= n; i++)
//     {
//         //SPASI
//         for (int x = n; x > i ; x--)
//         {
//             cout << " ";    
//         }
//         //BINTANG
//         for (int k = 1; k <= i; k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl; 
//     }
// }

void kesatu ()
    {
        int n;
            cout << endl;
            cout << "MASUKAN JUMLAH SEGITIGA YANG AKAN DICETAK: ";
            cin >> n;
                for (int i = 1; i <= n; i++)
                {
                    for (int x = n; x >= i ; x--)
                    {
                        cout << "*";    
                    }
                    cout<<endl; 
                }
}

void kedua ()
    {
        int n;
            cout << endl;
            cout << "MASUKAN JUMLAH SEGITIGA YANG AKAN DICETAK: ";
            cin >> n;
                for (int i = 1; i <= n; i++)
                {
                    for (int x = n; x >= i ; x--)
                    {
                        cout << "*";    
                    }
            cout<<endl; 
        }
}

void ketiga ()
    {
        int n;
            cout << endl;
            cout << "MASUKAN JUMLAH SEGITIGA YANG AKAN DICETAK: ";
            cin >> n;
                for (int i = 1; i <= n; i++)
                {
                //SPASI
                    for (int x = 1; x < i ; x++)
                    {
                        cout << " ";    
                    }
                //BINTANG
                    for (int k = n; k >= i; k--)
                    {
                        cout<<"*";
                    }
                cout<<endl; 
                }
}

void keempat ()
    {
        int n;
            cout << endl;
            cout << "MASUKAN JUMLAH SEGITIGA YANG AKAN DICETAK: ";
            cin >> n;
                for (int i = 1; i <= n; i++)
                {
                    //SPASI
                    for (int x = n; x > i ; x--)
                    {
                        cout << " ";    
                    }
                        //BINTANG
                        for (int k = 1; k <= i; k++)
                        {
                            cout<<"*";
                        }
                cout<<endl; 
                }
}

int main (){
    int n, pola;
    system ("cls");
        cout << "MENU PROGRAM\n"<<endl;
        cout << "[1] POLA SATU (SEGITIGA KIRI) "<<endl;
        cout << "[2] POLA DUA (SEGITIGA KIRI TERBALIK)"<<endl;
        cout << "[3] POLA TIGA (SEGITIGA KANAN)"<<endl;
        cout << "[4] POLA EMPAT (SEGITIGA KANAN TERBALIK)\n"<<endl;
        cout << "PILIH POLA BERAPA : ";
        cin >> pola;

    switch (pola)
    {
    case 1 : 
        kesatu();
        break;

    case 2 :
        kedua();
        break;

    case 3 :
        ketiga();
        break;

    case 4 :
        keempat();
        break;
    
    default: 
        cout << "Inputan tidak ada"<<endl;
        break;
    }
    system ("pause");
    return main();
}