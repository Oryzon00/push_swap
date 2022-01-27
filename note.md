
fonctions: write, read, malloc, free, exit.

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

fonction  a coder:

-calculer cost pour chaque elem
	DONE -calculer cost pour mettre au top de A (ra ou rra)
	DONE -calculer cost pour accueillir/ordonner stack B
-executer les actions (vider A)
DONE -vider B













// printf("content1 = %d, index1 = %d\n", stack_a->content, stack_a->index);
// printf("content2 = %d, index2 = %d\n", stack_a->next->content, stack_a->next->index);
// printf("content1 = %d, index1 = %d\n", stack_a->content, stack_a->index);
// printf("content2 = %d, index2 = %d\n", stack_a->next->content, stack_a->next->index);
