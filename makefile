student:main.o add.o del.o show.o mod.o save.o exit.o sort.o del_all.o rev.o
	cc main.c add.c del.c show.c mod.c save.c exit.c sort.c del_all.c rev.c -o student

main.o:main.c 
	cc -c main.c
add.o:add.c 
	cc -c add.c
del.o:del.c 
	cc -c del.c
show.o:show.c
	cc -c show.c
mod.o:mod.c 
	cc -c mod.c
save.o:save.c 
	cc -c save.c
exit.o:exit.c 
	cc -c exit.c
sort.o:sort.c 
	cc -c sort.c
del_all.o:del_all.c 
	cc -c del_all.c
rev.o:rev.c 
	cc -c rev.c

