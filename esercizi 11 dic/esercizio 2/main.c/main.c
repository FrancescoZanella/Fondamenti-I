extern char *trim(const char *s);
int main(void) {
	char*s=trim("prova");
	free(s);
	return 0;
}