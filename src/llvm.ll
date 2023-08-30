int main() {
block0:
	%0 = alloc int
	store 1, %0
	%1 = alloc int
	store 3, %1
	%2 = load %0
	%3 = sub %2 5
	%4 = load %1
	%5 = add %3 %4
	return %5
}

