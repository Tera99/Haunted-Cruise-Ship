final: main.o dynQ.o room.o cabin.o hall.o pool.o lounge.o buffet.o theater.o gym.o casino.o finalScene.o
	g++ main.o dynQ.o room.o cabin.o hall.o pool.o lounge.o buffet.o theater.o gym.o casino.o finalScene.o -o final

main.o: main.cpp
	g++ -c main.cpp

dynQ.o: dynQ.cpp dynQ.hpp
	g++ -c dynQ.cpp

room.o: room.cpp room.hpp
	g++ -c room.cpp

cabin.o: cabin.cpp cabin.hpp
	g++ -c cabin.cpp

hall.o: hall.cpp hall.hpp
	g++ -c hall.cpp

pool.o: pool.cpp pool.hpp
	g++ -c pool.cpp

lounge.o: lounge.cpp lounge.hpp
	g++ -c lounge.cpp

buffet.o: buffet.cpp buffet.hpp
	g++ -c buffet.cpp

theater.o: theater.cpp theater.hpp
	g++ -c theater.cpp

gym.o: gym.cpp gym.hpp
	g++ -c gym.cpp

casino.o: casino.cpp casino.hpp
	g++ -c casino.cpp

finalScene.o: finalScene.cpp finalScene.hpp
	g++ -c finalScene.cpp

clean:
	rm *.o final    


