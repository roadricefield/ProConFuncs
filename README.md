# Functions for programming contest

## C++: pri_fac(*long long*, *string*)
This function performs prime factorization. The calculation cost is O(sqrt(*N*)).  
This function has two modes.

- all  
Returns all prime factors of given long long values.
```cpp
vector<long long> out = pri_fac(30000LL, "all");

for(int i=0;i<out.size();i++) cout << out[i] << endl;

//output
2
2
2
2
3
5
5
5
5
```

- unique  
Returns unique prime factors of given long long  values.
```cpp
vector<long long> out = pri_fac(30000LL, "unique");

for(int i=0;i<out.size();i++) cout << out[i] << endl;

///output
2
3
5
```

## Python3: str_rep(*string*, *string*, *int*)

In python, you can't replace a character in a string like below;

```python
S = "Python3"

S[2] = "T"
```

So I made the very very simple function, str_rep() which replace a character in a string.

```python
S = "Python3"

S = str_rep(S, "T", 2)

print(S)

#output
PyThon3
```
The first argument of this function is input string. The second argument a character which you want replace to. The third is the 0-indexed index of the character of input string which you want to replace.
