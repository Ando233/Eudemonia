@var = global 0
int main() {
block0:
	%0 = load @var
	%1 = add %0 1
	return %1
}

