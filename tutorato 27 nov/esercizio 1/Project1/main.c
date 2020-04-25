#include<math.h>
struct punto {
	double x, y;
};
struct punto p;
double distanza(struct punto x,struct punto y) {
	return sqrt(pow(x.x - y.x, 2) + pow(x.y - y.y, 2));
}
int main(void) {
	struct punto x;
	x.x = 2;
	x.y = 5;
	struct punto y;
	y.x = 2;
	y.y = 3;

	double z = distanza(x, y);
	return z;

}