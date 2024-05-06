#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
    cout << "Senin icin rastgele elemanlardan olusan 10 elemanli bir dizinin elemanlarinin fakt�riyelini hesaplayacagim!" << endl;
    // Rastgele say� olu�turmak i�in ba�lang�� de�erini zamana g�re de�i�ecek �ekilde ayarlad�m
    srand(time(0));

    // Diziyi tan�mlad�m
    int dizi[10];

    // for d�ng�s�yle dizinin her bir eleman�n� rastgele say�lar olu�acak �ekilde ayarlad�m ve �ok b�y�k say�lar ��kmamas� i�in 20 ye kadar olsun istedim
    for(int i = 0; i < 10; i++) {
        dizi[i] = rand() % 21;
    }

// elemanlar� yazd�ral�m ekrana
 cout<<" "<<endl;
cout<<"Iste dizimizin elemanlari: "<<endl;

for(int k=0; k<10; k++){
	
	cout<<"Dizinin "<<k+1<<". Elemani = "<<dizi[k]<<endl;
	
	
}

cout<<""<<endl;
cout<<""<<endl;
cout<<""<<endl;

    // dizinin elemanlar�n�n fakt�riyelleri
    cout<<"Elemanlarimizin faktoriyelleri: "<<endl;
    
    for(int i = 0; i < 10; i++) {
        int sonuc = 1; 
      
	    for(int j = 1; j <= dizi[i]; j++) {
           
		    sonuc *= j;
      
	    }
    
	    cout << i + 1 << ". Elemanin faktoriyeli= " << sonuc <<endl;
   
    }

    return 0;
}
