#include "./../Mothership.h"

#include <iostream>


void tlg() {
	int T, o, o1 = 0, t, t1 = 0, f = 0, temp;
	scanf("%d", &T);

	while (T--) {
		scanf("%d %d", &o, &t);
		o1 += o;
		t1 += t;
		temp = o1 - t1;
		if (f < 0) {
			if (temp < f) f = temp;
			else if (-(temp) < f) f = temp;
		} else {
			if (temp > f) f = temp;
			else if (-(temp) > f) f = temp;
		}
	}
	if (f > 0) printf("%d %d", 1, f);
	else printf("%d %d", 2, -f);
}