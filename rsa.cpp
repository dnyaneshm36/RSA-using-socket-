#include <bits/stdc++.h>
#include<gmp.h>
using namespace std;


void ASCIISentence(string str,string& res)
{
	int l = str.length();
	int convert;
	for (int i = 0; i < l; i++) {
		convert = str[i] - NULL;
		string s = to_string(convert);
		(res).append(s);
	}
}

void asciiToSentence(string str, int len,string & res)
{
	int num = 0;
	for (int i = 0; i < len; i++) {

		// Append the current digit
		num = num * 10 + (str[i] - '0');

		// If num is within the required range
		if (num >= 32 && num <= 122) {

			// Convert num to char
			char ch = (char)num;
            (res)+=ch;
			//cout << ch;

			// Reset num to 0
			num = 0;
		}
	}
}

string convertToString(char* a, int size)
{
    int i;
    string s = "";
    for (i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}

int main(){
	// int check = 0;		                                    //will be 2 if prime, else 1 or 0
	// mpz_t prime_p, prime_q, t;			                    //two very large prime numbers
	// int bits = 1024;
	// mpz_init(prime_p);
	// mpz_init(prime_q);
	// mpz_init(t);
	// gmp_randstate_t state;
	// gmp_randinit_default(state);

	// /*while(check!=2 && check!=1){
	// 	mpz_init_set_ui(t, time(0));
	// 	gmp_randseed(state, t);
	// 	mpz_rrandomb(prime_p, state, bits);
	// 	check = mpz_probab_prime_p(prime_p, 50);
	// }
	// check = 0;
	// while(check!=2 && check!=1){
	// 	mpz_init_set_ui(t, time(0));
	// 	gmp_randseed(state, t);
	// 	mpz_rrandomb(prime_q, state, bits);
	// 	check = mpz_probab_prime_p(prime_q, 50);
	// 	if(mpz_cmp(prime_p, prime_q)==0){
	// 		check = 0;
	// 	}
	// }*/

    // mpz_init_set_str (prime_p, "117020014223499698734185311344030498185016241236864284616156804843820087374890033948149772889562488715934732731488769406930567363351407508732947932514694249103785234597995664513489299315183792018245421624438716014079232307637004165104277209305291692932214802297282685245630046728533815201593708216886839104489", 10);
    // mpz_init_set_str (prime_q, "174929609124129658756875521978488361694943813639866222904748795334096034744229059200246435859198306477078175575710761959678096020532668319415119710643889348262444900429797962932280533830638487349799911081407199215518064607001242356595870650136993159547882002253727152943433268058563996876593095903127096723611", 10);

	// mpz_t N;
	// mpz_inits(N,NULL);
	// mpz_mul ( N, prime_p, prime_q);
	// mpz_t P, Q,tot_n, e, en_gcd;			                    //totient on n=prime_p*prime_q; which is LCM(prime_p-1, prime_q-1)
	// mpz_init(P);
	// mpz_init(Q);
	// mpz_init(e);
	// mpz_init(tot_n);
	// mpz_init(en_gcd);

	// mpz_sub_ui(P, prime_p, 1);
	// mpz_sub_ui(Q, prime_q, 1);
	// mpz_lcm(tot_n, P, Q);
	// mpz_init_set_ui(t, time(0));
	// gmp_randseed(state, t);
	// mpz_urandomm(e, state, tot_n);
	// mpz_gcd(en_gcd, e, tot_n);

	// //calculate e
	// while(mpz_cmp_ui(en_gcd, 1)!=0){
	// 	mpz_init_set_ui(t, time(0));
	// 	gmp_randseed(state, t);
	// 	mpz_urandomm(e, state, tot_n);
	// 	mpz_gcd(en_gcd, e, tot_n);
	// }



	// cout << "Public key pair:\n N = " << N << "\n e = "<<e;

    // mpz_t gcdex,y,d;
    // mpz_inits(gcdex,d,y,NULL);
    // mpz_init_set_ui(gcdex,1);
	// mpz_gcdext(gcdex,d,y,e,tot_n);
	// cout<<"\nSecret key component : \n d = "<<d<<endl;


	mpz_t N,e,d;
	mpz_inits(N,NULL);
	mpz_inits(d,NULL);
	mpz_inits(e,NULL);
    mpz_init_set_str (N, "20470265347816895344476568961273442063188917708627355312252063338404498346842417297434917168319852364564503557345937758019488633613258113891152361768761880266848993210787033390401505174852418159616982721267568325524726241896005358075932112020540149407231801987386184529097217801535891107682431119512114939736033430219207638279247505104535365470119271380301122733831592049080683054940077983067370601847970775258520217218498155414062235490559670637914839610185698137754766905670601550921460630685071124523761223714283453558154607823377985644050315247317062706918298736114734788904940284765759043814861041093665182389779", 10);
    mpz_init_set_str (e, "1480735714001575525719391383434572226280050905456389562701768618013817682236413438239260909603250007300808704119861007139684059892902103037490624227066142933811523748469870557484305934449021756231355407116714026760564474590854270546383846457740346042188032811103060074785045125960276564801377252704670196761105899409900494739871732512631377723445607715053315501725908695075639364343071403981168223244102792913514894935429917469528189640124981566629015567957945548117886238120987207097602567469438056695193781113152147686518930956368664487718460720864912455185017814636550391032160291571088597148354542913003625138327", 10);
    mpz_init_set_str (d, "513580366263523982117216378503294506521451535009904362162916520244489771849738019592851105687350487037574647618958538720834352257872529733409528651615353037947733296958318613756407609165517385818807385452132374137119335539139202301297065188280761289659755983468618034531932706043463167892312310633863870000053776793709829247015146756691408913090647891280298696530223928108736752896367276774720420487796095626935410778419144191021361703126768821825218934502452046318298659640195582605483854080069192814613385482645827099277821545984487141000362869578895553539213805088858457970979939136524581559800045348961213072103", 10);


string  pt_str="";

string  dec_str="";

    string input_str;
    cout<<"\nEnter the string to encrypt: "<<endl;
    getline(cin,input_str);
    ASCIISentence(input_str,pt_str);
    int st_len=pt_str.length();
    char plain_text[st_len+1];
    strcpy(plain_text, pt_str.c_str());
    cout<<endl;

    //before encryption
    mpz_t str_num;
    mpz_init(str_num);
    mpz_set_str(str_num,plain_text,10);
    cout<<" \nPT before encryption :\n"<<input_str<<endl;
    cout<<endl;
	 cout<<" \nPT b=plaintext :\n"<<plain_text<<endl;
    cout<<endl;
    //generate cipher text
    mpz_t ctext,base,exp, mod,ptext;
    mpz_inits(ctext ,base,exp,mod,ptext,NULL);
    mpz_init_set (exp, e);
    mpz_init_set (mod,N);
    mpz_powm(ctext,  str_num, exp, mod);
    cout<<"Cipher text: \n"<< ctext<<endl;
    cout<<endl;

    //decrypt cipher text
    mpz_init_set (exp,d);
    mpz_powm(ptext,  ctext, exp, mod);
	cout<<"p"<<ptext<<endl;
    char *decrypt_text=NULL;
    decrypt_text=mpz_get_str(decrypt_text,10,ptext);
    string temp_str=convertToString(decrypt_text,st_len+1);
    int temp_len=temp_str.length();
    asciiToSentence(temp_str,temp_len,dec_str);
    cout<<"After Decryption: \n"<<dec_str<<endl;

	return 0;
}
