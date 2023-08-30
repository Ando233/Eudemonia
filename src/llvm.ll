int main() {
block0:
	%0 = alloc int
	store 1, %0
	store 2, %0
	%1 = alloc int
	store 3, %1
	%2 = load %0
	return %2
}

