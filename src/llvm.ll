int main() {
block0:
	%0 = alloc int
	store 2, %0
	%1 = load %0
	%2 = ne %1 0
	br %2 block1 block3
block1:
	%3 = load %0
	%4 = add %3 1
	store %4, %0
	br block2
block2:
	%5 = load %0
	return %5
block3:
	store 0, %0
	br block2
}

