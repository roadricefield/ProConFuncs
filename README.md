# Functions for programming contest

## C++: pri_fac(*long long*, *string*)
This function performs prime factorization. The calculation cost is *O*(sqrt(*N*)).  
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

## C++: SubsetSum(*vector<long long>*, *long long*)  

This function returns whether or not there is a subset of elements of the first argument vector whose sum is the second argument number. The calculation cost is *O*(*NM*). (*N* is the size of the first argument and *M* is the second argument.)  