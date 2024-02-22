int convert(int n, string &str) {

    int ansDec = 0;
    int raiseTo = 0;

    for (int i = (n - 1); i >= 0; i--) {

        if (str[i] == '1') {
            ansDec = ansDec + pow(2, raiseTo);
        }

        raiseTo++;

    }

    return ansDec;
}
