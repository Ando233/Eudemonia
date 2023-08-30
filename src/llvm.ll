int half(int x) {
block0:
	%0 = alloc int
	store x, %0
	br block1
block1:
	%1 = load %0
	%2 = div %1 2
	return %2
}

void f() {
block2:
}

int main() {
block3:
	call void f()
	%4 = call int half(int 10)
	return %4
}

