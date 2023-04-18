- Argc & Argv in c.
- how to compile with unused `variables` or `arguments`
```c
// Use
    // (void)variable name
    // (void)argument name

// or define it as unused when declare function like:
int main(int __attribute__((__unused__)) argc, char *argv[])
```