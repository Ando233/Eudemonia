int main() {
block0:
	br block1
block1:
	%0 = ne 1 0
	br %0 block2 block3
block2:
	br block3
block3:
	return 0
block4:
	br block1
}

