all : cul

debug : FLAGS += -g
debug : cul

cul : src/*.cpp include/*.h
	g++ $(FLAGS) -I include/ -o cul src/*.cpp

clean :
	rm -fv cul
