int main() {
    int *p = new int[10];
    p[9] = 1; // Correct this to size -1 = 10 - 1 = 9 instead of 10

    //delete p;
    delete[] p; // Deallocate memory from new allocation above
    return 0;
}