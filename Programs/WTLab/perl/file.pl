foreach (@ARGV) {
    print;
    print((-f) ? " -REGULAR\n" : " -SPECIAL\n")
}
