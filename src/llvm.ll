int main() {
block0:
	%0 = alloc [2 x int]
	%1 = ptradd %0, 0
	store 0, %1
	%2 = ptradd %0, 1
	store 1, %2
	return 0
}

