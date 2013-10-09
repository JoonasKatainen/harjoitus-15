#include <iostream> //c kohta
#include <string>
using namespace std;
int main()
{
char mjono1[101]="";
char mjono2[101]="";
cout<<"Syota max 100 merkkia pitka merkkijono."<<endl;
cin.getline(mjono1,100);
int j = 0;
for (int i=0;i<=100;i++){
	mjono2[i] = mjono1[j];
	j++;
}
_strrev(mjono2);
if (strcmp(mjono1, mjono2) == 0)
cout<<"Merkkijono on palindromi"<<endl;
else
	cout<<"Merkkijono ei ole palindromi"<<endl;
return 0;
}
/*#include <iostream> // b kohta
using namespace std;
int main()
{
char mjono1[18];
char mjono2[18];
cout<<"Syota 17 merkkia pitka merkkijono, ei valilyonteja."<<endl;
cin >> mjono1;
mjono2[0] = mjono1[16];
mjono2[1] = mjono1[15];
mjono2[2] = mjono1[14];
mjono2[3] = mjono1[13];
mjono2[4] = mjono1[12];
mjono2[5] = mjono1[11];
mjono2[6] = mjono1[10];
mjono2[7] = mjono1[9];
mjono2[8] = mjono1[8];
mjono2[9] = mjono1[7];
mjono2[10] = mjono1[6];
mjono2[11] = mjono1[5];
mjono2[12] = mjono1[4];
mjono2[13] = mjono1[3];
mjono2[14] = mjono1[2];
mjono2[15] = mjono1[1];
mjono2[16] = mjono1[0];
mjono2[17] = '\0';
cout << mjono2<<endl;
return 0;
}
/*#include <iostream> //a kohta
using namespace std;
int main()
{
char mjono1[18];
cout<<"Syota 17 merkkia pitka merkkijono, ei valilyonteja."<<endl;
cin >> mjono1;
cout<<mjono1[16]<<mjono1[15]<<mjono1[14]<<mjono1[13]<<mjono1[12]<<mjono1[11]<<mjono1[10]<<mjono1[9]<<mjono1[8]<<mjono1[7]<<mjono1[6]<<mjono1[5]<<mjono1[4]<<mjono1[3]<<mjono1[2]<<mjono1[1]<<mjono1[0]<<endl;
return 0;
}*/