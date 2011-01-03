int main() {
  int *p = (int*)111111;
  int x;
  x = *p; // access bad memory => SIGSEGV sent
  return x;
}
