#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
    cout << "Senin icin rastgele elemanlardan olusan 10 elemanli bir dizinin elemanlarinin faktöriyelini hesaplayacagim!" << endl;
    // Rastgele sayý oluþturmak için baþlangýç deðerini zamana göre deðiþecek þekilde ayarladým
    srand(time(0));

    // Diziyi tanýmladým
    int dizi[10];

    // for döngüsüyle dizinin her bir elemanýný rastgele sayýlar oluþacak þekilde ayarladým ve çok büyük sayýlar çýkmamasý için 20 ye kadar olsun istedim
    for(int i = 0; i < 10; i++) {
        dizi[i] = rand() % 21;
    }

// elemanlarý yazdýralým ekrana
 cout<<" "<<endl;
cout<<"Iste dizimizin elemanlari: "<<endl;

for(int k=0; k<10; k++){
	
	cout<<"Dizinin "<<k+1<<". Elemani = "<<dizi[k]<<endl;
	
	
}

cout<<""<<endl;
cout<<""<<endl;
cout<<""<<endl;

    // dizinin elemanlarýnýn faktöriyelleri
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
