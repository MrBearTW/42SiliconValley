int main()
{
    int v[5];
    int *p = v;
    while (p != v + 5)
    {
        *p = 0;
        p++;
        // *p++ = 0
    }
    return 0;
}