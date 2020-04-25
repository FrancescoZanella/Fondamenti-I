struct complesso {
	double re, im;
};//(𝑎 + 𝑖𝑏)(𝑐 + 𝑖𝑑) = (𝑎𝑐 − 𝑏𝑑) + 𝑖(𝑎𝑑 + 𝑏𝑐)
void prodotto_complesso ( struct complesso *comp1,const struct complesso *comp2){
	struct complesso c = { 0,0 };
	struct complesso *tot;
	tot = &c;
	tot->re = ((comp1->re * comp2->re) - (comp1->im * comp2->im));
	tot->im = ((comp1->re * comp2->im) + (comp1->im * comp2->re));
	comp1 = tot;
}
