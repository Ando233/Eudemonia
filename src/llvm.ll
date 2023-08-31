@var = global int* 0
@varr = global float* 4.100000
int main() {
block0:
	%0 = alloc int
	store 3, %0
	%1 = load @var
	%2 = add %1 1
	return %2
}

