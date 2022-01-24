Makefile
exec name = push_swap
No segfault, etc...
No leaks
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

programme recoit liste de int en param


coder les operateurs


LEAKS SUR ALLOC SPLIT QUAND ERREUR ATOI!!
