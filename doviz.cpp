#include <iostream>
using namespace std;


int main ()
{

    int lira1,lira2,islem,para,kalan;
    
    double dolar,euro,sterlin,frank,ekur,tl;


    
    std::cout << "Adiniz Soyadiniz: ";
    std::string isim;
    std::getline(std::cin, isim);
    std::cout << "Merhaba " << isim << " Bey"<<std::endl;
    
    
    cout << "1.Alis\n2.Satis\n";
    cout << "Islem Seciniz:";
    cin >>islem;

		

    if(islem == 1)
    
    	{
    		
    		cout << "1.Euro\n2.Dolar\n3.Sterlin\n4.Frank\n";
    		cout << "Kuru seciniz:";
    		cin >> lira1;
    		
		    if(lira1==1)
		    
			{
				
				cout<<"Kac Euro bozmak istersiniz:\n";
				cin >> euro;
				
				if(euro <= 1000)
				{
					tl = euro * 3.85;
					ekur=3.85;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << tl << " Tl aldiniz.\n";
					cout << euro << " Euro verdiniz.\n";
					//kalan = para-(euro*3.98) ;
					//cout << euro << " Euro verdiniz \n"<< ekur <<" kur uzerinden " << tl << " Tl aldiniz\n";					
					//cout << kalan << " Tl paraustu aldiniz";
				}
				if(1000 < euro && euro <= 5000)
				{
					tl = euro * 3.89;
					ekur=3.89;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << tl << " Tl aldiniz.\n";
					cout << euro << " Euro verdiniz.\n";
					//std::cout<<isim<<" Bey;\n";
					//cout << euro << " Euro verdiniz \n"<< ekur <<" kur uzerinden " << tl << " Tl aldiniz\n";
				}				
				if(euro > 5000)
				{
					tl = euro * 3.9;
					ekur=3.9;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << tl << " Tl aldiniz.\n";
					cout << euro << " Euro verdiniz.\n";
					//std::cout<<isim<<" Bey;\n";
					//cout << euro << " Euro verdiniz \n"<< ekur <<" kur uzerinden " << tl << " Tl aldiniz\n";
				}					
			}
			
		    if(lira1==2)
		    
			{
				
				cout<<"Kac Dolar bozmak istersiniz:\n";
				cin >> dolar;
				
				if(dolar <= 1000)
				{
					tl = dolar * 3.54;
					ekur=3.54;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << tl << " Tl aldiniz.\n";
					cout << dolar << " Dolar verdiniz.\n";
					//kalan = para-(euro*3.98) ;
					//std::cout<<isim<<" Bey;\n";
					//cout << dolar << " Dolar verdiniz \n"<< ekur <<" kur uzerinden " << tl << " Tl aldiniz\n";
					//cout << kalan << " Tl paraustu aldiniz";
				}
				if(1000 < dolar && dolar <= 5000)
				{
					tl = dolar * 3.57;
					ekur=3.57;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << tl << " Tl aldiniz.\n";
					cout << dolar << " Dolar verdiniz.\n";
					//std::cout<<isim<<" Bey;\n";
					//cout << dolar << " Dolar verdiniz \n"<< ekur <<" kur uzerinden " << tl << " Tl aldiniz\n";
				}				
				if(dolar > 5000)
				{
					tl = dolar * 3.58;
					ekur=3.58;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << tl << " Tl aldiniz.\n";
					cout << dolar << " Dolar verdiniz.\n";					
					//std::cout<<isim<<" Bey;\n";
					//cout << dolar << " Dolar verdiniz \n"<< ekur <<" kur uzerinden " << tl << " Tl aldiniz\n";
				}					
			}
			
		    if(lira1==3)
		    
			{
				
				cout<<"Kac Sterlin bozmak istersiniz:\n";
				cin >> sterlin;
				
				if(sterlin <= 1000)
				{
					tl = sterlin * 4.5;
					ekur=4.5;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << tl << " Tl aldiniz.\n";
					cout << sterlin << " Sterlin verdiniz.\n";
					//kalan = para-(euro*3.98) ;
					//std::cout<<isim<<" Bey;\n";
					//cout << sterlin << " Sterlin verdiniz \n"<< ekur <<" kur uzerinden " << tl << " Tl aldiniz\n";
					//cout << kalan << " Tl paraustu aldiniz";
				}
				if(1000 < sterlin && sterlin <= 5000)
				{
					tl = sterlin * 4.57;
					ekur=4.57;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << tl << " Tl aldiniz.\n";
					cout << sterlin << " Sterlin verdiniz.\n";
					//std::cout<<isim<<" Bey;\n";
					//cout << sterlin << " Sterlin verdiniz \n"<< ekur <<" kur uzerinden " << tl << " Tl aldiniz\n";
				}				
				if(sterlin > 5000)
				{
					tl = sterlin * 4.6;
					ekur=4.6;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << tl << " Tl aldiniz.\n";
					cout << sterlin << " Sterlin verdiniz.\n";
					//std::cout<<isim<<" Bey;\n";
					//cout << sterlin << " Sterlin verdiniz \n"<< ekur <<" kur uzerinden " << tl << " Tl aldiniz\n";
				}					
			}
			
		    if(lira1==4)
		    
			{
				
				cout<<"Kac Frank bozmak istersiniz:\n";
				cin >> frank;
				
				if(frank <= 1000)
				{
					tl = frank * 3.55;
					ekur=3.55;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << tl << " Tl aldiniz.\n";
					cout << frank << " Frank verdiniz.\n";					
					//kalan = para-(euro*3.98) ;
					//std::cout<<isim<<" Bey;\n";
					//cout << frank << " Frank verdiniz \n"<< ekur <<" kur uzerinden " << tl << " Tl aldiniz\n";
					//cout << kalan << " Tl paraustu aldiniz";
				}
				if(1000 < frank && frank <= 5000)
				{
					tl = frank * 3.61;
					ekur=3.61;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << tl << " Tl aldiniz.\n";
					cout << frank << " Frank verdiniz.\n";
					//std::cout<<isim<<" Bey;\n";
					//cout << frank << " Frank verdiniz \n"<< ekur <<" kur uzerinden " << tl << " Tl aldiniz\n";
				}				
				if(frank > 5000)
				{
					tl = frank * 3.67;
					ekur=3.67;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << tl << " Tl aldiniz.\n";
					cout << frank << " Frank verdiniz.\n";
					//std::cout<<isim<<" Bey;\n";
					//cout << frank << " Frank verdiniz \n"<< ekur <<" kur uzerinden " << tl << " Tl aldiniz\n";
				}					
			}

 		}
 		
 	if(islem == 2)
 	
 		{
 			
 			cout << "1.Euro\n2.Dolar\n3.Sterlin\n4.Frank\n";
 			cout << "Para birimi seciniz:";
		    cin >> lira2;
		    
		    if(lira2==1)
		    
			{
				
				cout<<"Kac Tl Euro almak istersiniz:\n";
				cin >> tl;
				
				if(tl <= 1000)
				{
					euro = tl / 3.98;
					ekur=3.98;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << euro << " Euro aldiniz.\n";
					cout << tl << " Tl verdiniz.\n";					
					//kalan = para-(euro*3.98) ;
					//std::cout<<isim<<" Bey;\n";
					//cout << para << " Tl verdiniz \n"<< ekur <<" kur uzerinden " << euro << " Euro aldiniz\n";
					//cout << kalan << " Tl paraustu aldiniz";
				}
				if(1000 < tl && tl <= 5000)
				{
					euro = tl / 3.89;
					ekur=3.89;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << euro << " Euro aldiniz.\n";
					cout << tl << " Tl verdiniz.\n";
					//kalan = para-(euro*3.89) ;
					//std::cout<<isim<<" Bey;\n";
					//cout << para << " Tl verdiniz \n"<< ekur <<" kur uzerinden " << euro << " Euro aldiniz\n";
					//cout << kalan << " Tl paraustu aldiniz";					
				}
				if(tl > 5000)
				{
					euro = tl / 3.892;
					ekur=3.92;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << euro << " Euro aldiniz.\n";
					cout << tl << " Tl verdiniz.\n";
					//kalan = para-(euro*3.92) ;
					//std::cout<<isim<<" Bey;\n";
					//cout << para << " Tl verdiniz \n"<< ekur <<" kur uzerinden " << euro << " Euro aldiniz\n";
					//cout << kalan << " Tl paraustu aldiniz";
				}
		    }		    
		    
			if(lira2==2)
		    
		    {
		    	
				cout<<"Kac Tl Dolar almak istersiniz:\n";
				cin >> tl;
				
				if(tl<=1000)
				{
					dolar = tl / 3.68;
					ekur=3.68;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << dolar << " Dolar aldiniz.\n";
					cout << tl << " Tl verdiniz.\n";
					//kalan = para-(euro*3.68) ;
					//std::cout<<isim<<" Bey;\n";
					//cout << para << " Tl verdiniz \n"<< ekur <<" kur uzerinden " << dolar << " Dolar aldiniz\n";
					//cout << kalan << " Tl paraustu aldiniz";
				}
				if(1000 < tl && tl <= 5000)
				{
					dolar = tl / 3.63;
					ekur=3.63;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << dolar << " Dolar aldiniz.\n";
					cout << tl << " Tl verdiniz.\n";
					//kalan = para-(euro*3.63) ;
					//std::cout<<isim<<" Bey;\n";
					//cout << para << " Tl verdiniz \n"<< ekur <<" kur uzerinden " << dolar << " Dolar aldiniz\n";
					//cout << kalan << " Tl paraustu aldiniz";					
				}
				if(tl > 5000)
				{
					euro = tl / 3.62;
					ekur=3.62;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << dolar << " Dolar aldiniz.\n";
					cout << tl << " Tl verdiniz.\n";
					//kalan = para-(euro*3.62) ;
					//std::cout<<isim<<" Bey;\n";
					//cout << para << " Tl verdiniz \n"<< ekur <<" kur uzerinden " << dolar << " Dolar aldiniz\n";
					//cout << kalan << " Tl paraustu aldiniz";		    	
		    	}
		    	
			}
			
			if(lira2==3)
			
		    {
		    	
				cout<<"Kac Tl Sterlin almak istersiniz:\n";
				cin >> tl;
				
				if(tl <= 1000)
				{
					sterlin = tl / 4.7;
					ekur=4.7;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << sterlin << " Sterlin aldiniz.\n";
					cout << tl << " Tl verdiniz.\n";
					//kalan = para-(euro*4.7) ;
					//std::cout<<isim<<" Bey;\n";
					//cout << para << " Tl verdiniz \n"<< ekur <<" kur uzerinden " << sterlin << " Sterlin aldiniz\n";
					//cout << kalan << " Tl paraustu aldiniz";
				}
				if(1000 < tl && tl <= 5000)
				{
					sterlin = tl / 4.66;
					ekur=4.66;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << sterlin << " Sterlin aldiniz.\n";
					cout << tl << " Tl verdiniz.\n";
					//kalan = para-(sterlin*4.66);
					//std::cout<<isim<<" Bey;\n";
					//cout << para << " Tl verdiniz \n"<< ekur <<" kur uzerinden " << sterlin << " Sterlin aldiniz\n";
					//cout << kalan << " Tl paraustu aldiniz";					
				}
				if(tl > 5000)
				{
					sterlin = tl / 4.62;
					ekur = 4.62;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << sterlin << " Sterlin aldiniz.\n";
					cout << tl << " Tl verdiniz.\n";
					//kalan = para-(sterlin*4.62) ;
					//std::cout<<isim<<" Bey;\n";
					//cout << para << " Tl verdiniz \n"<< ekur <<" kur uzerinden " << sterlin << " Sterlin aldiniz\n";
					//cout << kalan << " Tl paraustu aldiniz";		    	
		    	}
		    	
			}
			
			if(lira2==4)
			
		    {
		    	
				cout<<"Kac Tl Frank almak istersiniz:\n";
				cin >> tl;
				
				if(tl <= 1000)
				{
					frank = tl / 3.75;
					ekur=3.75;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << frank << " Frank aldiniz.\n";
					cout << tl << " Tl verdiniz.\n";
					//kalan = para-(frank*3.75) ;
					//std::cout<<isim<<" Bey;\n";
					//cout << para << " Tl verdiniz \n"<< ekur <<" kur uzerinden " << frank << " Frank aldiniz\n";
					//cout << kalan << " Tl paraustu aldiniz";
				}
				if(1000 < tl && tl <= 5000)
				{
					frank = tl / 3.7;
					ekur=3.7;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << frank << " Frank aldiniz.\n";
					cout << tl << " Tl verdiniz.\n";
					//kalan = para-(frank*3.7);
					//std::cout<<isim<<" Bey;\n";
					//cout << para << " Tl verdiniz \n"<< ekur <<" kur uzerinden " << frank << " Frank aldiniz\n";
					//cout << kalan << " Tl paraustu aldiniz";					
				}
				if(tl > 5000)
				{
					frank = tl / 3.69;
					ekur = 3.69;
					std::cout<<"Sayin "<<isim<<";\n";
					cout << ekur << " Kur degerinden " << frank << " Frank aldiniz.\n";
					cout << tl << " Tl verdiniz.\n";
					//kalan = para-(frank*3.69) ;
					//std::cout<<isim<<" Bey;\n";
					//cout << para << " Tl verdiniz \n"<< ekur <<" kur uzerinden " << frank << " Frank aldiniz\n";
					//cout << kalan << " Tl paraustu aldiniz";		    	
		    	}
		    	
			}

	 	}
	 	
	if(islem != 1 && islem != 2)
	
		{
			cout << "Lutfen dogru giris yapiniz "<< isim << " Bey. Iyi gunler";
		}

		
	return 0;
	
}


    
