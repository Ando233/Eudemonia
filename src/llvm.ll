int main() {
block0:
	%0 = alloc int
	store 0, %0
	br block1
block1:
	%1 = load %0
	%2 = lt %1 10
	%3 = ne %2 0
	br %3 block2 block3
block2:
	%4 = load %0
	%5 = add %4 1
	store %5, %0
	br block1
block3:
	%6 = load %0
	return %6
}

