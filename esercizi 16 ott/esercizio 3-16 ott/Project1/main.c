// La funzione riceve le coordinate di due punti 𝑃1(𝑥1,𝑦1) e 𝑃2(𝑥2,𝑦2) e restituisce il quadrato 
//della distanza tra i due punti, ovvero 𝐷2=(𝑥1−𝑥2)2+(𝑦1−𝑦2)2
int distanza(int x1, int x2, int y1,int y2)
{
	int z = ((x1 - x2)*(x1-x2)) + ((y1 - y2)*(y1-y2));
	return z;
}
int main(void) {
	int x1, x2, y1, y2,a;
	x1 = 3;
	x2 = 4;
	y1 = 5;
	y2 = 2;
	a = distanza(x1, x2, y1, y2);
	return a;

}
