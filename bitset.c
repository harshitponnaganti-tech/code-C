int isBitSet(int n, int i) {
    // Shift n to the right by i bits, then check the least significant bit using bitwise AND
    return (n >> i) & 1;
}
