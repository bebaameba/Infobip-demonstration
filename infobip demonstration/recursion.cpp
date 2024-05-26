/*ZADATAK: 

Zadano je N prirodnih brojeva a¡, a2, .., ax. Treba odrediti mogu li se odabrati među njima neki koji u zbroju daju zadani broj X. Zadatak riješite dinamičkim programiranjem (koristite npr. polje Sum tako da je Sum[a]= 1 ako i samo ako se broj a može prikazati pomoću zadanih brojeva). 

Ulazni podaci: u prvom retku prirodni broj X < 1000. U drugom retku prirodni broj N100. U trećem retku N prirodnih brojeva a1, a2, ,ay od kojih je svaki manji od ili jednak X. 
Izlazni podaci: u prvom retku riječ YES ili NO, ovisno o tome može li se X prikazati kao zbroj nekih medu brojevima a1, a2,..., an. Ako se može, onda u drugom retku treba napisati taj prikaz (vidi primjer). 

Na primjer, za ulazne podatke: 500 7 100 300 250 450 80 70 40 
treba ispisati: YES 500 100 + 250 + 80 + 70
*/

#include <stdio.h>
  
void Sumiranje(int a[], int n, int suma)
{
    
    bool sum[n + 1][suma + 1];
  
    for (int i = 0; i <= n; i++)
        sum[i][0] = true;

    for (int i = 1; i <= suma; i++)
        sum[0][i] = false;
  
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= suma; j++) {
            if (j < a[i - 1])
                sum[i][j] = sum[i - 1][j];
            if (j >= a[i - 1])
                sum[i][j] = sum[i - 1][j] || sum[i - 1][j - a[i - 1]];
        }
    }
    
    if (sum[n][suma]== true){

        printf("YES\n");
        
        printf("%d = ",suma);
        while(suma>0){
        	for(int i=1;i<=n;i++)
        	{
        		if(sum[i][suma]==true){
			
        			if(suma-a[i-1]==0){
        				printf("%d",a[i-1]);
        				suma=0;
        			}else{
        				printf("%d + ",a[i-1]);
        				suma=suma-a[i-1];
					}
					break;
				}
			}
		}
        
	}
    else printf("NO");
  
    return ;
}
  
int main()
{
    int a[100],n,i=0,suma;
    
    scanf("%d",&suma);
    scanf("%d",&n);
    
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
	
    Sumiranje(a, n, suma);
    
    return 0;
}

