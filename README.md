## BASIC STL
- *Sequence Containers*
    - Array, Vector, Deque, Forward List, List
- *Associative Containers*
    - Set, Map, Multiset, Multimap
- *Unordered Associative Containers*
    - Unordered set, u.. map, u.. multiset
- *Container Adaptors*
    - Stack, Que, Priority Queue

## Bitwise Operators
- &
- |
- ^
- ~
- \>>
- <<
 
 ### &
| P | O | Q  | R | 
| ------- | --- | --- | --- |
| 0 | & | 0 |  0
| 0 | & | 1 |  0
| 1 | & | 0 |  0
| 1 | & | 1 |  1

#### Example: 
5&7 => 5

0000101 <br/>
0000111 <br/>
\--<br/>
0000101 <br/>
=> 5

`cout << (80<<1); // output 160` <br/>
`cout << (80<<1); // output 40`

#### determine odd even
```cpp
if(11&1)
        cout << "odd";
    else
        cout << "even";
// output :odd


#### determine ith bit
```cpp
bool getIthBit(int n, int i){
    int mask = (1<<(i-1));
    return (n&mask) > 0 ? 1 : 0;
}
void setIthBit(int &n, int i){
    int mask = (1<<(i-1));
    n = (n|mask);
}

void clearBit(int &n, int i){
    int mask = ~(1<<(i-1));
    n = (n&mask);
}

int main(){
    int n = 5;
    int pos = 2;
    cout << getIthBit(n, pos) << endl;
    setIthBit(n, pos);
    cout << n << endl;
    cout << getIthBit(n, pos) << endl;
    clearBit(n, 3);
    cout << n << endl;
    return 0;
}
/*
0
7
1
3
*/
```
### clear bits in range
if n = 31
i 1
j 3
result is 17

we frist make  <br>
a as 11111000000<br>
b as 00000000011
then a|b

```cpp
void clearBitsInRange(int &n, int i, int j){
  int a = (~0)<<j+1;
  int b = (1<<i)-1;
  int mask  = a|b;
  n = n&mask;
}
```
### is power of two

```cpp
int isPowerOfTwo(int n){
  return ((n & (n-1)) == 0);
}

int main(){
  cout << isPowerOfTwo(15);
  return 0;
}
// output 0
```

```cpp
int countBits(int n){
  int cnt = 0;
  while(n>0){
    if((n&1)!=0)
      cnt++;
    n>>=1;
  }
  return cnt;
}

int countBits(int n){
  // faster // iterate over only up to 1s
  int ans = 0;
  while(n>0){
    n = (n& (n-1));
    ans++;
  }
  return ans;
}
```
 
## Updated tree of src/
    001_hello.cpp
    002_io.cpp
    003_prime.cpp
    004_reverese_num.cpp
    005_armstrong.cpp
    006_fibbo.cpp
    007_fact.cpp
    007_pascal_triangle.cpp
    008_conversions.cpp
    009_array.py
    010_linked_list.py
    011_roman_int.py
    012_prefix_max.py
    013_valid_brackets.py
    014_print_adjecncy copy.cpp
    014_print_adjecncy.cpp
    015_bfs.cpp
    016_dfs.cpp
    017_nquin.cpp
    018_shafayat_graph_intro.cpp
    019_input.txt
    019_shortest_path.cpp
    023_oop1.cpp
    024_uva100_cylce.cpp
    025_uva_jolly_jump_unsolved.cpp
    026_uva_odd_sum.cpp
    027_decoder.cpp
    028_carrycounter.cpp
    029_uva_qwerty.cpp
    030_uva_reverse_add.cpp
    031_uva_136_ugly_num.cpp
    032_above_avg.cpp
    033_bracket_balance.cpp
    033_uva_lcd_accepted.cpp
    033_uva_lcd_pre.cpp
    033_uva_lcd_pre2.cpp
    034_uva_parking.cpp
    035_minesweeper.cpp
    036_uva_p11044_searching_for_nessy copy.bin
    036_uva_p11044_searching_for_nessy.bin
    036_uva_p11044_searching_for_nessy.cpp
    037_uva_p12289_one_two_three.bin
    037_uva_p12289_one_two_three.cpp
    038_uva_p10137_the_trip.bin
    038_uva_p10137_the_trip.cpp
    039_1_bubble_sort_basic.cpp
    040_playing_with_time.cpp
    041_euclidian_gcd.cpp
    042_ds_cp_book_2.cpp
    043_greedy_minimum_coin.bin
    043_greedy_minimum_coin.cpp
    044_euler_totient.cpp
    045_eulers_totient_with_prime_factor.cpp
    046_euler_with_seive.cpp
    047_simple_sieve.cpp
    047_simple_sieve.exe
    048_eular_print_up_to_n.bin
    048_eular_print_up_to_n.cpp
    048_eular_print_up_to_n.exe
    049_spoj_etf.bin
    049_spoj_etf.cpp
    049_spoj_etf.exe
    050_tree_1st.exe
    050_tree_1st_failed.cpp
    051_tree_1stTime.cpp
    051_tree_1stTime.exe
    052_loop_to_recursive.cpp
    052_loop_to_recursive.exe
    053_test_debug.bin
    053_test_debug.cpp
    053_test_debug.exe
    20_binary_search.c
    21_duplicate_contains.cpp
    22_valid_palindrome.cpp
    input.txt
    output.txt
    _code.cpp
    _code.exe
    _next.yml