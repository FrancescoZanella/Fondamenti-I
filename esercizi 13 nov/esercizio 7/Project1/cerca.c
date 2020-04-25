int cerca_primo(const char *s, char c) {
	int tot = 0;
	for (int i = 0; s[i] != 0; i++) {
		if (s[i] == c) {
			return i;
			}
	}return -1;
}