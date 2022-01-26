
fonctions: write, read, malloc, free, exit.

stack a rempli ordre aleatoire de entier positif/negatif sans doublon
stack b vide
goal: int en ordre croissant dans stack a.

sa: swap a -> swap the first 2 elems of a
sb: swap b -> swap the first 2 elems of b
ss: sa et sb en meme temps

pa: push a -> premier elem de b devient premier elem de a
pb: push b -> premier elem de a devient premier elem de b

ra: rotate a -> monte tous les elems de a de 1, premier devient dernier
rb: rotate b -> monte tous les elems de b de 1, premier devient dernier
rr: ra et rb en meme temps

rra: reverse rotate a -> descends tous les elems de a de 1, dernier devient premier
rrb: reverse rotate b -> descends tous les elems de b de 1, dernier devient premier
rrr: rra et rrb em meme temps


2 numbers -> 1 
3 numbers -> 3
5 numbers -> 12

100 numbers -> 5 = 700, 4 = 900, 3 = 1100
500 numbers -> 5 = 5500, 4 = 7000, 3 = 8500

Done! Step 1 : Parsing, put numbers in the stack A if no errors are detected
Done! Step 2 : Check if the numbers in A are all sorted. If so, end the program 				without printing anything. It’d be preferable to write a function 					A_is_sorted()
Step 3 : If the size of A ≤ 5, call function sort_small_stack(). Else, call 				function sort_big_stack()
